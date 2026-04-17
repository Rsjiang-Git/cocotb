package uart_env_pkg;
    import uvm_pkg::*;  
    `include "uvm_macros.svh"

    import pk_syoscb::*;
    import uart_agt_pkg::*;
    import ral_pkg::*;

    `include "uart_env.gen.sv"
    `include "uart_env_cfg.gen.sv"
    `include "uart_scb.gen.sv"
    `include "uart_vsqr.gen.sv"

endpackage: uart_env_pkg
