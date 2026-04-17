`ifndef SDP_TO_HSL_COV__SV
`define SDP_TO_HSL_COV__SV

class sdp_to_hsl_cov extends uvm_component;
   event cov_event;
   sdp_to_hsl_item tr;
   uvm_analysis_imp #(sdp_to_hsl_item, sdp_to_hsl_cov) cov_export;
   `uvm_component_utils(sdp_to_hsl_cov)
 
   covergroup cg_trans @(cov_event);
      // ToDo: coverpoint tr.kind;
      // ToDo: Add required sdp_to_hsl_coverpoints, sdp_to_hsl_coverbins
   endgroup: cg_trans


   function new(string name, uvm_component parent);
      super.new(name,parent);
      cg_trans = new;
      cov_export = new("sdp_to_hsl_coverage_Analysis",this);
   endfunction: new
   virtual function write(sdp_to_hsl_item tr);
      this.tr = tr;
      -> cov_event;
   endfunction: write

endclass: sdp_to_hsl_cov

`endif // SDP_TO_HSL_COV__SV
