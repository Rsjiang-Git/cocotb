`ifndef SDP_TO_HSL_READ_SEQ__SV
`define SDP_TO_HSL_READ_SEQ__SV

typedef class sdp_to_hsl_seq_lib;
class sdp_to_hsl_read_seq extends sdp_to_hsl_seq_lib_base_seq;
  `uvm_object_utils(sdp_to_hsl_read_seq)
  `uvm_add_to_seq_lib(sdp_to_hsl_read_seq, sdp_to_hsl_seq_lib)

  function new(string name = "sdp_to_hsl_read_seq");
    super.new(name);
  endfunction: new

  virtual task body();
    sdp_to_hsl_item m_item = sdp_to_hsl_item::type_id::create("m_item");
    repeat(10) begin
      `uvm_info(get_full_name, "Starting sequence", UVM_LOW)
      `uvm_do(m_item); // FOR_TEST
      #10; // FOR_TEST
    end
  endtask: body

endclass
`endif // SDP_TO_HSL_READ_SEQ__SV
