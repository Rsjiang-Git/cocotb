`ifndef SVPWM_ENV_CFG__SV
`define SVPWM_ENV_CFG__SV

class svpwm_env_cfg extends uvm_object; 

  bit is_active         = 1;
  bit en_scb            = 1; // can be changed at run-time
  bit en_cov            = 0; // Enable via plusarg, only if coverage collection is turned on.
  bit under_reset       = 0;
  bit is_initialized;        // Indicates that the initialize() method has been called.
  // The scope and runtime of a existing test can be reduced by setting this variable. This is
  // useful to keep the runtime down especially in time-sensitive runs such as CI, which is meant
  // to check the code health and not find design bugs. It is set via plusarg and retrieved in
  // `dv_base_test`.
  bit smoke_test = 0;

  // bit to configure all uvcs with zero delays to create high bw test
  rand bit zero_delays;
  // sub-configure object
  svpwm_cfg m_svpwm_cfg;
  svt_ahb_system_cfg ahb_system_cfg;
  cl_syoscbs_cfg syoscbs_cfg;
  int              NUM_SCB = 2;
  string           producers[] = '{"P1"};
  string           queues[] = '{"DUT", "REF"};

  // set zero_delays 40% of the time
  constraint zero_delays_c {
    zero_delays dist {1'b0 := 6, 1'b1 := 4};
  }
  // reg model & q of valid csr addresses
  svpwm_block         ral;
  svpwm_block ral_models[string];

  // A queue of the names of RAL models that should be created in the `initialize` function
  // Related agents, adapters will be created in env as well as connecting them with scb
  // For example, if the IP has an additional RAL model named `ral1`, add it into the list as below
  //   virtual function void initialize(bit [TL_AW-1:0] csr_base_addr = '1);
  //     ral_model_names.push_back("ral1");
  //     super.initialize(csr_base_addr);
  string ral_model_names[$] = {svpwm_block::type_name};

  `uvm_object_param_utils_begin(svpwm_env_cfg)
    `uvm_field_int   (is_active,   UVM_DEFAULT)
    `uvm_field_int   (en_scb,      UVM_DEFAULT)
    `uvm_field_int   (en_cov,      UVM_DEFAULT)
    `uvm_field_int   (zero_delays, UVM_DEFAULT)
  `uvm_object_utils_end

  function new(string name = "");
    super.new(name);
  endfunction: new

  virtual function void initialize(bit [31:0] csr_base_addr = '1);
    is_initialized = 1'b1;

    m_svpwm_cfg = svpwm_cfg::type_id::create("m_svpwm_cfg");
    ahb_system_cfg = svt_ahb_system_cfg::type_id::create("ahb_system_cfg");
    this.syoscbs_cfg = cl_syoscbs_cfg::type_id::create("syoscbs_cfg");
    //Create an scb wrapper named my_syoscbs with 10 scoreboards. They will be named "scb[i]",
    //and each will have queues named "DUT", "REF", and each queue will have producers "P1" and "P2"
    this.syoscbs_cfg.init("scbs", NUM_SCB, '{"scb"}, queues, producers);
    for(int i=0; i<NUM_SCB; i++) begin
      cl_syoscb_cfg cfg = this.syoscbs_cfg.get_cfg(i);
      cfg.set_compare_type(pk_syoscb::SYOSCB_COMPARE_IO);
      cfg.set_queue_type(pk_syoscb::SYOSCB_QUEUE_STD);
      this.syoscbs_cfg.set_cfg(cfg, i);
    end
    // build the ral model
    create_ral_models(csr_base_addr);

  endfunction

  // Set pre-build RAL knobs.
  //
  // This method enables setting pre-build config knobs that can be used to control how the RAL
  // sub-structures are created.
  protected virtual function void pre_build_ral_settings(svpwm_block ral);
  endfunction

  // Perform post-build, pre-lock modifications to the RAL.
  //
  // For some registers / fields, the correct access policies or reset values may not be set. Fixes
  // like those can be made with this method.
  protected virtual function void post_build_ral_settings(svpwm_block ral);
  endfunction

  // Creates RAL models and sets their base address based on the supplied arg.
  //
  // csr_base_addr is the base address to set to the RAL models. If it is all 1s, then we treat that
  // as an indication to randomize the base address internally instead.
  virtual function void create_ral_models(bit [31:0] csr_base_addr = '1);

    foreach (ral_model_names[i]) begin
      string ral_name = ral_model_names[i];
      bit randomize_base_addr = &csr_base_addr;
      svpwm_block reg_blk = create_ral_by_name(ral_name);

      if (reg_blk.get_name() == svpwm_block::type_name) $cast(ral, reg_blk);

      // Build the register block with an arbitrary base address (we choose 0). We'll change it
      // later.
      pre_build_ral_settings(reg_blk);
      reg_blk.build();
      // reg_blk.addr_width = bus_params_pkg::BUS_AW;
      // reg_blk.data_width = bus_params_pkg::BUS_DW;
      // reg_blk.be_width = bus_params_pkg::BUS_DBW;
      post_build_ral_settings(reg_blk);
      reg_blk.lock_model();

      // Now the model is locked, we know its layout. Set the base address for the register block.
      // reg_blk.set_base_addr(.base_addr(`UVM_REG_ADDR_WIDTH'(csr_base_addr)),
      //                       .randomize_base_addr(randomize_base_addr));

      // // Get list of valid csr addresses (useful in seq to randomize addr as well as in scb checks)
      // reg_blk.compute_mapped_addr_ranges();
      // reg_blk.compute_unmapped_addr_ranges();
      ral_models[ral_name] = reg_blk;
    end

    if (ral_model_names.size > 0) begin
      if (!ral_models.exists(svpwm_block::type_name))
      `uvm_fatal(get_full_name(), "RAL ERROR")
    end
  endfunction

  virtual function svpwm_block create_ral_by_name(string name);
    uvm_object        obj;
    uvm_factory       factory;
    svpwm_block ral;

    factory = uvm_factory::get();
    obj = factory.create_object_by_name(.requested_type_name(name), .name(name));
    if (obj == null) begin
      // print factory overrides to help debug
      factory.print();
      `uvm_fatal(get_type_name(), $sformatf("could not create %0s as a RAL model, see above for a list of                                     type/instance overrides", name))
    end
    if (!$cast(ral, obj)) begin
      `uvm_fatal(get_type_name(), $sformatf("cast failed - %0s is not a svpwm_block", name))
    end
    return ral;
  endfunction:create_ral_by_name

endclass: svpwm_env_cfg

`endif // SVPWM_ENV_CFG__SV
