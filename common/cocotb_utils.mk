# ==============================================
# Configuration Section
# ==============================================
MODULE                          ?= test_template
DEVICE                          ?= template
export COCOTB_RESOLVE_X         = ZEROS
DEFAULT_DEFINES                 ?= +define+COCOTB

# Directory Structure
ROOT                            ?= $(abspath $(shell dirname $(shell echo $(CURDIR) | sed -r 's|/verification/.*|/verification|')))
export PROJ_ROOT                ?= $(ROOT)/rtl
export VERIF_ROOT               ?= $(ROOT)/verification
export VERIF_ENV                ?= $(VERIF_ROOT)/cocotb/$(DEVICE)

# Coverage Configuration
COVERAGE_ENABLED                ?= off
SINGLE_COVERAGE                 ?= $(abspath $(VERIF_ENV)/result)
COVERAGE_MERGE_DB               ?= $(VERIF_ROOT)/cocotb/coverage/$(DEVICE)_merge_data.vdb
COVERAGE_MERGE_REPORT           ?= $(VERIF_ROOT)/cocotb/coverage/report/$(DEVICE)_merge_cov

# Simulation Parameters
COCOTB_HDL_TIMEUNIT             ?= 1ns
COCOTB_HDL_TIMEPRECISION        ?= 1ps
TOPLEVEL_LANG                   ?= verilog
SIM                             ?= vcs
TOPLEVEL                        ?= cocotb_top
WAVES                           ?= +DUMP_FSDB

# Tool Paths
VERDI_PATH                      ?= $(shell which verdi)
URG_PATH                        ?= $(shell which urg)
BROWSER                         ?= $(shell which firefox)
NUM_JOBS                        ?= $(shell nproc)

# Python Path Configuration
export PYTHONPATH                :=  $(abspath $(VERIF_ROOT)/cocotb/soc_ral:$(PYTHONPATH))         
export PYTHONPATH                :=  $(abspath $(VERIF_ROOT)/cocotb/common:$(PYTHONPATH) )        
export PYTHONPATH                :=  $(abspath $(VERIF_ENV)/model:$(PYTHONPATH)          )
export PYTHONPATH                :=  $(abspath $(VERIF_ENV)/sequence:$(PYTHONPATH)       )  
export PYTHONPATH                :=  $(abspath $(VERIF_ENV)/testcase:$(PYTHONPATH)       )

# File Management
TEMP_FILELIST                   := $(VERIF_ROOT)/cocotb/filelist/temp_filelist.f
VERIF_FILELIST                  := $(VERIF_ENV)/filelist/filelist.f
RTL_FILELIST                    := $(PROJ_ROOT)/filelist/filelist.f

# ==============================================
# Build Rules
# ==============================================
include $(shell cocotb-config --makefiles)/Makefile.sim

# Coverage Configuration
ifeq ($(COVERAGE_ENABLED),on)
COVERAGE_OPTS                   ?= -cm line+cond+tgl+fsm+branch+assert
COVERAGE_NAME                   ?= -cm_name $(MODULE)
COVERAGE_DIR                    ?= -cm_dir $(VERIF_ENV)/result/$(MODULE)
COVERAGE_HIER                   ?= -cm_hier $(VERIF_ENV)/cov/cov.cfg
COVERAGE_COMPILE_ARGS            = $(COVERAGE_OPTS) $(COVERAGE_NAME) $(COVERAGE_DIR) $(COVERAGE_HIER)
else
COVERAGE_COMPILE_ARGS            =
endif

# Common Compilation Arguments
COMPILE_ARGS += -kdb +nospecify -debug_access+all $(DEFINES) \
                -f $(VERIF_FILELIST) \
                -l compile.log \
                $(COVERAGE_COMPILE_ARGS)

SIM_ARGS += $(WAVES) \
            +fsdb_autoflush \
            +fsdb+sequential \
            $(COVERAGE_COMPILE_ARGS)

