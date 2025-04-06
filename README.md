


## peakrdl-python生成python寄存器模型注意事项
===============
* 命令 peakrdl python  *.rdl -o .*  --async  子命令（python）后要加--aysnc 参数
* write_reg、read_reg 参数名与read_addr_space、read_addr_space参数名一致
* 寄存器模型中reg_model文件中的uart文件，导入的包路径需要修改，在makefie中把soc_ral这个文件夹加入到python可访问的路径，修改uart文件中导入的包，把..lib改为lib.*（文件名）
* `include 子模块rdl,生成一个soc级rdl 