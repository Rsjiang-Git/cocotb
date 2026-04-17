package sdp_to_hsl_agt_pkg;
    import uvm_pkg::*;
    `include "uvm_macros.svh"

    typedef class sdp_to_hsl_item;
    typedef class sdp_to_hsl_cfg;
    typedef class sdp_to_hsl_drv;
    typedef class sdp_to_hsl_mon;
    typedef class sdp_to_hsl_sqr;
    typedef class sdp_to_hsl_cov;
    typedef class sdp_to_hsl_mon2cov_connect;

    `include "sdp_to_hsl_agt.gen.sv"
    `include "sdp_to_hsl_cfg.gen.sv"
    `include "sdp_to_hsl_cov.gen.sv"
    `include "sdp_to_hsl_drv.gen.sv"
    `include "sdp_to_hsl_if.gen.sv"
    `include "sdp_to_hsl_item.gen.sv"
    `include "sdp_to_hsl_mon.gen.sv"
    `include "sdp_to_hsl_mon2cov_connect.gen.sv"
    `include "sdp_to_hsl_reg_adapter.gen.sv"
    `include "sdp_to_hsl_sqr.gen.sv"

endpackage: sdp_to_hsl_agt_pkg