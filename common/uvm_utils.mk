# Makefile for Hardware Simulation and Regression Testing
# Project Configuration

# MODULE Definition
MODULE    := template
CURDIR    := $(shell pwd)
sim_root  := $(shell dirname $(shell echo $(CURDIR) | sed -r 's|/verification/.*|/verification|'))
PROJ_ROOT := $(sim_root)
RTL       := $(PROJ_ROOT)/rtl
VERIF     := $(PROJ_ROOT)/verification/ut/$(MODULE)
COMMON    := $(PROJ_ROOT)/verification/common

# Simulation Parameters
TEST_SEQ         ?= smoke
VERBOSITY        ?= UVM_HIGH
COVERAGE_ENABLED ?= on
EXTRA_DEFINES    ?= +define+SVT_SPI_IO_WIDTH=1 +define+SVT_SPI_DATA_WIDTH=32
seed             ?= 10
TOPLEVEL         ?= tb

# Default Defines
DEFAULT_DEFINES := +define+UVM +define+UVM_PACKER_MAX_BYTES=1500000 +define+SVT_AHB_DISABLE_IMPLICIT_SIZE_CONNECTION

# Tool Commands
VCS_CMD    ?= vcs -full64 -sverilog -kdb -debug_access+all
GCC_CMD    ?= gcc -w -pipe -fPIC -O2 -g
URG_PATH   ?= $(shell which urg)
NUM_JOBS   ?= $(shell nproc)
VERDI_PATH ?= $(shell which verdi)
VERDI_CMD  ?= $(VERDI_PATH) -autoalias -sv -uvm -top $(TOPLEVEL)

# File Paths
COMPILE_DIR           := $(sim_build)/compile/$(TEST_SEQ)_test
SIM_DIR               := $(sim_build)/simulation/$(TEST_SEQ)_test_$(seed)
RTL_FILELIST          := $(VERIF)/filelist/list_rtl.f
DV_FILELIST           := $(VERIF)/filelist/list_dv.f
SINGLE_COV_DIR        := $(abspath $(sim_build)/coverage)
COVERAGE_MERGE_DB     := $(abspath $(sim_build)/merge_coverage/merge_data.vdb)
COVERAGE_MERGE_REPORT := $(abspath $(sim_build)/merge_coverage/report/merge_cov)
SIGNAL                := $(VERIF)/cov/signal

# Coverage Configuration
COVERAGE_OPTS := -cm line+cond+tgl+fsm+branch+assert
COVERAGE_DIR  := -cm_dir $(SINGLE_COV_DIR)/$(TEST_SEQ)_test/simv.vdb
COVERAGE_NAME := -cm_name $(TEST_SEQ)_test_$(seed)
COVERAGE_HIER := -cm_hier $(VERIF)/cov/cov.cfg
COVERAGE_ARGS := $(COVERAGE_OPTS) $(COVERAGE_NAME) $(COVERAGE_DIR) $(COVERAGE_HIER)

# Combine Defines
DEFINES := $(DEFAULT_DEFINES) $(EXTRA_DEFINES)

# EXTRA_OPTS (will be passed from Python script)
EXTRA_OPTS ?=

# Compilation Flags
COMPILE_FLAGS := +memcbk -ntb_opts uvm-1.2 -override_timescale=1ns/1ps +lint=PCWM,im_tgl_mdn \
    +nospecify +notimingcheck -Mupdate

COMPILE_FLAGS += $(DEFINES)

ifeq ($(COVERAGE_ENABLED),on)
    COMPILE_FLAGS += $(COVERAGE_ARGS)
endif

# Run Flags
RUN_FLAGS := \
    +fsdb+force+region \
    +fsdb+struct \
    -reportstats \
    -cm_nocasedef \
    +UVM_TESTNAME=base_test \
    +UVM_TEST_SEQ=$(TEST_SEQ)_vseq \
    +ntb_random_seed=$(seed) \
    +UVM_VERBOSITY=$(VERBOSITY) \
    +en_scb=1 \
    +en_cov=1 \
    $(EXTRA_OPTS)

ifeq ($(COVERAGE_ENABLED),on)
    RUN_FLAGS += $(COVERAGE_ARGS)
endif

# Phony Targets
.PHONY: all compile run compile_clean run_clean verdi verdi_cov check \
        rtl_filelist merge_coverage clean_coverage help single_cov \
        annotate single_annotate generate_link_library run_gui \
        single_demonstrator vdb_report check_report

# Main Targets
all: compile run

