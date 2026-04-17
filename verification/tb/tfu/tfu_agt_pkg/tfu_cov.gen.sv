`ifndef TFU_COV__SV
`define TFU_COV__SV

class tfu_cov extends uvm_component;
   event cov_event;
   tfu_item tr;
   uvm_analysis_imp #(tfu_item, tfu_cov) cov_export;
   `uvm_component_utils(tfu_cov)
 
   covergroup cg_trans @(cov_event);
      // ToDo: coverpoint tr.kind;
      // ToDo: Add required tfu_coverpoints, tfu_coverbins
   endgroup: cg_trans


   function new(string name, uvm_component parent);
      super.new(name,parent);
      cg_trans = new;
      cov_export = new("tfu_coverage_Analysis",this);
   endfunction: new
   virtual function write(tfu_item tr);
      this.tr = tr;
      -> cov_event;
   endfunction: write

endclass: tfu_cov

`endif // TFU_COV__SV
