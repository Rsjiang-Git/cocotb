
export PROJ_ROOT := $(shell dirname $(shell echo $(CURDIR) | sed -r 's|/cocotb/.*|/cocotb|'))
export PWD := $(shell pwd)

export PYTHONPATH := $(PWD)/../../sequence:$(PYTHONPATH)
export PYTHONPATH := $(PWD)/../../model:$(PYTHONPATH)
export PYTHONPATH := $(PROJ_ROOT)/cocotb/soc_ral:$(PYTHONPATH)
export PYTHONPATH := $(PROJ_ROOT)/cocotb/common:$(PYTHONPATH)



TOPLEVEL_LANG ?= verilog
SIM ?= verilator
TOPLEVEL ?= cocotb_top
MODULE ?= test_uart
WAVES ?= 0


EXTRA_ARGS += -f $(PROJ_ROOT)/cocotb/filelist/filelist.f
EXTRA_ARGS += --trace  
EXTRA_ARGS += --timing 
EXTRA_ARGS += --coverage  
EXTRA_ARGS += --assert  


EXTRA_ARGS += -Wno-WIDTH 
EXTRA_ARGS += -Wno-CASEINCOMPLETE


VERILOG_SOURCES += $(PROJ_ROOT)/cocotb/tb/cocotb_top.v


include $(shell cocotb-config --makefiles)/Makefile.sim


.PHONY: waves cov pre_clean check help_pre

wave:
ifeq ($(WAVES),1)
	@if [ -f dump.fst ]; then \
		gtkwave dump.fst; \
	elif [ -f dump.vcd ]; then \
		gtkwave dump.vcd; \
	else \
		echo "No waveform file found"; \
	fi
else
	@echo "Waveform generation is disabled (set WAVES=1 to enable)"
endif

check:
	@echo "Project Root: $(PROJ_ROOT)"
	@echo "Python Path: $(PYTHONPATH)"
	@echo "Verilog Sources: $(VERILOG_SOURCES)"
	@echo "Coverage Enabled: $(COVERAGE_ENABLED)"
    

cov:
	urg -dir $(SIM_BUILD)/coverage_data -report coverage_report
	@echo "Coverage report generated: file://$(PWD)/coverage_report/dashboard.html"

clean_pre:
	rm -rf \
		$(SIM_BUILD)  \
        coverage.dat  results.xml \
		*.vcd *.fst *.log \
		coverage_report \
		*.prof *.vdb \
		__pycache__

help_pre:
	@echo "可用命令:"
	@echo "  make                   - 运行仿真"
	@echo "  make  check            - 检查路径"
	@echo "  make  clean_pre        - 清理构建文件"
	@echo "  make  help or help_pre - 显示此帮助"
 