`ifndef TFU_SQR__SV
`define TFU_SQR__SV

typedef class tfu_item;
class tfu_sqr extends uvm_sequencer # (tfu_item);

   `uvm_component_utils(tfu_sqr)
   function new (string name, uvm_component parent);
      super.new(name,parent);
   endfunction:new

endclass:tfu_sqr

`endif // TFU_SQR__SV
