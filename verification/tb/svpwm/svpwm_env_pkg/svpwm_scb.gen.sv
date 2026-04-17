`ifndef SVPWM_SCB__SV
`define SVPWM_SCB__SV


class svpwm_scb extends uvm_scoreboard;

   svpwm_env_cfg  cfg;
   uvm_analysis_export #(svpwm_item) before_export, after_export;
   uvm_in_order_class_comparator #(svpwm_item) comparator;

   `uvm_component_utils(svpwm_scb)
	extern function new(string name = "svpwm_scb",
                    uvm_component parent = null); 
	extern virtual function void build_phase (uvm_phase phase);
	extern virtual function void connect_phase (uvm_phase phase);
	extern virtual function void report_phase(uvm_phase phase);

endclass: svpwm_scb


function svpwm_scb::new(string name = "svpwm_scb", uvm_component parent);
   super.new(name,parent);
endfunction: new

function void svpwm_scb::build_phase(uvm_phase phase);
    super.build_phase(phase);
    before_export = new("before_export", this);
    after_export  = new("after_export", this);
    comparator    = new("comparator", this);
endfunction:build_phase

function void svpwm_scb::connect_phase(uvm_phase phase);
    before_export.connect(comparator.before_export);
    after_export.connect(comparator.after_export);
endfunction:connect_phase

function void svpwm_scb::report_phase(uvm_phase phase);
    super.report_phase(phase);
    `uvm_info("svpwm_scb_RPT", $psprintf("Matches = %0d, Mismatches = %0d",
               comparator.m_matches, comparator.m_mismatches),
               UVM_MEDIUM);
endfunction:report_phase

`endif // SVPWM_SCB__SV