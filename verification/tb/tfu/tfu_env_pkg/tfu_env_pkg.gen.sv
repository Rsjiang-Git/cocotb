package tfu_env_pkg;
    import uvm_pkg::*;  
    `include "uvm_macros.svh"

    import pk_syoscb::*;
    import tfu_agt_pkg::*;
    import ral_pkg::*;

    `include "tfu_env.gen.sv"
    `include "tfu_env_cfg.gen.sv"
    `include "tfu_scb.gen.sv"
    `include "tfu_vsqr.gen.sv"

endpackage: tfu_env_pkg
