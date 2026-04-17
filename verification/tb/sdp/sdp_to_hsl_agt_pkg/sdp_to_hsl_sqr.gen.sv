`ifndef SDP_TO_HSL_SQR__SV
`define SDP_TO_HSL_SQR__SV

typedef class sdp_to_hsl_item;
class sdp_to_hsl_sqr extends uvm_sequencer # (sdp_to_hsl_item);

   `uvm_component_utils(sdp_to_hsl_sqr)
   function new (string name, uvm_component parent);
      super.new(name,parent);
   endfunction:new

endclass:sdp_to_hsl_sqr

`endif // SDP_TO_HSL_SQR__SV