# Compilation Rules
compile:
	@echo "[INFO] Starting compilation for test: $(TEST_SEQ)"
	@mkdir -p $(COMPILE_DIR) $(SIGNAL)
	@touch $(SIGNAL)/$(TEST_SEQ)_test.rc
	cd $(COMPILE_DIR) && \
	$(VCS_CMD) $(COMPILE_FLAGS) -f $(DV_FILELIST) -l compile.log
	@echo "[SUCCESS] Compilation completed"

# Simulation Rules
run:
	@echo "[INFO] Starting simulation for test: $(TEST_SEQ), seed: $(seed)"
	@mkdir -p $(SIM_DIR)
	cd $(SIM_DIR) && \
	ln -sf $(COMPILE_DIR)/csrc $(COMPILE_DIR)/simv* . && \
	./simv $(RUN_FLAGS) -l simulation.log
	@echo "[SUCCESS] Simulation completed"

run_gui:
	@echo "[INFO] Starting simulation with GUI for test: $(TEST_SEQ), seed: $(seed)"
	@mkdir -p $(SIM_DIR)
	cd $(SIM_DIR) && \
	ln -sf $(COMPILE_DIR)/csrc $(COMPILE_DIR)/simv* . && \
	./simv $(RUN_FLAGS) -l simulation.log -gui=verdi

# Verdi waveform viewer
verdi:
	@if [ -z "$(VERDI_PATH)" ]; then \
		echo "[ERROR] Verdi not found in PATH"; \
		exit 1; \
	fi
	cd $(SIM_DIR) && $(VERDI_CMD) $(DEFINES) -f $(DV_FILELIST) -ssf tb.fsdb -sswr $(SIGNAL)/$(TEST_SEQ)_test.rc -nologo &
	@echo "[VERDI] Waveform viewer launched"


# Cleanup Rules

compile_clean:
	@echo "[INFO] Cleaning compilation directory"
	@rm -rf $(COMPILE_DIR) $(SINGLE_COV_DIR)/$(TEST_SEQ)_test $(sim_build)/coverage
	@echo "[SUCCESS] Compilation cleaned"

run_clean:
	@echo "[INFO] Cleaning simulation directory"
	@rm -rf $(sim_build)/simulation/$(TEST_SEQ)_test_$(seed)
	@echo "[SUCCESS] Simulation cleaned"

clean_coverage:
	@echo "[INFO] Cleaning coverage data"
	@rm -rf $(COVERAGE_MERGE_DB)
	@rm -rf $(COVERAGE_MERGE_REPORT)
	@echo "[SUCCESS] Coverage data cleaned"

# Coverage Rules
merge_coverage:
	@echo "[INFO] Searching coverage databases..."
	@find "$(SINGLE_COV_DIR)" -name "*.vdb" > db_list.temp
	@if [ ! -s db_list.temp ]; then \
		echo "[ERROR] No coverage databases (*.vdb) found in $(SINGLE_COV_DIR)"; \
		rm -f db_list.temp; \
		exit 1; \
	fi
	@echo "[INFO] Found $(shell wc -l < db_list.temp) coverage database(s)"
	
	@mkdir -p "$(COVERAGE_MERGE_DB)" "$(COVERAGE_MERGE_REPORT)"
	@echo "[INFO] Merging coverage data..."
	@$(URG_PATH) -full64 -parallel -maxjobs $(NUM_JOBS) \
		-f db_list.temp \
		-dbname "$(COVERAGE_MERGE_DB)" \
		-report "$(COVERAGE_MERGE_REPORT)"
	@rm -f db_list.temp
	@echo "[SUCCESS] Coverage merged to: $(COVERAGE_MERGE_DB)"
	@echo "[INFO] Report available at: $(COVERAGE_MERGE_REPORT)/dashboard.html"

# Verdi coverage analysis
verdi_cov: merge_coverage
	@echo "[INFO] Launching Verdi coverage analysis"
	$(VERDI_PATH) -cov -covdir $(COVERAGE_MERGE_DB) &
	@echo "[VERDI] Coverage analysis launched"

single_cov:
	@echo "[INFO] Launching single test coverage analysis"
	$(VERDI_PATH) -cov -covdir $(SINGLE_COV_DIR)/$(TEST_SEQ)_test/simv.vdb &
	@echo "[VERDI] Single test coverage analysis launched"

annotate:
	@echo "[INFO] Running coverage annotation"
	hvp annotate -plan $(VERIF)/cov/testpoint_cov_plan.xml -dir $(COVERAGE_MERGE_DB)
	@echo "[SUCCESS] Annotation completed"

single_annotate:
	@echo "[INFO] Running single test coverage annotation"
	hvp annotate -plan $(VERIF)/cov/testpoint_cov_plan.xml -dir $(SINGLE_COV_DIR)/$(TEST_SEQ)_test/simv.vdb
	@echo "[SUCCESS] Single test annotation completed"

