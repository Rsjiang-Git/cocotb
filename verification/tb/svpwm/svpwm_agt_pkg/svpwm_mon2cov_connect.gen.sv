`ifndef SVPWM_MON_2COV_CONNECT
`define SVPWM_MON_2COV_CONNECT

class svpwm_mon2cov_connect extends uvm_component;
   svpwm_cov cov;
   uvm_analysis_export # (svpwm_item) an_exp;
   `uvm_component_utils(svpwm_mon2cov_connect)
   function new(string name="", uvm_component parent=null);
   	super.new(name, parent);
   endfunction: new

   virtual function void write(svpwm_item tr);
      cov.tr = tr;
      -> cov.cov_event;
   endfunction:write 

endclass: svpwm_mon2cov_connect
`endif // SVPWM_MON_2COV_CONNECT
