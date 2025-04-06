## peakrdl-python生成Python寄存器模型、cocotb使用寄存器模型注意事项

### 基本命令使用
使用peakrdl生成Python寄存器模型时，需要注意以下命令格式：
```bash
    peakrdl python *.rdl -o . --async
```

* 子命令python后必须添加--async参数以生成异步接口
* .rdl指输入的RDL文件
* .指输出目录为当前目录
* write_reg和read_reg方法的参数名需要与read_addr_space和write_addr_space的参数名保持一致

### 参数命名一致性
* write_reg和read_reg方法的参数名需要与read_addr_space和write_addr_space的参数名保持一致


### 需要修改导入的包路径
* 在Makefile中将soc_ral文件夹添加到Python可访问路径
* 生成 reg_model文件中，将uart文件中..lib改为lib.*（根据实际文件名调整）


### 子模块集成
* 当使用include包含子模块RDL时,需要生成一个SOC级的RDL文件
* 确保所有子模块路径正确
* 顶层RDL应正确引用所有子模块