# ==============================================
# Targets
# ==============================================
.PHONY: all filelist verdi coverage_clean merge_coverage verdi_cov single_cov check clean_all help

# Filelist Generation
filelist:
	@mkdir -p $(dir $(TEMP_FILELIST))
	@echo "[PREPARE] Generating temporary filelist"
	@cp $(RTL_FILELIST) $(TEMP_FILELIST)
	@sed -i 's%*.lvd_per_defs.v%%g' $(TEMP_FILELIST)

# Verdi Waveform Viewer
verdi:
	$(VERDI_PATH) $(DEFINES) -autoalias -sv -top $(TOPLEVEL) \
	    $(VERILOG_SOURCES) $(VERILOG_SOURCES_EXTRA) \
	    -f $(VERIF_FILELIST) -ssf tb.fsdb -nologo &
	@echo "[VERDI] Waveform viewer launched"

# Coverage Management
coverage_clean:
	@echo "[Coverage] Cleaning coverage data..."
	@rm -rf $(COVERAGE_MERGE_DB)
	@rm -rf $(COVERAGE_MERGE_REPORT)

merge_coverage:
	@echo "[Coverage] Searching coverage databases..."
	@find $(SINGLE_COVERAGE) -name "*.vdb" > db_list.temp
	@if [ ! -s db_list.temp ]; then \
	    echo "Error: No coverage databases found in $(SINGLE_COVERAGE)"; \
	    rm -f db_list.temp; \
	    exit 1; \
	fi
	@mkdir -p $(dir $(COVERAGE_MERGE_DB)) $(dir $(COVERAGE_MERGE_REPORT))
	@echo "[Coverage] Merging coverage data..."
	@$(URG_PATH) -full64 -parallel -maxjobs $(NUM_JOBS) \
	    -dir $(shell cat db_list.temp | tr '\n' ' ') \
	    -dname $(COVERAGE_MERGE_DB) \
	    -report $(COVERAGE_MERGE_REPORT)
	@rm -f db_list.temp

verdi_cov: coverage_clean merge_coverage
	$(VERDI_PATH) -cov -covdir $(COVERAGE_MERGE_DB) &
	@echo "[VERDI] Coverage analysis launched"

single_cov:
	$(VERDI_PATH) -cov -covdir $(VERIF_ENV)/result/$(MODULE).vdb &
	@echo "[VERDI] Coverage analysis (single) launched"

# Project Inspection
check:
	@echo "=== Project Configuration ==="
	@echo "DEFINES: $(DEFINES)"
	@echo "-- Default: $(DEFAULT_DEFINES)"
	@echo "-- Extra: $(EXTRA_DEFINES)"
	@echo "PROJECT_ROOT: $(VERIF_ROOT)"
	@echo "RTL_ROOT: $(PROJ_ROOT)"
	@echo "Coverage Dir: $(SINGLE_COVERAGE)"
	@echo "Python Path: $(PYTHONPATH)"
	@echo "Coverage: $(COVERAGE_ENABLED)"
	@echo "Top Level: $(TOPLEVEL)"
	@echo "Test Module: $(MODULE)"
	@echo "Filelist: $(VERIF_FILELIST)"
	@echo "Verdi Path: $(VERDI_PATH)"
	@echo "URG Path: $(URG_PATH)"

# Cleanup
clean_all: clean
	@echo "=== Cleaning all ==="
	@rm -rf __pycache__ $(VERIF_ENV)/result/$(MODULE).vdb  *。log  *fsdb  results.xml

# Help
help_user:
	@echo "Available targets:"
	@echo "  all              - Run simulation"
	@echo "  verdi            - Launch Verdi waveform viewer"
	@echo "  merge_coverage   - Merge coverage data"
	@echo "  verdi_cov        - Launch Verdi coverage analysis (merged)"
	@echo "  single_cov       - Launch Verdi coverage analysis (single test)"
	@echo "  check            - Show project configuration"
	@echo "  clean_all        - Clean all generated files"
	@echo "  help_user        - Show this help message"