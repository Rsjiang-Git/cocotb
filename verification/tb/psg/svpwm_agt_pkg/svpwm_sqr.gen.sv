`ifndef SVPWM_SQR__SV
`define SVPWM_SQR__SV

typedef class svpwm_item;
class svpwm_sqr extends uvm_sequencer # (svpwm_item);

   `uvm_component_utils(svpwm_sqr)
   function new (string name, uvm_component parent);
      super.new(name,parent);
   endfunction:new

endclass:svpwm_sqr

`endif // SVPWM_SQR__SV
