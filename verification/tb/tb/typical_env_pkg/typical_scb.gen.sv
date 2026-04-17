`ifndef TYPICAL_SCB__SV
`define TYPICAL_SCB__SV


class typical_scb extends uvm_scoreboard;

   typical_env_cfg  cfg;
   uvm_analysis_export #(uart_item) before_export, after_export;
   uvm_in_order_class_comparator #(uart_item) comparator;

   `uvm_component_utils(typical_scb)
	extern function new(string name = "typical_scb",
                    uvm_component parent = null); 
	extern virtual function void build_phase (uvm_phase phase);
	extern virtual function void connect_phase (uvm_phase phase);
	extern virtual function void report_phase(uvm_phase phase);

endclass: typical_scb


function typical_scb::new(string name = "typical_scb", uvm_component parent);
   super.new(name,parent);
endfunction: new

function void typical_scb::build_phase(uvm_phase phase);
    super.build_phase(phase);
    before_export = new("before_export", this);
    after_export  = new("after_export", this);
    comparator    = new("comparator", this);
endfunction:build_phase

function void typical_scb::connect_phase(uvm_phase phase);
    before_export.connect(comparator.before_export);
    after_export.connect(comparator.after_export);
endfunction:connect_phase

function void typical_scb::report_phase(uvm_phase phase);
    super.report_phase(phase);
    `uvm_info("typical_scb_RPT", $psprintf("Matches = %0d, Mismatches = %0d",
               comparator.m_matches, comparator.m_mismatches),
               UVM_MEDIUM);
endfunction:report_phase

`endif // TYPICAL_SCB__SV