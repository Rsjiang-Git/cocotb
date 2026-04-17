`ifndef SDP_TO_HSL_VSEQ__SV
`define SDP_TO_HSL_VSEQ__SV

typedef class sdp_to_hsl_seq_lib;
class sdp_to_hsl_vseq extends sdp_to_hsl_seq_lib_base_seq;
  `uvm_object_utils(sdp_to_hsl_vseq)
  `uvm_declare_p_sequencer(sdp_to_hsl_vsqr)

  function new(string name = "sdp_to_hsl_vseq");
    super.new(name);
  endfunction: new

  virtual task body();
    sdp_to_hsl_seq_lib m_sdp_to_hsl_seq_lib = sdp_to_hsl_seq_lib::type_id::create("m_sdp_to_hsl_seq_lib");
    m_sdp_to_hsl_seq_lib.start(p_sequencer.m_sdp_to_hsl_sqr);
  endtask: body

endclass
`endif // SDP_TO_HSL_READ_SEQ__SV
