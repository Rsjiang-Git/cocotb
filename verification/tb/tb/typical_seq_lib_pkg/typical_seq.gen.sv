`ifndef UART_READ_SEQ__SV
`define UART_READ_SEQ__SV

typedef class uart_seq_lib;
class uart_read_seq extends uart_seq_lib_base_seq;
  `uvm_object_utils(uart_read_seq)
  `uvm_add_to_seq_lib(uart_read_seq, uart_seq_lib)

  function new(string name = "uart_read_seq");
    super.new(name);
  endfunction: new

  virtual task body();
    repeat(10) begin
      // `uvm_do(req);
      `uvm_info(get_full_name, "Starting sequence", UVM_LOW)
      #10;
    end
  endtask: body

endclass
`endif // UART_READ_SEQ__SV
