`ifndef SVPWM_COV__SV
`define SVPWM_COV__SV

class svpwm_cov extends uvm_component;
   event cov_event;
   svpwm_item tr;
   uvm_analysis_imp #(svpwm_item, svpwm_cov) cov_export;
   `uvm_component_utils(svpwm_cov)
 
   covergroup cg_trans @(cov_event);
      // ToDo: coverpoint tr.kind;
      // ToDo: Add required svpwm_coverpoints, svpwm_coverbins
   endgroup: cg_trans


   function new(string name, uvm_component parent);
      super.new(name,parent);
      cg_trans = new;
      cov_export = new("svpwm_coverage_Analysis",this);
   endfunction: new
   virtual function write(svpwm_item tr);
      this.tr = tr;
      -> cov_event;
   endfunction: write

endclass: svpwm_cov

`endif // SVPWM_COV__SV
