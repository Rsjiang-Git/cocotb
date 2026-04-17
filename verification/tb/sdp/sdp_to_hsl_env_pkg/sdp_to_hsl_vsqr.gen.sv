`ifndef SDP_TO_HSL_VSQR__SV
`define SDP_TO_HSL_VSQR__SV

class sdp_to_hsl_vsqr extends uvm_sequencer;
    sdp_to_hsl_sqr m_sdp_to_hsl_sqr;
    svt_ahb_system_sqr ahb_system_sqr;
    `uvm_component_utils_begin(sdp_to_hsl_vsqr)
        `uvm_field_object(m_sdp_to_hsl_sqr,UVM_ALL_ON)
        `uvm_field_object(ahb_system_sqr,UVM_ALL_ON)
    //ToDo: add field utils macros here if required
    `uvm_component_utils_end

    `uvm_new_func

endclass
`endif // SDP_TO_HSL_VSQR__SV