# DPI Compilation
generate_link_library:
	@echo "[INFO] Generating DPI library"
	$(GCC_CMD) -I$(PROJ_ROOT)/uvm/$(MODULE)/dv/dpi/inc \
		$(PROJ_ROOT)/uvm/$(MODULE)/dv/dpi/encoder.c \
		$(PROJ_ROOT)/uvm/$(MODULE)/dv/dpi/src/gst_inter.c \
		-shared -o $(PROJ_ROOT)/uvm/$(MODULE)/dv/dpi/dpi.so
	@echo "[SUCCESS] DPI library generated"

# Path checking
check:
	@echo "=== Configuration Check ==="
	@echo "DEFINES:           $(DEFINES)"
	@echo "Default Defines:   $(DEFAULT_DEFINES)"
	@echo "Extra Defines:     $(EXTRA_DEFINES)"
	@echo "PROJECT sim_build: $(sim_build)"
	@echo "RTL Path:          $(RTL)"
	@echo "VERIF Path:        $(VERIF)"
	@echo "PROJ_ROOT Path:    $(PROJ_ROOT)"
	@echo "Verdi Path:        $(VERDI_PATH)"
	@echo "URG Path:          $(URG_PATH)"
	@echo "Coverage:          $(COVERAGE_ENABLED)"
	@echo "Top Level:         $(TOPLEVEL)"
	@echo "Coverage Dir:      $(SINGLE_COV_DIR)"
	@echo "Merge Coverage Dir: $(COVERAGE_MERGE_DB)"
	@echo "TEST_SEQ:          $(TEST_SEQ)"
	@echo "Seed:              $(seed)"
	@echo "========================"

# Generate RTL filelist
rtl_filelist:
	@echo "[INFO] Generating RTL filelist"
	find $(RTL)/rtl/ivd/$(MODULE) -name "*.v" > $(RTL_FILELIST)
	@echo "[SUCCESS] RTL filelist generated: $(RTL_FILELIST)"

# Generate coverage report
vdb_report:
	@echo "[INFO] Generating coverage report"
	$(URG_PATH) -dir $(COVERAGE_MERGE_DB) -report coverage_report
	@echo "[SUCCESS] Coverage report generated: coverage_report"

# Open coverage report in browser
check_report: vdb_report
	@echo "[INFO] Opening coverage report in browser"
	@if command -v xdg-open >/dev/null 2>&1; then \
		xdg-open coverage_report/dashboard.html; \
	elif command -v open >/dev/null 2>&1; then \
		open coverage_report/dashboard.html; \
	else \
		echo "Please open coverage_report/dashboard.html in your browser"; \
	fi

# Help Information
help:
	@echo "================================================================"
	@echo "                    Simulation Makefile Help                     "
	@echo "================================================================"
	@echo ""
	@echo "=== Simulation Targets ==="
	@echo "all                : Compile and run simulation"
	@echo "compile            : Compile design"
	@echo "run                : Run simulation"
	@echo "run_gui            : Run simulation with Verdi GUI"
	@echo "verdi              : Open waveform viewer"
	@echo ""
	@echo "=== Coverage Targets ==="
	@echo "merge_coverage     : Merge all coverage databases"
	@echo "verdi_cov          : Open merged coverage in Verdi"
	@echo "single_cov         : Open single test coverage in Verdi"
	@echo "annotate           : Run coverage annotation (merged)"
	@echo "single_annotate    : Run single test coverage annotation"
	@echo "vdb_report         : Generate coverage report"
	@echo "check_report       : Open coverage report in browser"
	@echo ""
	@echo "=== Utility Targets ==="
	@echo "check              : Check paths and configurations"
	@echo "rtl_filelist       : Generate RTL filelist"
	@echo "generate_link_library : Compile DPI components"
	@echo "compile_clean      : Clean compilation directory"
	@echo "run_clean          : Clean simulation directory"
	@echo "clean_coverage     : Clean coverage data"
	@echo ""
	@echo "=== Supported Test Cases ==="
	@echo "TEST_SEQ = smoke   : Basic smoke test"
	@echo "TEST_SEQ = spi_byte_halfword : SPI byte/halfword test"
	@echo ""
	@echo "=== Usage Examples ==="
	@echo "make all TEST_SEQ=smoke seed=123"
	@echo "make compile TEST_SEQ=spi_byte_halfword"
	@echo "make run TEST_SEQ=smoke seed=456"
	@echo "make verdi_cov"
	@echo "make check"
	@echo ""
	@echo "================================================================"

# Default target
default: help