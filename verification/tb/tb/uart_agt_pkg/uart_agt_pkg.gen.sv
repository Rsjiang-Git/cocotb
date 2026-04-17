package uart_agt_pkg;
    import uvm_pkg::*;
    `include "uvm_macros.svh"

    typedef class uart_item;
    typedef class uart_cfg;
    typedef class uart_drv;
    typedef class uart_mon;
    typedef class uart_sqr;
    typedef class uart_cov;
    typedef class uart_mon2cov_connect;

    `include "uart_agt.gen.sv"
    `include "uart_cfg.gen.sv"
    `include "uart_cov.gen.sv"
    `include "uart_drv.gen.sv"
    `include "uart_if.gen.sv"
    `include "uart_item.gen.sv"
    `include "uart_mon.gen.sv"
    `include "uart_mon2cov_connect.gen.sv"
    `include "uart_reg_adapter.gen.sv"
    `include "uart_sqr.gen.sv"

endpackage: uart_agt_pkg