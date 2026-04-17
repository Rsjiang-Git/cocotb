`ifndef TFU_VSQR__SV
`define TFU_VSQR__SV

class tfu_vsqr extends uvm_sequencer;
    tfu_sqr m_tfu_sqr;
    m_svt_system_sqr svt_system_sqr;
    `uvm_component_utils_begin(tfu_vsqr)
        `uvm_field_object(m_tfu_sqr,UVM_ALL_ON)
        `uvm_field_object(svt_system_sqr,UVM_ALL_ON)
    //ToDo: add field utils macros here if required
    `uvm_component_utils_end

    `uvm_new_func

endclass
`endif // TFU_VSQR__SV