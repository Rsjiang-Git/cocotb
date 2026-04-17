`ifndef SVPWM_SEQ_LIB__SV
`define SVPWM_SEQ_LIB__SV

class svpwm_seq_lib extends uvm_sequence_library #(uvm_sequence_item);
  
  `uvm_object_utils(svpwm_seq_lib)
  `uvm_sequence_library_utils(svpwm_seq_lib)

  function new(string name = "svpwm_seq_lib");
    super.new(name);
    init_sequence_library();
  endfunction

endclass  

`endif // SVPWM_SEQ_LIB__SV
