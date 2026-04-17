`ifndef TFU_VSEQ__SV
`define TFU_VSEQ__SV

typedef class tfu_seq_lib;
class tfu_vseq extends tfu_seq_lib_base_seq;
  `uvm_object_utils(tfu_vseq)
  `uvm_declare_p_sequencer(tfu_vsqr)

  function new(string name = "tfu_vseq");
    super.new(name);
  endfunction: new

  virtual task body();
    tfu_seq_lib m_tfu_seq_lib = tfu_seq_lib::type_id::create("m_tfu_seq_lib");
    m_tfu_seq_lib.start(p_sequencer.m_tfu_sqr);
  endtask: body

endclass
`endif // TFU_READ_SEQ__SV
