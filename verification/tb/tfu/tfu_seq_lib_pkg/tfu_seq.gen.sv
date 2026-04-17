`ifndef TFU_READ_SEQ__SV
`define TFU_READ_SEQ__SV

typedef class tfu_seq_lib;
class tfu_read_seq extends tfu_seq_lib_base_seq;
  `uvm_object_utils(tfu_read_seq)
  `uvm_add_to_seq_lib(tfu_read_seq, tfu_seq_lib)

  function new(string name = "tfu_read_seq");
    super.new(name);
  endfunction: new

  virtual task body();
    tfu_item m_item = tfu_item::type_id::create("m_item");
    repeat(10) begin
      `uvm_info(get_full_name, "Starting sequence", UVM_LOW)
      `uvm_do(m_item); // FOR_TEST
      #10; // FOR_TEST
    end
  endtask: body

endclass
`endif // TFU_READ_SEQ__SV
