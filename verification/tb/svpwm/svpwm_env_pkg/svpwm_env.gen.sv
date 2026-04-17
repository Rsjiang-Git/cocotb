`ifndef SVPWM_ENV_SV
`define SVPWM_ENV_SV
typedef class svpwm_scb;
typedef class svpwm_vsqr;
typedef class svpwm_env_cfg;
// typedef class {reg_name};
class svpwm_env extends uvm_env;
    svpwm_env_cfg  cfg;
    cl_syoscbs#(svpwm_item) scbs;
    svpwm_block regmodel;
    svpwm_reg_adapter m_svpwm_agt_reg_adapter;
    svpwm_vsqr vsqr;
    // Declear agent
    svpwm_agt m_svpwm_agt;
    svt_ahb_system_env ahb_system_env;

    `uvm_component_utils(svpwm_env)

    extern function new(string name= "svpwm_env", uvm_component parent=null);
    extern virtual function void build_phase(uvm_phase phase);
    extern virtual function void connect_phase(uvm_phase phase);
    extern function void start_of_simulation_phase(uvm_phase phase);
    extern virtual task reset_phase(uvm_phase phase);
    extern virtual task configure_phase(uvm_phase phase);
    extern virtual task run_phase(uvm_phase phase);
    extern virtual function void report_phase(uvm_phase phase);
    extern virtual task shutdown_phase(uvm_phase phase);

endclass: svpwm_env

function svpwm_env::new(string name= "svpwm_env",uvm_component parent=null);
    super.new(name,parent);
endfunction:new

function void svpwm_env::build_phase(uvm_phase phase);
    super.build_phase(phase);
    // get dv_base_env_cfg object from uvm_config_db
    if (!uvm_config_db#(svpwm_env_cfg)::get(this, "", "cfg", cfg)) begin
        `uvm_fatal(get_full_name(), $sformatf("failed to get %s from uvm_config_db", cfg.get_type_name()))
    end

    m_svpwm_agt = svpwm_agt::type_id::create("m_svpwm_agt",this);
    uvm_config_db#(svpwm_cfg)::set(this, "m_svpwm_agt", "cfg", cfg.m_svpwm_cfg);

    ahb_system_env = svt_ahb_system_env::type_id::create("ahb_system_env",this);
    uvm_config_db#(svt_ahb_system_cfg)::set(this, "ahb_system_env", "cfg", cfg.ahb_system_cfg);

    vsqr = svpwm_vsqr::type_id::create("vsqr",this);
    //ToDo: Instantiate other components,callbacks and TLM ports if added by user  

    // create components

    // Pass the scoreboard configuration object to the config_db
    uvm_config_db #(cl_syoscbs_cfg)::set(this, "scbs", "cfg", cfg.syoscbs_cfg);
    scbs = cl_syoscbs#(svpwm_item)::type_id::create("scbs",this);

    regmodel = svpwm_block::type_id::create("regmodel",this);
    regmodel.build();
    // ral_sequence = reg_seq::type_id::create("ral_sequence");
    // ral_sequence.model = regmodel; 
    m_svpwm_agt_reg_adapter = new("m_svpwm_agt_reg_adapter");
endfunction: build_phase

function void svpwm_env::connect_phase(uvm_phase phase);
    cl_syoscb_subscriber subscriber;

    super.connect_phase(phase);
    begin
      pk_utils_uvm::filter_trfm #(svpwm_item, uvm_sequence_item) ft;
      ft = this.scbs.get_filter_trfm("DUT", "P1", 0);
      //Connect agents to filter transforms
      m_svpwm_agt.mon.mon_analysis_port.connect(ft.analysis_export);
      ft = this.scbs.get_filter_trfm("REF", "P1", 0);
      m_svpwm_agt.mon.mon_analysis_port.connect(ft.analysis_export);
    end
    begin
      pk_utils_uvm::filter_trfm #(svpwm_item, uvm_sequence_item) ft;
      ft = this.scbs.get_filter_trfm("DUT", "P1", 1);
      //Connect agents to filter transforms
      ahb_system_env.mon.mon_analysis_port.connect(ft.analysis_export);
      ft = this.scbs.get_filter_trfm("REF", "P1", 1);
      ahb_system_env.mon.mon_analysis_port.connect(ft.analysis_export);
    end

    regmodel.default_map.set_sequencer(m_svpwm_agt.sqr,m_svpwm_agt_reg_adapter);
    // MULT_DRV_START
    // regmodel.default_map.set_sequencer(mast_seqr_0,m_m_svpwm_agt_reg_adapter);
    // MULT_DRV_END
    $cast(vsqr.m_svpwm_sqr, m_svpwm_agt.sqr);
    $cast(vsqr.ahb_system_sqr, ahb_system_env.sqr);
    // ToDo: Register any required callbacks

endfunction: connect_phase

function void svpwm_env::start_of_simulation_phase(uvm_phase phase);
    super.start_of_simulation_phase(phase);
    //ToDo : Implement this phase here
endfunction: start_of_simulation_phase


task svpwm_env::reset_phase(uvm_phase phase);
    super.reset_phase(phase);
    phase.raise_objection(this,"Resetting the DUT...");
    //ToDo: Reset DUT
    phase.drop_objection(this);
endtask:reset_phase

task svpwm_env::configure_phase (uvm_phase phase);
    super.configure_phase(phase);
    phase.raise_objection(this,"");
    //ToDo: Configure components here
    phase.drop_objection(this);
endtask:configure_phase

task svpwm_env::run_phase(uvm_phase phase);
    super.run_phase(phase);
    phase.raise_objection(this,"");
    //ToDo: Run your simulation here
    phase.drop_objection(this);
endtask:run_phase

function void svpwm_env::report_phase(uvm_phase phase);
    super.report_phase(phase);
    //ToDo: Implement this phase here
endfunction:report_phase

task svpwm_env::shutdown_phase(uvm_phase phase);
    super.shutdown_phase(phase);
    //ToDo: Implement this phase here
endtask:shutdown_phase
`endif // SVPWM_ENV_SV