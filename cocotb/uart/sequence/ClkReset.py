from cocotb import start_soon
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
import cocotb

class ClkReset:
    def __init__(self, dut, clock_name= "clk", clock_period=10, reset_name="rst", reset_sense=1):
      
        self.dut = dut
        self.clock_name = clock_name
        self.clock_period = clock_period
        self.reset_sense = reset_sense
        self.reset_name = reset_name
        
        self._get_clock_signal().setimmediatevalue(0)
        self._get_reset_signal().setimmediatevalue(0)

    def _get_reset_signal(self):
        return getattr(self.dut, self.reset_name)

    def _get_clock_signal(self):
        return getattr(self.dut, self.clock_name)
    async def start(self):
        
        start_soon(Clock(self._get_clock_signal(), self.clock_period, units='ns').start())
        await self.reset()

    async def reset(self, duration=100):
   
        reset_sig = self._get_reset_signal()
        reset_sig.value = self.reset_sense  # 激活复位
        await Timer(duration, units = "ns")   # 保持复位状态
        reset_sig.value = not self.reset_sense  # 释放复位
        await RisingEdge(self._get_clock_signal())      # 同步到时钟上升沿
        cocotb.log.info("Reset released")
        
    async def wait_clkn(self, length=2):
        for i in range(length):
            await RisingEdge(self._get_clock_signal())

