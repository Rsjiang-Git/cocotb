# list_rtl.f - RTL Design Filelist
# Project: SPI/I2S Module
# Generated from 2a2bec79b4c4b75814ce6b4360a79399.jpg

# ============================================
# Include Directories
# ============================================

# SPI/I2S Function directory
+incdir+$RTL/rtl/lvd/spi_i2s/function

# Standard Library directory
+incdir+$RTL/model/stdlib

# ============================================
# Common Components
# ============================================

# Common one-hot multiplexer
$RTL/rtl/lvd/common/com_onehot_mux.v

# ============================================
# SPB (Serial Peripheral Bus) Components
# ============================================

# SPB module
$RTL/rtl/lvd/smba/spb/DM_spb.v

# SPB AHB slave interface
$RTL/rtl/lvd/smba/spb/DM_spb_ahbsif.v

# SPB deserializer
$RTL/rtl/lvd/smba/spb/DM_spb_desler.v

# SPB multiplexer
$RTL/rtl/lvd/smba/spb/DM_spb_mux.v

# SPB programmable multiplexer
$RTL/rtl/lvd/smba/spb/DM_spb_promux.v

# SPB peripheral select
$RTL/rtl/lvd/smba/spb/DM_spb_psel.v

# SPB read retiming
$RTL/rtl/lvd/smba/spb/DM_spb_rdretina.v

# SPB serializer
$RTL/rtl/lvd/smba/spb/DM_spb_sler.v

# ============================================
# Standard Cell Library Models
# ============================================

# Standard cell components
$RTL/model/stdlib/STDCELLLTBOE.F_v
$RTL/model/stdlib/CLLWMSTDCELL.v
$RTL/model/stdlib/WSPWDSTDCELL.v
$RTL/model/stdlib/SCAWWDSTDCELL.v
$RTL/model/stdlib/RSTRDSTDCELL.v

# D-type flip-flops
$RTL/model/stdlib/DLAYSNSTDCELL.v
$RTL/model/stdlib/DFFSNSTDCELL.v
$RTL/model/stdlib/DFFRNSTDCELL.v

# Clock gating cells
$RTL/model/stdlib/COSSTDSTDCELL.v

# Note: Some files appear multiple times in the original list
# They are listed only once here

# ============================================
# Additional SPI/I2S Components (if needed)
# ============================================

# You may want to add SPI/I2S specific files
# +incdir+$RTL/rtl/lvd/spi_i2s/rtl
# $RTL/rtl/lvd/spi_i2s/rtl/spi_core.v
# $RTL/rtl/lvd/spi_i2s/rtl/i2s_core.v
# $RTL/rtl/lvd/spi_i2s/rtl/spi_i2s_top.v

# ============================================
# Additional Common Components (if needed)
# ============================================

# +incdir+$RTL/rtl/lvd/common
# $RTL/rtl/lvd/common/com_fifo.v
# $RTL/rtl/lvd/common/com_sync.v
# $RTL/rtl/lvd/common/com_counter.v

# End of filelist