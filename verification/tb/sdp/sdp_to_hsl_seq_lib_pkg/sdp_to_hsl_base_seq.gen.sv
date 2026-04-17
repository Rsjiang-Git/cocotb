`ifndef SDP_TO_HSL_SEQ_LIB_BASE_SEQ__SV
`define SDP_TO_HSL_SEQ_LIB_BASE_SEQ__SV

class sdp_to_hsl_seq_lib_base_seq extends uvm_sequence #(uvm_sequence_item);

    `uvm_object_utils(sdp_to_hsl_seq_lib_base_seq)
    function new (string name = "sdp_to_hsl_seq_lib_base_seq");
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

endclass: sdp_to_hsl_seq_lib_base_seq
`endif // SDP_TO_HSL_SEQ_LIB_BASE_SEQ__SV
