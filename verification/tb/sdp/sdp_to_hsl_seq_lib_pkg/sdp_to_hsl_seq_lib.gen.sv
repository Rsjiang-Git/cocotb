`ifndef SDP_TO_HSL_SEQ_LIB__SV
`define SDP_TO_HSL_SEQ_LIB__SV

class sdp_to_hsl_seq_lib extends uvm_sequence_library #(uvm_sequence_item);
  
  `uvm_object_utils(sdp_to_hsl_seq_lib)
  `uvm_sequence_library_utils(sdp_to_hsl_seq_lib)

  function new(string name = "sdp_to_hsl_seq_lib");
    super.new(name);
    init_sequence_library();
  endfunction

endclass  

`endif // SDP_TO_HSL_SEQ_LIB__SV
