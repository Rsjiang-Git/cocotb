`ifndef TYPICAL_VSQR__SV
`define TYPICAL_VSQR__SV

class typical_vsqr extends uvm_sequencer;
    uart_sqr m_uart_sqr;
    `uvm_component_utils_begin(typical_vsqr)
        `uvm_field_object(m_uart_sqr,UVM_ALL_ON)
    //ToDo: add field utils macros here if required
    `uvm_component_utils_end

    `uvm_new_func

endclass
`endif // TYPICAL_VSQR__SV