`ifndef SVPWM_VSQR__SV
`define SVPWM_VSQR__SV

class svpwm_vsqr extends uvm_sequencer;
    svpwm_sqr m_svpwm_sqr;
    svt_ahb_system_sqr ahb_system_sqr;
    `uvm_component_utils_begin(svpwm_vsqr)
        `uvm_field_object(m_svpwm_sqr,UVM_ALL_ON)
        `uvm_field_object(ahb_system_sqr,UVM_ALL_ON)
    //ToDo: add field utils macros here if required
    `uvm_component_utils_end

    `uvm_new_func

endclass
`endif // SVPWM_VSQR__SV