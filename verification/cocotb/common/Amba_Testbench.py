
from cocotbext.apb import ApbMaster
from cocotbext.apb import Apb3Bus
import cocotb



class Apb_Bus:
    def __init__(self, dut , apb_prefix="s_apb",clk_name = "clk"):
        self.dut = dut
        self.bus = Apb3Bus.from_prefix(self.dut, apb_prefix)
        self.apb_master = ApbMaster(self.bus, getattr(self.dut, clk_name))

    async def write_reg(self, addr, width , accesswidth ,data):
        
        await self.apb_master.write(addr,data)
        
    async def read_reg(self, addr, width , accesswidth):
        
        
        data = await self.apb_master.read(addr)

        result = int.from_bytes(data, 'little')
        cocotb.log.info(f"result = {result}")
        return result


