`ifndef SVPWM_VSEQ__SV
`define SVPWM_VSEQ__SV

typedef class svpwm_seq_lib;
class svpwm_vseq extends svpwm_seq_lib_base_seq;
  `uvm_object_utils(svpwm_vseq)
  `uvm_declare_p_sequencer(svpwm_vsqr)

  function new(string name = "svpwm_vseq");
    super.new(name);
  endfunction: new

  virtual task body();
    svpwm_seq_lib m_svpwm_seq_lib = svpwm_seq_lib::type_id::create("m_svpwm_seq_lib");
    m_svpwm_seq_lib.start(p_sequencer.m_svpwm_sqr);
  endtask: body

endclass
`endif // SVPWM_READ_SEQ__SV
