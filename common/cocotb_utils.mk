ROOT                     ?= $(shell dirname $(shell echo $(CURDIR) | sed -r 's|/verification/.*|/verification|'))
export PROJ_ROOT         ?= $(ROOT)/rtl
export VERIF_ROOT        ?= $(ROOT)/verification
DEFAULT_DEFINES          ?= +define+PRE_SIM
# EXTRA_VERILOG
VERILOG_SOURCES_EXTRA    ?=
EXTRA_DEFINES            ?=

# MACRO_DEFINE
MACRO_DEFINE             := $(DEFAULT_DEFINES) $(EXTRA_DEFINES)
PWD                      ?= $(shell pwd)

# Coverage_merge
COVERAGE_MERGE_DIR       ?= $(PWD)/../../result
COVERAGE_MERGE_DB        ?= $(VERIF_ROOT)/cocotb/coverage/merge_data.vdb
COVERAGE_MERGE_REPORT    ?= $(VERIF_ROOT)/cocotb/coverage/report/merge_cov

#parameter
COCOTB_HDL_TIMEUNIT      ?= 1ns
COCOTB_HDL_TIMEPRECISION ?= 1ps
TOPLEVEL_LANG            ?= verilog
SIM                      ?= vcs
TOPLEVEL                 ?= cocotb_top
WAVES                    ?= 1
MODULE                   ?= test_template

# Coverage configuration
COVERAGE_ENABLED        ?= off
COVERAGE_OPTS           ?= -cm line+cond+tgl+fsm+branch+assert
COVERAGE_NAME           ?= -cm_name $(MODULE)
COVERAGE_DIR            ?= -cm_dir  $(PWD)/../../result/$(MODULE)
COVERAGE_HIER           ?= -cm_hier $(PWD)/../../result/cov_hier.cfg

# Tool paths
VERDI_PATH              ?= verdi
URG_PATH                ?= /soft/synopsys/vcs-mx2018/0-2018.09-SP2/bin/urg
BROWSER                 ?= firefox

# File management
TEMP_FILELIST           := $(VERIF_ROOT)/cocotb/rtl/temp_filelist.f
DB_LIST_FILE            := $(VERIF_ROOT)/cocotb/rtl/db_list.temp

# Python path configuration
export PYTHONPATH       := $(VERIF_ROOT)/cocotb/soc_ral:$(PYTHONPATH)
export PYTHONPATH       := $(VERIF_ROOT)/cocotb/common:$(PYTHONPATH)
export PYTHONPATH       := $(PWD)/../../model:$(PYTHONPATH)
export PYTHONPATH       := $(PWD)/../../sequence:$(PYTHONPATH)

# RTL source configuration
VERILOG_SOURCES         += $(VERIF_ROOT)/cocotb/rtl/cocotb_top.v
FILELIST_SRC            := $(VERIF_ROOT)/cocotb/filelist/filelist.f


# Coverage control
ifeq ($(COVERAGE_ENABLED),on)
COVERAGE_COMPILE_ARGS = $(COVERAGE_OPTS) $(COVERAGE_NAME) $(COVERAGE_DIR) $(COVERAGE_HIER)
else
COVERAGE_COMPILE_ARGS =
endif

# MAIN TARGETS
# Default simulation target
PHONY: all prepare_sources verdi coverage_clean merge_coverage verdi_cov check clean_all help_user

all: prepare_sources 
# Include cocotb build system
include $(shell cocotb-config --makefiles)/Makefile.sim

# Common compilation arguments
COMPILE_ARGS += -kdb +nospecify -debug_access+all $(DEFINES)
COMPILE_ARGS += $(COVERAGE_COMPILE_ARGS) \
-f $(FILELIST_SRC) \
-l compile.log \
$(COVERAGE_COMPILE_ARGS)

SIM_ARGS += -l $(SIM_BUILD)/simulation.log \
+fsdb_autoflush \
+fsdb+sequential \
$(COVERAGE_COMPILE_ARGS)


# Prepare source files
prepare_sources:
	@echo "[PREPARE] Generating temporary filelist"
	@mkdir -p $(dir $(TEMP_FILELIST))
	@cp $(PROJ_ROOT)/filelist/cmd_file_ic.f $(TEMP_FILELIST)
	@sed -i 's%*.lvd_per_defs.v%%g' $(TEMP_FILELIST)



# Verdi waveform viewer
verdi: prepare_sources
	$(VERDI_PATH) $(DEFINES) -autoalias -sv -top $(TOPLEVEL) \
	$(VERILOG_SOURCES) $(VERILOG_SOURCES_EXTRA) $(VERIF_ROOT)/cocotb/rtl/lvd_per_defs.v \
	-f $(FILELIST_SRC) -ssf tb.fsdb -nologo &
	@echo "[VERDI] Waveform viewer launched"


# Coverage clean
coverage_clean:
	@echo "[Coverage] Cleaning coverage data..."
	@rm -rf $(COVERAGE_MERGE_DB)/*
	@rm -rf $(COVERAGE_MERGE_REPORT)/*
	@rm -f  $(DB_LIST_FILE)


# merge
merge_coverage:
	@echo "[Coverage] Searching coverage databases..."
	@find $(COVERAGE_MERGE_DIR) -name "*.vdb" > $(DB_LIST_FILE)
	@if [ ! -s $(DB_LIST_FILE) ]; then
		echo "Error: No coverage databases found in $(COVERAGE_MERGE_DIR)"; \
		rm -f $(DB_LIST_FILE);     \
		exit 1;
	fi
	@mkdir -p $(COVERAGE_MERGE_DB)
	@mkdir -p $(COVERAGE_MERGE_REPORT)
	@echo "[Coverage] Merging coverage data..."
	@$(URG_PATH) -full64 -parallel -mpthread 4
	-dir $(shell cat $(DB_LIST_FILE) | tr '\n' ' ')    \
	-dname $(COVERAGE_MERGE_DB)                   \
	-report $(COVERAGE_MERGE_REPORT)            \
	-format both



# Verdi coverage analysis
verdi_cov: coverage_clean merge_coverage
	$(VERDI_PATH) -cov -covdir $(COVERAGE_MERGE_DB) &
	@echo "[VERDI] Coverage analysis launched"




# Check environment configuration
check:
	@echo "=== Project Configuration ==="
	@echo "DEFINES: $(DEFINES)"
	@echo "-- Default: $(DEFAULT_DEFINES)"
	@echo "-- Extra: $(EXTRA_DEFINES)"
	@echo "PROJECT_ROOT: $(VERIF_ROOT)"
	@echo "RTL_ROOT: $(PROJ_ROOT)"
	@echo "Coverage Dir: $(COVERAGE_MERGE_DIR)"
	@echo "Python Path: $(PYTHONPATH)"
	@echo "Coverage: $(COVERAGE_ENABLED)"
	@echo "Top Level: $(TOPLEVEL)"
	@echo "Test Module: $(MODULE)"
	@echo "Filelist: $(FILELIST_SRC)"
	@echo "Verdi Path: $(VERDI_PATH)"
	@echo "URG Path: $(URG_PATH)"


clean_all: clean
	@echo "=== Cleaning all ==="
	@rm -rf __pycache__ $(PWD)/../../result/$(MODULE).vdb coverage.dat results.xml
	
help_user:
	@echo "Available targets:"
	@echo " make all - Run simulation"
	@echo " make verdi - Launch Verdi waveform viewer"
	@echo " make merge_coverage - Merge coverage data"
	@echo " make verdi_cov - Launch Verdi coverage analysis"
	@echo " make check - Show project configuration"
	@echo " make clean_all - Clean all generated files"