


"""
Python Wrapper for the uart register model

This code was generated from the PeakRDL-python package version 1.1.0

"""

from typing import Union

from ..sim_lib.register import Register, MemoryRegister
from ..sim_lib.memory import Memory
from ..sim_lib.simulator import MemoryEntry
from ..sim_lib.field import FieldDefinition
from ..sim_lib.simulator import AsyncSimulator as Simulator


class uart_simulator_cls(Simulator):

    def _build_registers(self) -> dict[int, Union[MemoryRegister, Register]]:
        return {
            0 : Register(width=32, full_inst_name='uart.uart_data_tx', readable=True, writable=True,
                                         fields=[FieldDefinition(high=7, low=0, msb=7, lsb=0, inst_name='UART_TX_DATA'),
                                                ]),
            4 : Register(width=32, full_inst_name='uart.uart_data_rx', readable=True, writable=False,
                                         fields=[FieldDefinition(high=7, low=0, msb=7, lsb=0, inst_name='UART_DATA_RX'),
                                                ]),
            8 : Register(width=32, full_inst_name='uart.uart_baud', readable=True, writable=True,
                                         fields=[FieldDefinition(high=9, low=0, msb=9, lsb=0, inst_name='DIV'),
                                                ]),
            12 : Register(width=32, full_inst_name='uart.uart_conf', readable=True, writable=True,
                                         fields=[FieldDefinition(high=0, low=0, msb=0, lsb=0, inst_name='CHECK'),FieldDefinition(high=1, low=1, msb=1, lsb=1, inst_name='PARITY'),FieldDefinition(high=2, low=2, msb=2, lsb=2, inst_name='STOP_BIT'),FieldDefinition(high=3, low=3, msb=3, lsb=3, inst_name='STOP_CHECK'),FieldDefinition(high=14, low=14, msb=14, lsb=14, inst_name='TXRST'),FieldDefinition(high=15, low=15, msb=15, lsb=15, inst_name='RXRST'),
                                                ]),
            16 : Register(width=32, full_inst_name='uart.uart_rxtrig', readable=True, writable=True,
                                         fields=[FieldDefinition(high=3, low=0, msb=3, lsb=0, inst_name='rx_line'),
                                                ]),
            20 : Register(width=32, full_inst_name='uart.uart_txtrig', readable=True, writable=True,
                                         fields=[FieldDefinition(high=3, low=0, msb=3, lsb=0, inst_name='tx_line'),
                                                ]),
            24 : Register(width=32, full_inst_name='uart.uart_delay', readable=True, writable=True,
                                         fields=[FieldDefinition(high=3, low=0, msb=3, lsb=0, inst_name='DELAY'),
                                                ]),
            28 : Register(width=32, full_inst_name='uart.uart_status', readable=True, writable=False,
                                         fields=[FieldDefinition(high=0, low=0, msb=0, lsb=0, inst_name='TX_LINE_STATUS'),FieldDefinition(high=1, low=1, msb=1, lsb=1, inst_name='RX_LINE_STATUS'),FieldDefinition(high=2, low=2, msb=2, lsb=2, inst_name='PARITY_ERROR'),FieldDefinition(high=3, low=3, msb=3, lsb=3, inst_name='STOP_ERROR'),
                                                ]),
            32 : Register(width=32, full_inst_name='uart.uxrt_rxfifo_number', readable=True, writable=False,
                                         fields=[FieldDefinition(high=4, low=0, msb=4, lsb=0, inst_name='NUMBER'),
                                                ]),
            36 : Register(width=32, full_inst_name='uart.uart_txfifo_number', readable=True, writable=False,
                                         fields=[FieldDefinition(high=4, low=0, msb=4, lsb=0, inst_name='NUMBER'),
                                                ]),
        }

    def _build_memories(self) -> list[MemoryEntry]:
        return [
        ]

if __name__ == '__main__':
    pass
