`ifndef UART_MON_2COV_CONNECT
`define UART_MON_2COV_CONNECT

class uart_mon2cov_connect extends uvm_component;
   uart_cov cov;
   uvm_analysis_export # (uart_item) an_exp;
   `uvm_component_utils(uart_mon2cov_connect)
   function new(string name="", uvm_component parent=null);
   	super.new(name, parent);
   endfunction: new

   virtual function void write(uart_item tr);
      cov.tr = tr;
      -> cov.cov_event;
   endfunction:write 

endclass: uart_mon2cov_connect
`endif // UART_MON_2COV_CONNECT
