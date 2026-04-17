`ifndef BASE_TEST__SV
`define BASE_TEST__SV

class base_test extends uvm_test;

  `uvm_component_utils(base_test)

  tfu_env_cfg  cfg;
  tfu_env env;
  bit    print_topology  = 1'b0;

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  virtual function void build_phase(uvm_phase phase);
    string seq_name;
    uvm_factory factory;
    super.build_phase(phase);
    env = tfu_env::type_id::create("env", this);
    cfg = tfu_env_cfg::type_id::create("cfg", this);
    cfg.initialize();
    uvm_config_db#(tfu_env_cfg)::set(this, "env", "cfg", cfg);

    // Enable scoreboard (and sub-scoreboard checks) via plusarg.
    void'($value$plusargs("en_scb=%0b", cfg.en_scb));
    // Enable fastest design performance by configuring zero delays in all agents.
    void'($value$plusargs("zero_delays=%0b", cfg.zero_delays));
    // Enable coverage collection.
    void'($value$plusargs("en_cov=%0b", cfg.en_cov));

    // Enable reduced runtime test.
    void'($value$plusargs("smoke_test=%0b", cfg.smoke_test));

    // Enable print_topology
    void'($value$plusargs("print_topology=%0b", print_topology));
    uvm_top.enable_print_topology = print_topology;
  endfunction

  virtual task main_phase(uvm_phase phase);
    string seq_name;
    uvm_object obj;
    uvm_factory factory;
    uvm_sequence seq;


    super.main_phase(phase);
    phase.raise_objection(this);
    factory = uvm_factory::get();
    void'($value$plusargs("UVM_TEST_SEQ=%0s", seq_name));
    obj = factory.create_object_by_name(seq_name, "", seq_name);
    if (obj == null)  begin
      factory.print(1);
      `uvm_fatal(get_full_name(), $sformatf("can not create %0s seq", seq_name))
    end
    if (!$cast(seq, obj))  begin
      `uvm_fatal(get_full_name(), $sformatf("cast failed - %0s is not a uvm_sequence", seq_name))
    end
    seq.start(env.vsqr);
    phase.drop_objection(this);
  endtask: main_phase

endclass : base_test

`endif //BASE_TEST__SV
