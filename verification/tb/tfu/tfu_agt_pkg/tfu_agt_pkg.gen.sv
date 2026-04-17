package tfu_agt_pkg;
    import uvm_pkg::*;
    `include "uvm_macros.svh"

    typedef class tfu_item;
    typedef class tfu_cfg;
    typedef class tfu_drv;
    typedef class tfu_mon;
    typedef class tfu_sqr;
    typedef class tfu_cov;
    typedef class tfu_mon2cov_connect;

    `include "tfu_agt.gen.sv"
    `include "tfu_cfg.gen.sv"
    `include "tfu_cov.gen.sv"
    `include "tfu_drv.gen.sv"
    `include "tfu_if.gen.sv"
    `include "tfu_item.gen.sv"
    `include "tfu_mon.gen.sv"
    `include "tfu_mon2cov_connect.gen.sv"
    `include "tfu_reg_adapter.gen.sv"
    `include "tfu_sqr.gen.sv"

endpackage: tfu_agt_pkg