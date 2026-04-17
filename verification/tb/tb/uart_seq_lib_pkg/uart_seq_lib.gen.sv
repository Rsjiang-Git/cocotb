`ifndef UART_SEQ_LIB__SV
`define UART_SEQ_LIB__SV

class uart_seq_lib extends uvm_sequence_library #(uvm_sequence_item);
  
  `uvm_object_utils(uart_seq_lib)
  `uvm_sequence_library_utils(uart_seq_lib)

  function new(string name = "uart_seq_lib");
    super.new(name);
    init_sequence_library();
  endfunction

endclass  

`endif // UART_SEQ_LIB__SV
