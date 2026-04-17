`ifndef TFU_MON_2COV_CONNECT
`define TFU_MON_2COV_CONNECT

class tfu_mon2cov_connect extends uvm_component;
   tfu_cov cov;
   uvm_analysis_export # (tfu_item) an_exp;
   `uvm_component_utils(tfu_mon2cov_connect)
   function new(string name="", uvm_component parent=null);
   	super.new(name, parent);
   endfunction: new

   virtual function void write(tfu_item tr);
      cov.tr = tr;
      -> cov.cov_event;
   endfunction:write 

endclass: tfu_mon2cov_connect
`endif // TFU_MON_2COV_CONNECT
