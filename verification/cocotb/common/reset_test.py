from reg_model.soc import soc_cls
import cocotb
import random
from lib.async_register_and_field import *

async def test_reset_values(reg_model: soc_cls):
    error_list = []
    for reg in reg_model.get_readable_registers():
        read_value = await reg.read()
        expected_value = 0
        for field in reg.fields:
            field_default = field.default
            mask = (1 << (field.nsb - field.lsb + 1)) - 1
            expected_value |= (field_default & mask) << field.lsb

        if read_value != expected_value:
            error_msg = f"Register address {hex(reg.address)} name {reg.inst_name}: actual_value:expect_value {hex(read_value)} != {hex(expected_value)}"
            error_list.append(error_msg)

    if error_list:
        cocotb.log.error("==== Reset Value Errors Summary ====")
        for error in error_list:
            cocotb.log.error(error)

# 注释掉的函数
# def calc_reg_mask(fields):
#     mask = 0
#     for field in fields:
#         field_width = field.nsb - field.lsb + 1
#         mask |= ((1 << field_width) - 1) << field.lsb