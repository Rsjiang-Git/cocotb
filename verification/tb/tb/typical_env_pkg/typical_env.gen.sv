`ifndef TYPICAL_ENV_SV
`define TYPICAL_ENV_SV
typedef class typical_scb;
typedef class typical_vsqr;
typedef class typical_env_cfg;
// typedef class {reg_name};
class typical_env extends uvm_env;
    typical_env_cfg  cfg;
    cl_syoscbs#(uart_item) scbs;
    empty_reg_block regmodel;
    uart_reg_adapter m_uart_agt_reg_adapter;
    typical_vsqr vsqr;
    // Declear agent
    uart_agt m_uart_agt;

    `uvm_component_utils(typical_env)

    extern function new(string name= "typical_env", uvm_component parent=null);
    extern virtual function void build_phase(uvm_phase phase);
    extern virtual function void connect_phase(uvm_phase phase);
    extern function void start_of_simulation_phase(uvm_phase phase);
    extern virtual task reset_phase(uvm_phase phase);
    extern virtual task configure_phase(uvm_phase phase);
    extern virtual task run_phase(uvm_phase phase);
    extern virtual function void report_phase(uvm_phase phase);
    extern virtual task shutdown_phase(uvm_phase phase);

endclass: typical_env

function typical_env::new(string name= "typical_env",uvm_component parent=null);
    super.new(name,parent);
endfunction:new

function void typical_env::build_phase(uvm_phase phase);
    super.build();
    // get dv_base_env_cfg object from uvm_config_db
    if (!uvm_config_db#(typical_env_cfg)::get(this, "", "cfg", cfg)) begin
        `uvm_fatal(get_full_name(), $sformatf("failed to get %s from uvm_config_db", cfg.get_type_name()))
    end

    m_uart_agt = uart_agt::type_id::create("m_uart_agt",this);
    uvm_config_db#(uart_cfg)::set(this, "m_uart_agt", "cfg", cfg.m_uart_cfg);

    vsqr = typical_vsqr::type_id::create("vsqr",this);
    //ToDo: Instantiate other components,callbacks and TLM ports if added by user  

    // create components

    // Pass the scoreboard configuration object to the config_db
    uvm_config_db #(cl_syoscbs_cfg)::set(this, "scbs", "cfg", cfg.syoscbs_cfg);
    scbs = cl_syoscbs#(uart_item)::type_id::create("scbs",this);

    regmodel = empty_reg_block::type_id::create("regmodel",this);
    regmodel.build();
    // ral_sequence = reg_seq::type_id::create("ral_sequence");
    // ral_sequence.model = regmodel; 
    m_uart_agt_reg_adapter = new("m_uart_agt_reg_adapter");
endfunction: build_phase

function void typical_env::connect_phase(uvm_phase phase);
    cl_syoscb_subscriber subscriber;

    super.connect_phase(phase);
    begin
      pk_utils_uvm::filter_trfm #(uart_item, uvm_sequence_item) ft;
      ft = this.scbs.get_filter_trfm("DUT", "P1", 0);
      //Connect agents to filter transforms
      m_uart_agt.mon.mon_analysis_port.connect(ft.analysis_export);
      ft = this.scbs.get_filter_trfm("REF", "P1", 0);
      m_uart_agt.mon.mon_analysis_port.connect(ft.analysis_export);
    end

    regmodel.default_map.set_sequencer(m_uart_agt.sqr,m_uart_agt_reg_adapter);
    // MULT_DRV_START
    // regmodel.default_map.set_sequencer(mast_seqr_0,m_m_uart_agt_reg_adapter);
    // MULT_DRV_END
    $cast(vsqr.m_uart_sqr, m_uart_agt.sqr);
    // ToDo: Register any required callbacks

endfunction: connect_phase

function void typical_env::start_of_simulation_phase(uvm_phase phase);
    super.start_of_simulation_phase(phase);
    //ToDo : Implement this phase here
endfunction: start_of_simulation_phase


task typical_env::reset_phase(uvm_phase phase);
    super.reset_phase(phase);
    phase.raise_objection(this,"Resetting the DUT...");
    //ToDo: Reset DUT
    phase.drop_objection(this);
endtask:reset_phase

task typical_env::configure_phase (uvm_phase phase);
    super.configure_phase(phase);
    phase.raise_objection(this,"");
    //ToDo: Configure components here
    phase.drop_objection(this);
endtask:configure_phase

task typical_env::run_phase(uvm_phase phase);
    super.run_phase(phase);
    phase.raise_objection(this,"");
    //ToDo: Run your simulation here
    phase.drop_objection(this);
endtask:run_phase

function void typical_env::report_phase(uvm_phase phase);
    super.report_phase(phase);
    //ToDo: Implement this phase here
endfunction:report_phase

task typical_env::shutdown_phase(uvm_phase phase);
    super.shutdown_phase(phase);
    //ToDo: Implement this phase here
endtask:shutdown_phase
`endif // TYPICAL_ENV_SV