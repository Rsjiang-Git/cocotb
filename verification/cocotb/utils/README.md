

## 系统rdl的生成 
### 由单个模块的rdl 组成的系统级rdl,通过peakrdl 生成系统级寄存器模型
* `include "DMA.rdl"
* `include "flash.rdl"
* addrmap soc {
* 
*   FLASH flash_model @0x4002_3c00
*   DMA  dma_model    @0x4002_6000
* }



## 如果模块中含有多个channel的情况，需要使用regfile
*  可以使用类似于这种形式 8个dma channel  dma_regfile dma_channel[8] @0x100 += 0x20;
*  它的始地址是0x100 每个channel size 0x20 instance 8次
