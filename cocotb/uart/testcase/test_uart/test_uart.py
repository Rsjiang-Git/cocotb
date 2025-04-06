from random import randint     
from cocotb import test
from ClkReset import ClkReset


from cocotb.regression import TestFactory
from Amba_Testbench import Apb_Bus

from reg_model.uart import uart_cls
from lib.callbacks import AsyncCallbackSet

import cocotb

def returned_val(read_op):
    return int.from_bytes(read_op, byteorder='little')




# @cocotb.test()
async def test_uart(dut):
    clk_rst    = ClkReset(dut, clock_name= "clk", clock_period = 10, reset_sense=0, reset_name="rst_")
    clk_rst_26 = ClkReset(dut, clock_name= "clk26m", clock_period = 38, reset_sense=0, reset_name="rst26m_")
   
    apb = Apb_Bus(dut, apb_prefix = "s_apb", clk_name="clk")
    await clk_rst.start()
    await clk_rst_26.start()
    
    uart = uart_cls(callbacks= AsyncCallbackSet(read_callback = apb.read_reg, write_callback=apb.write_reg))    

    await uart.uart_conf.TXRST.read()
    
    await clk_rst.wait_clkn(200)
    await apb.apb_master.write(0x0c,0x1234)
    # await apb.apb_master.write(0x08,0x5678)
    await apb.apb_master.write(0x08,0xaa)
    read_op = await apb.apb_master.read(0x0c)
    cocotb.log.info("read_op = {}".format(read_op))
    # read_op = await tb.intf.read(0x0000)
    ret = returned_val(read_op)
    assert 0x1 == ret
    
    # x = 0x12345678
    # bytesdata = x.to_bytes(len(tb.bus.pwdata), 'little')
    # await tb.intf.write(0x0000, bytesdata)

    # read_op = await tb.intf.read(0x0000)
    # ret = returned_val(read_op)
    # assert x == ret
    
    # await tb.intf.read(0x0000, bytesdata)

    # bytesdata = 0x12345679.to_bytes(len(tb.bus.pwdata), 'little')
    # await tb.intf.read(0x0000, bytesdata)
    await clk_rst.wait_clkn(200)

#     try:
#         await tb.intf.read(0x0000, bytesdata)
# #         raise
#     except Exception:
#         pass



    # await tb.cr.end_test(200)
    
if cocotb.SIM_NAME:
    factory = TestFactory(test_uart)
    
    # factory.add_option("pip_mode", [False, True])
    factory.generate_tests()

