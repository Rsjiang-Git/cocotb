package typical_env_pkg;
    import uvm_pkg::*;  
    `include "uvm_macros.svh"

    import pk_syoscb::*;
    import uart_agt_pkg::*;
    import ral_pkg::*;

    `include "typical_env.gen.sv"
    `include "typical_env_cfg.gen.sv"
    `include "typical_scb.gen.sv"
    `include "typical_vsqr.gen.sv"

endpackage: typical_env_pkg
