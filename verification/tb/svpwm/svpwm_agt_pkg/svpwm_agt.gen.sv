`ifndef SVPWM_AGT__SV
`define SVPWM_AGT__SV

class svpwm_agt extends uvm_agent;
    // ToDo: add sub environmnet properties here
    protected uvm_active_passive_enum is_active = UVM_ACTIVE;
    svpwm_cfg cfg;
    svpwm_cov cov;
    svpwm_drv drv;
    svpwm_sqr sqr;
    svpwm_mon mon;
    svpwm_mon2cov_connect mon2cov;

    typedef virtual svpwm_if vif;
    vif agt_if;
    `uvm_component_utils(svpwm_agt)

    function new(string name = "svpwm_agt", uvm_component parent = null);
        super.new(name, parent);
    endfunction: new

    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        // get CFG_T object from uvm_config_db
        if (!uvm_config_db#(svpwm_cfg)::get(this, "", "cfg", cfg)) begin
            `uvm_fatal(get_full_name(), $sformatf("failed to get %s from uvm_config_db", cfg.get_type_name()))
        end
        `uvm_info(get_full_name(), $sformatf("\n%0s", cfg.sprint()), UVM_HIGH)

        // create components
        if (cfg.en_cov) begin
            cov = svpwm_cov ::type_id::create("cov", this);
            mon2cov  = svpwm_mon2cov_connect::type_id::create("mon2cov", this);
            mon2cov.cov  = cov;
        end
        mon = svpwm_mon::type_id::create("mon", this);
        if (is_active == UVM_ACTIVE) begin
           sqr = svpwm_sqr::type_id::create("sqr", this);
           drv = svpwm_drv::type_id::create("drv", this);
        end
        if (!uvm_config_db#(vif)::get(this, "", "if", agt_if)) begin
           `uvm_fatal("AGT/NOVIF", "No virtual interface specified for this agent instance")
        end
        uvm_config_db# (vif)::set(this,"drv","drv_if", agt_if);
        uvm_config_db# (vif)::set(this,"mon","mon_if", agt_if);
    endfunction: build_phase

    virtual function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        if (is_active == UVM_ACTIVE) begin
           drv.seq_item_port.connect(sqr.seq_item_export);
        end
        mon.mon_analysis_port.connect(cov.cov_export);

    endfunction: connect_phase

    virtual task run_phase(uvm_phase phase);
        super.run_phase(phase);
        phase.raise_objection(this,"slv_agt_run");

        //ToDo :: Implement here

        phase.drop_objection(this);
    endtask: run_phase

    virtual function void report_phase(uvm_phase phase);
        super.report_phase(phase);

        //ToDo :: Implement here

    endfunction: report_phase

endclass:svpwm_agt

`endif // SVPWM_AGT__SV
