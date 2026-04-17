package uart_seq_lib_pkg;
    import uvm_pkg::*;
    `include "uvm_macros.svh"

    import uart_agt_pkg::*;
    import uart_env_pkg::*;

    `include "uart_base_seq.gen.sv"
    `include "uart_seq.gen.sv"
    `include "uart_seq_lib.gen.sv"
endpackage: uart_seq_lib_pkg
