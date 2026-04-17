`ifndef SVPWM_READ_SEQ__SV
`define SVPWM_READ_SEQ__SV

typedef class svpwm_seq_lib;
class svpwm_read_seq extends svpwm_seq_lib_base_seq;
  `uvm_object_utils(svpwm_read_seq)
  `uvm_add_to_seq_lib(svpwm_read_seq, svpwm_seq_lib)

  function new(string name = "svpwm_read_seq");
    super.new(name);
  endfunction: new

  virtual task body();
    svpwm_item m_item = svpwm_item::type_id::create("m_item");
    repeat(10) begin
      `uvm_info(get_full_name, "Starting sequence", UVM_LOW)
      `uvm_do(m_item); // FOR_TEST
      #10; // FOR_TEST
    end
  endtask: body

endclass
`endif // SVPWM_READ_SEQ__SV
