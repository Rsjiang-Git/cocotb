`ifndef UART_SQR__SV
`define UART_SQR__SV

typedef class uart_item;
class uart_sqr extends uvm_sequencer # (uart_item);

   `uvm_component_utils(uart_sqr)
   function new (string name, uvm_component parent);
      super.new(name,parent);
   endfunction:new

endclass:uart_sqr

`endif // UART_SQR__SV
