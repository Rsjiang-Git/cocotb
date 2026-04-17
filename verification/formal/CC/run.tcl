#!/usr/bin/tclsh
# formal_verification_setup.tcl
# Formal Verification and Constraint Setup Script
# For: xm6632_chip_top / xm6371_chip_top

# ============================================
# Formal Mode and Variable Settings
# ============================================

set_fml_appmode CC
set_fml_var_fml_cc_structural_check path
set_fml_var_fml_cc_composite_trace true
set_fml_var_fml_witness_on true
# set_fml_var_fml_progress_time_limit 10
# set_fml_var_fml_cc_autobbox false

# Design names
# ahb3_per_top ahb2_per_top

# Get current directory
set current_dir [pwd]
puts "current_dir: $current_dir"

# Get 4 levels up directory
set levels 4
set target_dir [file normalize [file join $current_dir {*}[lrepeat $levels ".."]]]
puts "get $levels directory: $target_dir"

# Export environment variable
set ::env(PROJ_ROOT) $target_dir/rtl
puts "EXPORT_PROJ_ROOT = $::env(PROJ_ROOT)"

# ============================================
# Blackbox Settings for Memory Instances
# ============================================

set_blackbox -designs {drounIOx32m8 }
set_blackbox -designs {rfsp16x128m1 }
set_blackbox -designs {rfsp256x32m4 }
set_blackbox -designs {rfsp32x128m1 }
set_blackbox -designs {rfsp512x32m4 }
set_blackbox -designs {rfsp8x128m1  }
set_blackbox -designs {rfsp32px35m4 }

# ============================================
# Design Compilation
# ============================================

# Compile the design
read_file -top xm6632_chip_top -format verilog -sva -vcs {-full64 -lca   -kdb -sverilog  +v2k -f $PROJ_ROOT/filelist/cmd_file_ic.f +define+ ARM_V9 \
}



# ============================================
# Formal Assumptions
# ============================================

# GPIO mode assumption (commented out)
# fvassume -expr {xm6371_chip_top.u_dig_top.u_lvd_top.u_new_top.u_ahb1_per_top.u_gpio_top.u_gpios_regs.gpio_modero == 2}

# ============================================
# Clock Generation with Loops
# ============================================

set letters "abcdefghijkl"

for {set i 0} {$i < [string length $letters]} {incr i} {
    set letter [string index $letters $i]
    set result [format "create_clock xm6371_chip_top.u_dig_top.u_lvd_top.u_new_top.u_ahb1_per_top.u_gpio_top.gpios_clk -period 100 " $letter]
    eval $result
}

# ============================================
# CSV Parameters for Constraint Cells
# ============================================

# CSV Parameters
load_cc_set_param csv_enable "%3%"
load_cc_set_param csv_from "%2%"
load_cc_set_param csv_to "%3%"
# load_cc_set_param csv_path_delay "%4%"
# load_cc_set_param csv_enable_hold "%5%"
# load_cc_set_param csv_clock "%6%"
load_cc_set_param csv_prop_name "%4%"
load_cc_set_param csv_start_line "2"



# ============================================
# Load Constraint Cells from CSV
# ============================================

# Load CSV file
load_cc -format csv --./csv/dig2pad.csv

# ============================================
# Initial State Setup
# ============================================

# Load initial state
sia_run -stable
sia_save_reset

# ============================================
# Formal Verification Commands
# ============================================

check_fv -block
report_fv -list > result.log

# Additional verification commands (can be added as needed)
# verify -block
# report_verify_results

