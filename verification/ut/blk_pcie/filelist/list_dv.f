# list_dv.f - DV (Design Verification) Filelist
# Usage: +f list_dv.f
$VERIF/env/env_defines.sv
# =================== VIP SETUP ===================
+incdir+$HOME/tools/vip_setup/include/sverilog
+incdir+$HOME/tools/vip_setup/src/sverilog/vcs

$HOME/tools/vip_setup/include/sverilog/svt_ahb.uvm.pkg
$HOME/tools/vip_setup/include/sverilog/svt_spi.uvm.pkg
$HOME/tools/vip_setup/include/sverilog/svt_i2s.uvm.pkg


# ====== design =========
-f $VERIF/filelist/list_de.f

# =================== BASE UTILS ===================
+incdir+$COMMON/dv_base/dv_utils
$COMMON/dv_base/dv_utils/dv_utils_pkg.sv

+incdir+$COMMON/dv_base/dv_base_reg
$COMMON/dv_base/dv_base_reg/dv_base_reg_pkg.sv

+incdir+$COMMON/dv_base/csr_utils
$COMMON/dv_base/csr_utils/csr_utils_pkg.sv

+incdir+$COMMON/dv_base/common_ifs
$COMMON/dv_base/common_ifs/clk_rst_if.sv

# =================== AGENT PACKAGES ===================
+incdir+$VERIF/agent
$VERIF/agent/spi_agt_pkg.gen.sv

+incdir+$VERIF/agent/dma_agt_pkg
$VERIF/agent/dma_agt_pkg/dma_agt_pkg.sv

# =================== REGISTER PACKAGE ===================
+incdir+$VERIF/reg
$VERIF/reg/spi_reg_pkg.gen.sv

# =================== ENVIRONMENT ===================
+incdir+$VERIF/env

$VERIF/env/spi_env_pkg.gen.sv

# =================== SEQUENCE LIBRARY ===================
+incdir+$VERIF/vseq_lib

# =================== SENSOR LIBRARY ===================
+incdir+$VERIF/sen_lib

# =================== TESTCASE ===================
+incdir+$VERIF/testcase
$VERIF/testcase/spi_test_pkg.gen.sv

# =================== TESTBENCH ===================
+incdir+$VERIF/tb
$VERIF/tb/plus_if.sv
$VERIF/tb/tb_gen.sv

# =================== CALLBACKS ===================
+incdir+$VERIF/call

# =================== RTL FILES ===================
# Include RTL filelist (should be included after VIP and UVM packages)

# End of DV filelist