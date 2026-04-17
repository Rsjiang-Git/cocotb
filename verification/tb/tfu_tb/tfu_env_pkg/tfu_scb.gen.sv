`ifndef TFU_SCB__SV
`define TFU_SCB__SV


class tfu_scb extends uvm_scoreboard;

   tfu_env_cfg  cfg;
   uvm_analysis_export #(tfu_item) before_export, after_export;
   uvm_in_order_class_comparator #(tfu_item) comparator;

   `uvm_component_utils(tfu_scb)
	extern function new(string name = "tfu_scb",
                    uvm_component parent = null); 
	extern virtual function void build_phase (uvm_phase phase);
	extern virtual function void connect_phase (uvm_phase phase);
	extern virtual function void report_phase(uvm_phase phase);

endclass: tfu_scb


function tfu_scb::new(string name = "tfu_scb", uvm_component parent);
   super.new(name,parent);
endfunction: new

function void tfu_scb::build_phase(uvm_phase phase);
    super.build_phase(phase);
    before_export = new("before_export", this);
    after_export  = new("after_export", this);
    comparator    = new("comparator", this);
endfunction:build_phase

function void tfu_scb::connect_phase(uvm_phase phase);
    before_export.connect(comparator.before_export);
    after_export.connect(comparator.after_export);
endfunction:connect_phase

function void tfu_scb::report_phase(uvm_phase phase);
    super.report_phase(phase);
    `uvm_info("tfu_scb_RPT", $psprintf("Matches = %0d, Mismatches = %0d",
               comparator.m_matches, comparator.m_mismatches),
               UVM_MEDIUM);
endfunction:report_phase

`endif // TFU_SCB__SV