package sdp_to_hsl_env_pkg;
    import uvm_pkg::*;  
    `include "uvm_macros.svh"

    import sdp_to_hsl_agt_pkg::*;
    import ral_pkg::*;

    `include "sdp_to_hsl_env.gen.sv"
    `include "sdp_to_hsl_env_cfg.gen.sv"
    `include "sdp_to_hsl_scb.gen.sv"
    `include "sdp_to_hsl_vsqr.gen.sv"

endpackage: sdp_to_hsl_env_pkg
