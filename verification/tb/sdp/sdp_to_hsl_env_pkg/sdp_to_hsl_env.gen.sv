`ifndef SDP_TO_HSL_ENV_SV
`define SDP_TO_HSL_ENV_SV
typedef class sdp_to_hsl_scb;
typedef class sdp_to_hsl_vsqr;
typedef class sdp_to_hsl_env_cfg;
// typedef class {reg_name};
class sdp_to_hsl_env extends uvm_env;
    sdp_to_hsl_env_cfg  cfg;
    sdp_to_hsl_scb scb;
    sdp_to_hsl_block regmodel;
    sdp_to_hsl_reg_adapter m_sdp_to_hsl_agt_reg_adapter;
    sdp_to_hsl_vsqr vsqr;
    // Declear agent
    sdp_to_hsl_agt m_sdp_to_hsl_agt;
    svt_ahb_system_env ahb_system_env;

    `uvm_component_utils(sdp_to_hsl_env)

    extern function new(string name= "sdp_to_hsl_env", uvm_component parent=null);
    extern virtual function void build_phase(uvm_phase phase);
    extern virtual function void connect_phase(uvm_phase phase);
    extern function void start_of_simulation_phase(uvm_phase phase);
    extern virtual task reset_phase(uvm_phase phase);
    extern virtual task configure_phase(uvm_phase phase);
    extern virtual task run_phase(uvm_phase phase);
    extern virtual function void report_phase(uvm_phase phase);
    extern virtual task shutdown_phase(uvm_phase phase);

endclass: sdp_to_hsl_env

function sdp_to_hsl_env::new(string name= "sdp_to_hsl_env",uvm_component parent=null);
    super.new(name,parent);
endfunction:new

function void sdp_to_hsl_env::build_phase(uvm_phase phase);
    super.build_phase(phase);
    // get dv_base_env_cfg object from uvm_config_db
    if (!uvm_config_db#(sdp_to_hsl_env_cfg)::get(this, "", "cfg", cfg)) begin
        `uvm_fatal(get_full_name(), $sformatf("failed to get %s from uvm_config_db", cfg.get_type_name()))
    end

    m_sdp_to_hsl_agt = sdp_to_hsl_agt::type_id::create("m_sdp_to_hsl_agt",this);
    uvm_config_db#(sdp_to_hsl_cfg)::set(this, "m_sdp_to_hsl_agt", "cfg", cfg.m_sdp_to_hsl_cfg);

    ahb_system_env = svt_ahb_system_env::type_id::create("ahb_system_env",this);
    uvm_config_db#(svt_ahb_system_cfg)::set(this, "ahb_system_env", "cfg", cfg.ahb_system_cfg);

    vsqr = sdp_to_hsl_vsqr::type_id::create("vsqr",this);
    //ToDo: Instantiate other components,callbacks and TLM ports if added by user  

    // create components

    scb = sdp_to_hsl_scb::type_id::create("scb",this);
    scb.cfg = cfg;

    regmodel = sdp_to_hsl_block::type_id::create("regmodel",this);
    regmodel.build();
    // ral_sequence = reg_seq::type_id::create("ral_sequence");
    // ral_sequence.model = regmodel; 
    m_sdp_to_hsl_agt_reg_adapter = new("m_sdp_to_hsl_agt_reg_adapter");
endfunction: build_phase

function void sdp_to_hsl_env::connect_phase(uvm_phase phase);

    super.connect_phase(phase);

    regmodel.default_map.set_sequencer(m_sdp_to_hsl_agt.sqr,m_sdp_to_hsl_agt_reg_adapter);
    // MULT_DRV_START
    // regmodel.default_map.set_sequencer(mast_seqr_0,m_m_sdp_to_hsl_agt_reg_adapter);
    // MULT_DRV_END
    $cast(vsqr.m_sdp_to_hsl_sqr, m_sdp_to_hsl_agt.sqr);
    $cast(vsqr.ahb_system_sqr, ahb_system_env.sqr);
    // ToDo: Register any required callbacks

endfunction: connect_phase

function void sdp_to_hsl_env::start_of_simulation_phase(uvm_phase phase);
    super.start_of_simulation_phase(phase);
    //ToDo : Implement this phase here
endfunction: start_of_simulation_phase


task sdp_to_hsl_env::reset_phase(uvm_phase phase);
    super.reset_phase(phase);
    phase.raise_objection(this,"Resetting the DUT...");
    //ToDo: Reset DUT
    phase.drop_objection(this);
endtask:reset_phase

task sdp_to_hsl_env::configure_phase (uvm_phase phase);
    super.configure_phase(phase);
    phase.raise_objection(this,"");
    //ToDo: Configure components here
    phase.drop_objection(this);
endtask:configure_phase

task sdp_to_hsl_env::run_phase(uvm_phase phase);
    super.run_phase(phase);
    phase.raise_objection(this,"");
    //ToDo: Run your simulation here
    phase.drop_objection(this);
endtask:run_phase

function void sdp_to_hsl_env::report_phase(uvm_phase phase);
    super.report_phase(phase);
    //ToDo: Implement this phase here
endfunction:report_phase

task sdp_to_hsl_env::shutdown_phase(uvm_phase phase);
    super.shutdown_phase(phase);
    //ToDo: Implement this phase here
endtask:shutdown_phase
`endif // SDP_TO_HSL_ENV_SV