`ifndef TFU_SEQ_LIB_BASE_SEQ__SV
`define TFU_SEQ_LIB_BASE_SEQ__SV

class tfu_seq_lib_base_seq extends uvm_sequence #(uvm_sequence_item);

    `uvm_object_utils(tfu_seq_lib_base_seq)
    function new (string name = "tfu_seq_lib_base_seq");
      super.new(name);
    endfunction : new

    virtual task pre_body();
        `ifdef UVM_POST_VERSION_1_1
        var uvm_phase starting_phase = get_starting_phase();
        `endif
        if(starting_phase != null) starting_phase.raise_objection(this, {get_type_name(), "not finished"});
    endtask: pre_body

    virtual task post_body();
        if(starting_phase != null) starting_phase.drop_objection(this, {get_type_name(), "seq finished"});
    endtask: post_body

endclass: tfu_seq_lib_base_seq
`endif // TFU_SEQ_LIB_BASE_SEQ__SV
