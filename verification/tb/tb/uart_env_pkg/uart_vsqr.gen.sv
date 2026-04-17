`ifndef UART_VSQR__SV
`define UART_VSQR__SV

class uart_vsqr extends uvm_sequencer;
    uart_sqr m_uart_sqr;
    m_apb_sqr apb_asqr;
    `uvm_component_utils_begin(uart_vsqr)
        `uvm_field_object(m_uart_sqr,UVM_ALL_ON)
        `uvm_field_object(apb_asqr,UVM_ALL_ON)
    //ToDo: add field utils macros here if required
    `uvm_component_utils_end

    `uvm_new_func

endclass
`endif // UART_VSQR__SV