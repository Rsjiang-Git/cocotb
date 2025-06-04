
# export PROJ_ROOT := $(shell dirname $(shell echo $(CURDIR) | sed -r 's|/cocotb/.*|/cocotb|'))
# export PWD := $(shell pwd)

# export PYTHONPATH := $(PWD)/../../sequence:$(PYTHONPATH)
# export PYTHONPATH := $(PWD)/../../model:$(PYTHONPATH)
# export PYTHONPATH := $(PROJ_ROOT)/cocotb/soc_ral:$(PYTHONPATH)
# export PYTHONPATH := $(PROJ_ROOT)/cocotb/common:$(PYTHONPATH)




# TOPLEVEL_LANG ?= verilog
# SIM           ?= 
# WAVES         ?= 1
# COCOTB_HDL_TIMESCALE      := ns
# COCOTB_HDL_TIMEPRECISION  := ps
# TOPLEVEL      ?= cocotb_top
# MODULE        ?= test_uart
# PMD           := $(shell pwd)
# COVERAGE_ENABLED ?= off



# COVERAGE_OPTS   = -cm line+cond+tgl+fsm+branch+assert
# COVERAGE_NAME   = -cm_name $(MODULE)
# COVERAGE_DIR    = -cm_dir $(PMD)/../result/$(MODULE)
# COVERAGE_HIER   = -cm_hier $(PMD)/hier.cfg
# COVERAGE_ARGS   = $(COVERAGE_OPTS) $(COVERAGE_NAME) $(COVERAGE_DIR) $(COVERAGE_HIER)


# COMPILE_ARGS += +vcs+lic+wait -kdb -lca +nospecify     \
#                -debug_access+all +define+XM_VENDOR_PRE_SIM    \
#                -f $(PROJ_ROOT)/cocotb/filelist/filelist.f

# SIM_ARGS += -l $(SIM_BUILD)/simulation.log \
#             +fsdb_autoflush +fsdb+sequential

# ifeq ($(COVERAGE_ENABLED),off)
# COMPILE_ARGS += $(COVERAGE_ARGS)
# SIM_ARGS     += $(COVERAGE_ARGS)
# endif


# VERILOG_SOURCES += $(PROJ_ROOT)/cocotb/tb/cocotb_top.v

# include $(shell cocotb-config --makefiles)/Makefile.sim


# .PHONY: verdi verdi_cov

# verdi:
# 	verdi +define+XM_VENDOR_PRE_SIM -sv -top $(TOPLEVEL) \
# 	      $(VERILOG_SOURCES) -f $(PROJ_ROOT)/cocotb/filelist/filelist -ssf tb.fsdb -nologo&

# verdi_cov:
# 	verdi -cov -covdir $(PMD)/../vdb/$(MODULE).vdb &

# cov_report:
# 	urg -dir $(CM_DIR) -report coverage_report
	


# # # 清理构建
# # clean:
# # 	rm -rf $(SIM_BUILD) $(CMD_FILE) *.log *.vdb *.fsdb coverage_report

# # 快速检查目标
# check:
# 	@echo "Project Root: $(PROJ_ROOT)"
# 	@echo "Python Path: $(PYTHONPATH)"
# 	@echo "Verilog Sources: $(VERILOG_SOURCES)"
# 	@echo "Coverage Enabled: $(COVERAGE_ENABLED)"


# # 帮助信息
# help:
# 	@echo "可用命令:"
# 	@echo "  make sim       - 运行仿真"
# 	@echo "  make verdi     - 启动Verdi调试"
# 	@echo "  make verdi_cov - 查看覆盖率"
# 	@echo "  make cov_report- 生成HTML覆盖率报告"
# 	@echo "  make wave_view - 查看波形"
# 	@echo "  make clean     - 清理构建文件"
# 	@echo "  make help      - 显示此帮助"

COMMON_INCLUDE          := ../../../common
MODULE                  ?= test_default
COVERAGE_ENABLED        ?= off

include   $(COMMON_INCLUDE)/cocotb_utils.mk







