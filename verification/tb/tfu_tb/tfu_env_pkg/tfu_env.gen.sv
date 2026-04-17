`ifndef TFU_ENV_SV
`define TFU_ENV_SV
typedef class tfu_scb;
typedef class tfu_vsqr;
typedef class tfu_env_cfg;
// typedef class {reg_name};
class tfu_env extends uvm_env;
    tfu_env_cfg  cfg;
    cl_syoscbs#(tfu_item) scbs;
    empty_reg_block regmodel;
    tfu_reg_adapter m_tfu_agt_reg_adapter;
    tfu_vsqr vsqr;
    // Declear agent
    tfu_agt m_tfu_agt;
    m_svt_system_env svt_system_env;

    `uvm_component_utils(tfu_env)

    extern function new(string name= "tfu_env", uvm_component parent=null);
    extern virtual function void build_phase(uvm_phase phase);
    extern virtual function void connect_phase(uvm_phase phase);
    extern function void start_of_simulation_phase(uvm_phase phase);
    extern virtual task reset_phase(uvm_phase phase);
    extern virtual task configure_phase(uvm_phase phase);
    extern virtual task run_phase(uvm_phase phase);
    extern virtual function void report_phase(uvm_phase phase);
    extern virtual task shutdown_phase(uvm_phase phase);

endclass: tfu_env

function tfu_env::new(string name= "tfu_env",uvm_component parent=null);
    super.new(name,parent);
endfunction:new

function void tfu_env::build_phase(uvm_phase phase);
    super.build();
    // get dv_base_env_cfg object from uvm_config_db
    if (!uvm_config_db#(tfu_env_cfg)::get(this, "", "cfg", cfg)) begin
        `uvm_fatal(get_full_name(), $sformatf("failed to get %s from uvm_config_db", cfg.get_type_name()))
    end

    m_tfu_agt = tfu_agt::type_id::create("m_tfu_agt",this);
    uvm_config_db#(tfu_cfg)::set(this, "m_tfu_agt", "cfg", cfg.m_tfu_cfg);

    svt_system_env = m_svt_system_env::type_id::create("svt_system_env",this);
    uvm_config_db#(m_svt_system_cfg)::set(this, "svt_system_env", "cfg", cfg.svt_system_cfg);

    vsqr = tfu_vsqr::type_id::create("vsqr",this);
    //ToDo: Instantiate other components,callbacks and TLM ports if added by user  

    // create components

    // Pass the scoreboard configuration object to the config_db
    uvm_config_db #(cl_syoscbs_cfg)::set(this, "scbs", "cfg", cfg.syoscbs_cfg);
    scbs = cl_syoscbs#(tfu_item)::type_id::create("scbs",this);

    regmodel = empty_reg_block::type_id::create("regmodel",this);
    regmodel.build();
    // ral_sequence = reg_seq::type_id::create("ral_sequence");
    // ral_sequence.model = regmodel; 
    m_tfu_agt_reg_adapter = new("m_tfu_agt_reg_adapter");
endfunction: build_phase

function void tfu_env::connect_phase(uvm_phase phase);
    cl_syoscb_subscriber subscriber;

    super.connect_phase(phase);
    begin
      pk_utils_uvm::filter_trfm #(tfu_item, uvm_sequence_item) ft;
      ft = this.scbs.get_filter_trfm("DUT", "P1", 0);
      //Connect agents to filter transforms
      m_tfu_agt.mon.mon_analysis_port.connect(ft.analysis_export);
      ft = this.scbs.get_filter_trfm("REF", "P1", 0);
      m_tfu_agt.mon.mon_analysis_port.connect(ft.analysis_export);
    end
    begin
      pk_utils_uvm::filter_trfm #(tfu_item, uvm_sequence_item) ft;
      ft = this.scbs.get_filter_trfm("DUT", "P1", 1);
      //Connect agents to filter transforms
      svt_system_env.mon.mon_analysis_port.connect(ft.analysis_export);
      ft = this.scbs.get_filter_trfm("REF", "P1", 1);
      svt_system_env.mon.mon_analysis_port.connect(ft.analysis_export);
    end

    regmodel.default_map.set_sequencer(m_tfu_agt.sqr,m_tfu_agt_reg_adapter);
    // MULT_DRV_START
    // regmodel.default_map.set_sequencer(mast_seqr_0,m_m_tfu_agt_reg_adapter);
    // MULT_DRV_END
    $cast(vsqr.m_tfu_sqr, m_tfu_agt.sqr);
    $cast(vsqr.svt_system_sqr, svt_system_env.sqr);
    // ToDo: Register any required callbacks

endfunction: connect_phase

function void tfu_env::start_of_simulation_phase(uvm_phase phase);
    super.start_of_simulation_phase(phase);
    //ToDo : Implement this phase here
endfunction: start_of_simulation_phase


task tfu_env::reset_phase(uvm_phase phase);
    super.reset_phase(phase);
    phase.raise_objection(this,"Resetting the DUT...");
    //ToDo: Reset DUT
    phase.drop_objection(this);
endtask:reset_phase

task tfu_env::configure_phase (uvm_phase phase);
    super.configure_phase(phase);
    phase.raise_objection(this,"");
    //ToDo: Configure components here
    phase.drop_objection(this);
endtask:configure_phase

task tfu_env::run_phase(uvm_phase phase);
    super.run_phase(phase);
    phase.raise_objection(this,"");
    //ToDo: Run your simulation here
    phase.drop_objection(this);
endtask:run_phase

function void tfu_env::report_phase(uvm_phase phase);
    super.report_phase(phase);
    //ToDo: Implement this phase here
endfunction:report_phase

task tfu_env::shutdown_phase(uvm_phase phase);
    super.shutdown_phase(phase);
    //ToDo: Implement this phase here
endtask:shutdown_phase
`endif // TFU_ENV_SV