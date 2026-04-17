`ifndef UART_SEQ_LIB_BASE_SEQ__SV
`define UART_SEQ_LIB_BASE_SEQ__SV

class uart_seq_lib_base_seq extends uvm_sequence #(uvm_sequence_item);

    `uvm_object_utils(uart_seq_lib_base_seq)
    function new (string name = "uart_seq_lib_base_seq");
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

endclass: uart_seq_lib_base_seq
`endif // UART_SEQ_LIB_BASE_SEQ__SV
