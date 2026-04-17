`ifndef SDP_TO_HSL_MON_2COV_CONNECT
`define SDP_TO_HSL_MON_2COV_CONNECT

class sdp_to_hsl_mon2cov_connect extends uvm_component;
   sdp_to_hsl_cov cov;
   uvm_analysis_export # (sdp_to_hsl_item) an_exp;
   `uvm_component_utils(sdp_to_hsl_mon2cov_connect)
   function new(string name="", uvm_component parent=null);
   	super.new(name, parent);
   endfunction: new

   virtual function void write(sdp_to_hsl_item tr);
      cov.tr = tr;
      -> cov.cov_event;
   endfunction:write 

endclass: sdp_to_hsl_mon2cov_connect
`endif // SDP_TO_HSL_MON_2COV_CONNECT
