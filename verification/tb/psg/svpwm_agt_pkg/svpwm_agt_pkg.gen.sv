package svpwm_agt_pkg;
    import uvm_pkg::*;
    `include "uvm_macros.svh"

    typedef class svpwm_item;
    typedef class svpwm_cfg;
    typedef class svpwm_drv;
    typedef class svpwm_mon;
    typedef class svpwm_sqr;
    typedef class svpwm_cov;
    typedef class svpwm_mon2cov_connect;

    `include "svpwm_agt.gen.sv"
    `include "svpwm_cfg.gen.sv"
    `include "svpwm_cov.gen.sv"
    `include "svpwm_drv.gen.sv"
    `include "svpwm_if.gen.sv"
    `include "svpwm_item.gen.sv"
    `include "svpwm_mon.gen.sv"
    `include "svpwm_mon2cov_connect.gen.sv"
    `include "svpwm_reg_adapter.gen.sv"
    `include "svpwm_sqr.gen.sv"

endpackage: svpwm_agt_pkg