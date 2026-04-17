`ifndef TFU_SEQ_LIB__SV
`define TFU_SEQ_LIB__SV

class tfu_seq_lib extends uvm_sequence_library #(uvm_sequence_item);
  
  `uvm_object_utils(tfu_seq_lib)
  `uvm_sequence_library_utils(tfu_seq_lib)

  function new(string name = "tfu_seq_lib");
    super.new(name);
    init_sequence_library();
  endfunction

endclass  

`endif // TFU_SEQ_LIB__SV
