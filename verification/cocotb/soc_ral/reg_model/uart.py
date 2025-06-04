


"""
Python Wrapper for the uart register model

This code was generated from the PeakRDL-python package version 1.1.0

"""

from enum import IntEnum, unique
from typing import Iterator
from typing import Optional
from typing import Union
from typing import Type
from typing import AsyncGenerator

import warnings



from contextlib import asynccontextmanager

from lib.base import Node
from lib.base import UDPStruct

from lib.base  import AddressMapArray, RegFileArray
from lib.async_memory import AsyncMemory, AsyncMemoryArray
from lib.base import AsyncAddressMap
from lib.base import AsyncRegFile
from lib.base  import AsyncAddressMapArray
from lib.base  import AsyncRegFileArray
from lib.async_memory import MemoryAsyncReadOnly, MemoryAsyncWriteOnly, MemoryAsyncReadWrite
from lib.async_memory import MemoryAsyncReadOnlyArray, MemoryAsyncWriteOnlyArray, MemoryAsyncReadWriteArray
from lib.async_register_and_field import AsyncReg, AsyncRegArray
from lib.async_register_and_field import RegAsyncReadOnly, RegAsyncWriteOnly, RegAsyncReadWrite
from lib.async_register_and_field import RegAsyncReadOnlyArray, RegAsyncWriteOnlyArray, RegAsyncReadWriteArray
from lib.async_register_and_field import FieldAsyncReadOnly, FieldAsyncWriteOnly, FieldAsyncReadWrite


from lib.async_register_and_field import ReadableAsyncRegister, WritableAsyncRegister
from lib.async_memory import ReadableAsyncMemory, WritableAsyncMemory
from lib.async_register_and_field import ReadableAsyncRegisterArray, WriteableAsyncRegisterArray
from lib.base_field import FieldSizeProps, FieldMiscProps,Field


from lib.callbacks import AsyncCallbackSet, AsyncCallbackSetLegacy
















# regfile, register and field definitions
    
    
    
class uart_uart_txfifo_number_NUMBER_cls(FieldAsyncReadOnly):
    
    """
    Class to represent a register field in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = []

    

    
    
    

    
    
class uart_uart_txfifo_number_cls(RegAsyncReadOnly):
    """
    Class to represent a register in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = ['__NUMBER']

    def __init__(self,
                 address: int,
                 width: int,
                 accesswidth: int,
                 logger_handle: str,
                 inst_name: str,
                 parent: Union[AsyncAddressMap,AsyncRegFile,ReadableAsyncMemory]):

        super().__init__(address=address,
                         width=width,
                         accesswidth=accesswidth,
                         logger_handle=logger_handle,
                         inst_name=inst_name,
                         parent=parent)

        # build the field attributes
        
        self.__NUMBER:uart_uart_txfifo_number_NUMBER_cls = uart_uart_txfifo_number_NUMBER_cls(
            parent_register=self,
            size_props=FieldSizeProps(
                width=5,
                lsb=0,
                msb=4,
                low=0,
                high=4),
            misc_props=FieldMiscProps(
                default=0,
                is_volatile=False),
            logger_handle=logger_handle+'.NUMBER',
            inst_name='NUMBER')

    @property
    def fields(self) -> Iterator[Union[FieldAsyncReadOnly, FieldAsyncWriteOnly,FieldAsyncReadWrite]]:
        """
        generator that produces has all the fields within the register
        """
        yield self.NUMBER
        
        # Empty generator in case there are no children of this type
        if False: yield


    

    # build the properties for the fields
    
    @property
    def NUMBER(self) -> uart_uart_txfifo_number_NUMBER_cls:
        """
        Property to access NUMBER field of the register

        +--------------+-------------------------------------------------------------------------+
        | SystemRDL    | Value                                                                   |
        | Field        |                                                                         |
        +==============+=========================================================================+
        | Name         | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        | Description  | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        """
        return self.__NUMBER

    @property
    def systemrdl_python_child_name_map(self) -> dict[str, str]:
        """
        In some cases systemRDL names need to be converted make them python safe, this dictionary
        is used to map the original systemRDL names to the names of the python attributes of this
        class

        Returns: dictionary whose key is the systemRDL names and value it the property name
        """
        return {
                
            'NUMBER':'NUMBER',
                
            }

    

    
    
    

    
    
    
class uart_uxrt_rxfifo_number_NUMBER_cls(FieldAsyncReadOnly):
    
    """
    Class to represent a register field in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = []

    

    
    
    

    
    
class uart_uxrt_rxfifo_number_cls(RegAsyncReadOnly):
    """
    Class to represent a register in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = ['__NUMBER']

    def __init__(self,
                 address: int,
                 width: int,
                 accesswidth: int,
                 logger_handle: str,
                 inst_name: str,
                 parent: Union[AsyncAddressMap,AsyncRegFile,ReadableAsyncMemory]):

        super().__init__(address=address,
                         width=width,
                         accesswidth=accesswidth,
                         logger_handle=logger_handle,
                         inst_name=inst_name,
                         parent=parent)

        # build the field attributes
        
        self.__NUMBER:uart_uxrt_rxfifo_number_NUMBER_cls = uart_uxrt_rxfifo_number_NUMBER_cls(
            parent_register=self,
            size_props=FieldSizeProps(
                width=5,
                lsb=0,
                msb=4,
                low=0,
                high=4),
            misc_props=FieldMiscProps(
                default=0,
                is_volatile=False),
            logger_handle=logger_handle+'.NUMBER',
            inst_name='NUMBER')

    @property
    def fields(self) -> Iterator[Union[FieldAsyncReadOnly, FieldAsyncWriteOnly,FieldAsyncReadWrite]]:
        """
        generator that produces has all the fields within the register
        """
        yield self.NUMBER
        
        # Empty generator in case there are no children of this type
        if False: yield


    

    # build the properties for the fields
    
    @property
    def NUMBER(self) -> uart_uxrt_rxfifo_number_NUMBER_cls:
        """
        Property to access NUMBER field of the register

        +--------------+-------------------------------------------------------------------------+
        | SystemRDL    | Value                                                                   |
        | Field        |                                                                         |
        +==============+=========================================================================+
        | Name         | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        | Description  | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        """
        return self.__NUMBER

    @property
    def systemrdl_python_child_name_map(self) -> dict[str, str]:
        """
        In some cases systemRDL names need to be converted make them python safe, this dictionary
        is used to map the original systemRDL names to the names of the python attributes of this
        class

        Returns: dictionary whose key is the systemRDL names and value it the property name
        """
        return {
                
            'NUMBER':'NUMBER',
                
            }

    

    
    
    

    
    
    
class uart_uart_status_STOP_ERROR_cls(FieldAsyncReadOnly):
    
    """
    Class to represent a register field in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = []

    

    
    
    

    
    
    
class uart_uart_status_PARITY_ERROR_cls(FieldAsyncReadOnly):
    
    """
    Class to represent a register field in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = []

    

    
    
    

    
    
    
class uart_uart_status_RX_LINE_STATUS_cls(FieldAsyncReadOnly):
    
    """
    Class to represent a register field in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = []

    

    
    
    

    
    
    
class uart_uart_status_TX_LINE_STATUS_cls(FieldAsyncReadOnly):
    
    """
    Class to represent a register field in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = []

    

    
    
    

    
    
class uart_uart_status_cls(RegAsyncReadOnly):
    """
    Class to represent a register in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = ['__TX_LINE_STATUS', '__RX_LINE_STATUS', '__PARITY_ERROR', '__STOP_ERROR']

    def __init__(self,
                 address: int,
                 width: int,
                 accesswidth: int,
                 logger_handle: str,
                 inst_name: str,
                 parent: Union[AsyncAddressMap,AsyncRegFile,ReadableAsyncMemory]):

        super().__init__(address=address,
                         width=width,
                         accesswidth=accesswidth,
                         logger_handle=logger_handle,
                         inst_name=inst_name,
                         parent=parent)

        # build the field attributes
        
        self.__TX_LINE_STATUS:uart_uart_status_TX_LINE_STATUS_cls = uart_uart_status_TX_LINE_STATUS_cls(
            parent_register=self,
            size_props=FieldSizeProps(
                width=1,
                lsb=0,
                msb=0,
                low=0,
                high=0),
            misc_props=FieldMiscProps(
                default=0,
                is_volatile=False),
            logger_handle=logger_handle+'.TX_LINE_STATUS',
            inst_name='TX_LINE_STATUS')
        self.__RX_LINE_STATUS:uart_uart_status_RX_LINE_STATUS_cls = uart_uart_status_RX_LINE_STATUS_cls(
            parent_register=self,
            size_props=FieldSizeProps(
                width=1,
                lsb=1,
                msb=1,
                low=1,
                high=1),
            misc_props=FieldMiscProps(
                default=0,
                is_volatile=False),
            logger_handle=logger_handle+'.RX_LINE_STATUS',
            inst_name='RX_LINE_STATUS')
        self.__PARITY_ERROR:uart_uart_status_PARITY_ERROR_cls = uart_uart_status_PARITY_ERROR_cls(
            parent_register=self,
            size_props=FieldSizeProps(
                width=1,
                lsb=2,
                msb=2,
                low=2,
                high=2),
            misc_props=FieldMiscProps(
                default=0,
                is_volatile=False),
            logger_handle=logger_handle+'.PARITY_ERROR',
            inst_name='PARITY_ERROR')
        self.__STOP_ERROR:uart_uart_status_STOP_ERROR_cls = uart_uart_status_STOP_ERROR_cls(
            parent_register=self,
            size_props=FieldSizeProps(
                width=1,
                lsb=3,
                msb=3,
                low=3,
                high=3),
            misc_props=FieldMiscProps(
                default=0,
                is_volatile=False),
            logger_handle=logger_handle+'.STOP_ERROR',
            inst_name='STOP_ERROR')

    @property
    def fields(self) -> Iterator[Union[FieldAsyncReadOnly, FieldAsyncWriteOnly,FieldAsyncReadWrite]]:
        """
        generator that produces has all the fields within the register
        """
        yield self.TX_LINE_STATUS
        yield self.RX_LINE_STATUS
        yield self.PARITY_ERROR
        yield self.STOP_ERROR
        
        # Empty generator in case there are no children of this type
        if False: yield


    

    # build the properties for the fields
    
    @property
    def TX_LINE_STATUS(self) -> uart_uart_status_TX_LINE_STATUS_cls:
        """
        Property to access TX_LINE_STATUS field of the register

        +--------------+-------------------------------------------------------------------------+
        | SystemRDL    | Value                                                                   |
        | Field        |                                                                         |
        +==============+=========================================================================+
        | Name         | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        | Description  | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        """
        return self.__TX_LINE_STATUS
    @property
    def RX_LINE_STATUS(self) -> uart_uart_status_RX_LINE_STATUS_cls:
        """
        Property to access RX_LINE_STATUS field of the register

        +--------------+-------------------------------------------------------------------------+
        | SystemRDL    | Value                                                                   |
        | Field        |                                                                         |
        +==============+=========================================================================+
        | Name         | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        | Description  | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        """
        return self.__RX_LINE_STATUS
    @property
    def PARITY_ERROR(self) -> uart_uart_status_PARITY_ERROR_cls:
        """
        Property to access PARITY_ERROR field of the register

        +--------------+-------------------------------------------------------------------------+
        | SystemRDL    | Value                                                                   |
        | Field        |                                                                         |
        +==============+=========================================================================+
        | Name         | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        | Description  | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        """
        return self.__PARITY_ERROR
    @property
    def STOP_ERROR(self) -> uart_uart_status_STOP_ERROR_cls:
        """
        Property to access STOP_ERROR field of the register

        +--------------+-------------------------------------------------------------------------+
        | SystemRDL    | Value                                                                   |
        | Field        |                                                                         |
        +==============+=========================================================================+
        | Name         | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        | Description  | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        """
        return self.__STOP_ERROR

    @property
    def systemrdl_python_child_name_map(self) -> dict[str, str]:
        """
        In some cases systemRDL names need to be converted make them python safe, this dictionary
        is used to map the original systemRDL names to the names of the python attributes of this
        class

        Returns: dictionary whose key is the systemRDL names and value it the property name
        """
        return {
                
            'TX_LINE_STATUS':'TX_LINE_STATUS',
                
                
            'RX_LINE_STATUS':'RX_LINE_STATUS',
                
                
            'PARITY_ERROR':'PARITY_ERROR',
                
                
            'STOP_ERROR':'STOP_ERROR',
                
            }

    

    
    
    

    
    
    
class uart_uart_delay_DELAY_cls(FieldAsyncReadWrite):
    
    """
    Class to represent a register field in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = []

    

    
    
    

    
    
class uart_uart_delay_cls(RegAsyncReadWrite):
    """
    Class to represent a register in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = ['__DELAY']

    def __init__(self,
                 address: int,
                 width: int,
                 accesswidth: int,
                 logger_handle: str,
                 inst_name: str,
                 parent: Union[AsyncAddressMap,AsyncRegFile,MemoryAsyncReadWrite]):

        super().__init__(address=address,
                         width=width,
                         accesswidth=accesswidth,
                         logger_handle=logger_handle,
                         inst_name=inst_name,
                         parent=parent)

        # build the field attributes
        
        self.__DELAY:uart_uart_delay_DELAY_cls = uart_uart_delay_DELAY_cls(
            parent_register=self,
            size_props=FieldSizeProps(
                width=4,
                lsb=0,
                msb=3,
                low=0,
                high=3),
            misc_props=FieldMiscProps(
                default=0,
                is_volatile=False),
            logger_handle=logger_handle+'.DELAY',
            inst_name='DELAY')

    @property
    def fields(self) -> Iterator[Union[FieldAsyncReadOnly, FieldAsyncWriteOnly,FieldAsyncReadWrite]]:
        """
        generator that produces has all the fields within the register
        """
        yield self.DELAY
        
        # Empty generator in case there are no children of this type
        if False: yield


    

    # build the properties for the fields
    
    @property
    def DELAY(self) -> uart_uart_delay_DELAY_cls:
        """
        Property to access DELAY field of the register

        +--------------+-------------------------------------------------------------------------+
        | SystemRDL    | Value                                                                   |
        | Field        |                                                                         |
        +==============+=========================================================================+
        | Name         | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        | Description  | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        """
        return self.__DELAY

    @property
    def systemrdl_python_child_name_map(self) -> dict[str, str]:
        """
        In some cases systemRDL names need to be converted make them python safe, this dictionary
        is used to map the original systemRDL names to the names of the python attributes of this
        class

        Returns: dictionary whose key is the systemRDL names and value it the property name
        """
        return {
                
            'DELAY':'DELAY',
                
            }

    

    
    
    

    
    
    
class uart_uart_txtrig_tx_line_cls(FieldAsyncReadWrite):
    
    """
    Class to represent a register field in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = []

    

    
    
    

    
    
class uart_uart_txtrig_cls(RegAsyncReadWrite):
    """
    Class to represent a register in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = ['__tx_line']

    def __init__(self,
                 address: int,
                 width: int,
                 accesswidth: int,
                 logger_handle: str,
                 inst_name: str,
                 parent: Union[AsyncAddressMap,AsyncRegFile,MemoryAsyncReadWrite]):

        super().__init__(address=address,
                         width=width,
                         accesswidth=accesswidth,
                         logger_handle=logger_handle,
                         inst_name=inst_name,
                         parent=parent)

        # build the field attributes
        
        self.__tx_line:uart_uart_txtrig_tx_line_cls = uart_uart_txtrig_tx_line_cls(
            parent_register=self,
            size_props=FieldSizeProps(
                width=4,
                lsb=0,
                msb=3,
                low=0,
                high=3),
            misc_props=FieldMiscProps(
                default=0,
                is_volatile=False),
            logger_handle=logger_handle+'.tx_line',
            inst_name='tx_line')

    @property
    def fields(self) -> Iterator[Union[FieldAsyncReadOnly, FieldAsyncWriteOnly,FieldAsyncReadWrite]]:
        """
        generator that produces has all the fields within the register
        """
        yield self.tx_line
        
        # Empty generator in case there are no children of this type
        if False: yield


    

    # build the properties for the fields
    
    @property
    def tx_line(self) -> uart_uart_txtrig_tx_line_cls:
        """
        Property to access tx_line field of the register

        +--------------+-------------------------------------------------------------------------+
        | SystemRDL    | Value                                                                   |
        | Field        |                                                                         |
        +==============+=========================================================================+
        | Name         | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        | Description  | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        """
        return self.__tx_line

    @property
    def systemrdl_python_child_name_map(self) -> dict[str, str]:
        """
        In some cases systemRDL names need to be converted make them python safe, this dictionary
        is used to map the original systemRDL names to the names of the python attributes of this
        class

        Returns: dictionary whose key is the systemRDL names and value it the property name
        """
        return {
                
            'tx_line':'tx_line',
                
            }

    

    
    
    

    
    
    
class uart_uart_rxtrig_rx_line_cls(FieldAsyncReadWrite):
    
    """
    Class to represent a register field in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = []

    

    
    
    

    
    
class uart_uart_rxtrig_cls(RegAsyncReadWrite):
    """
    Class to represent a register in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = ['__rx_line']

    def __init__(self,
                 address: int,
                 width: int,
                 accesswidth: int,
                 logger_handle: str,
                 inst_name: str,
                 parent: Union[AsyncAddressMap,AsyncRegFile,MemoryAsyncReadWrite]):

        super().__init__(address=address,
                         width=width,
                         accesswidth=accesswidth,
                         logger_handle=logger_handle,
                         inst_name=inst_name,
                         parent=parent)

        # build the field attributes
        
        self.__rx_line:uart_uart_rxtrig_rx_line_cls = uart_uart_rxtrig_rx_line_cls(
            parent_register=self,
            size_props=FieldSizeProps(
                width=4,
                lsb=0,
                msb=3,
                low=0,
                high=3),
            misc_props=FieldMiscProps(
                default=0,
                is_volatile=False),
            logger_handle=logger_handle+'.rx_line',
            inst_name='rx_line')

    @property
    def fields(self) -> Iterator[Union[FieldAsyncReadOnly, FieldAsyncWriteOnly,FieldAsyncReadWrite]]:
        """
        generator that produces has all the fields within the register
        """
        yield self.rx_line
        
        # Empty generator in case there are no children of this type
        if False: yield


    

    # build the properties for the fields
    
    @property
    def rx_line(self) -> uart_uart_rxtrig_rx_line_cls:
        """
        Property to access rx_line field of the register

        +--------------+-------------------------------------------------------------------------+
        | SystemRDL    | Value                                                                   |
        | Field        |                                                                         |
        +==============+=========================================================================+
        | Name         | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        | Description  | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        """
        return self.__rx_line

    @property
    def systemrdl_python_child_name_map(self) -> dict[str, str]:
        """
        In some cases systemRDL names need to be converted make them python safe, this dictionary
        is used to map the original systemRDL names to the names of the python attributes of this
        class

        Returns: dictionary whose key is the systemRDL names and value it the property name
        """
        return {
                
            'rx_line':'rx_line',
                
            }

    

    
    
    

    
    
    
class uart_uart_conf_RXRST_cls(FieldAsyncReadWrite):
    
    """
    Class to represent a register field in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = []

    

    
    
    

    
    
    
class uart_uart_conf_TXRST_cls(FieldAsyncReadWrite):
    
    """
    Class to represent a register field in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = []

    

    
    
    

    
    
    
class uart_uart_conf_STOP_CHECK_cls(FieldAsyncReadWrite):
    
    """
    Class to represent a register field in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = []

    

    
    
    

    
    
    
class uart_uart_conf_STOP_BIT_cls(FieldAsyncReadWrite):
    
    """
    Class to represent a register field in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = []

    

    
    
    

    
    
    
class uart_uart_conf_PARITY_cls(FieldAsyncReadWrite):
    
    """
    Class to represent a register field in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = []

    

    
    
    

    
    
    
class uart_uart_conf_CHECK_cls(FieldAsyncReadWrite):
    
    """
    Class to represent a register field in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = []

    

    
    
    

    
    
class uart_uart_conf_cls(RegAsyncReadWrite):
    """
    Class to represent a register in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = ['__CHECK', '__PARITY', '__STOP_BIT', '__STOP_CHECK', '__TXRST', '__RXRST']

    def __init__(self,
                 address: int,
                 width: int,
                 accesswidth: int,
                 logger_handle: str,
                 inst_name: str,
                 parent: Union[AsyncAddressMap,AsyncRegFile,MemoryAsyncReadWrite]):

        super().__init__(address=address,
                         width=width,
                         accesswidth=accesswidth,
                         logger_handle=logger_handle,
                         inst_name=inst_name,
                         parent=parent)

        # build the field attributes
        
        self.__CHECK:uart_uart_conf_CHECK_cls = uart_uart_conf_CHECK_cls(
            parent_register=self,
            size_props=FieldSizeProps(
                width=1,
                lsb=0,
                msb=0,
                low=0,
                high=0),
            misc_props=FieldMiscProps(
                default=0,
                is_volatile=False),
            logger_handle=logger_handle+'.CHECK',
            inst_name='CHECK')
        self.__PARITY:uart_uart_conf_PARITY_cls = uart_uart_conf_PARITY_cls(
            parent_register=self,
            size_props=FieldSizeProps(
                width=1,
                lsb=1,
                msb=1,
                low=1,
                high=1),
            misc_props=FieldMiscProps(
                default=0,
                is_volatile=False),
            logger_handle=logger_handle+'.PARITY',
            inst_name='PARITY')
        self.__STOP_BIT:uart_uart_conf_STOP_BIT_cls = uart_uart_conf_STOP_BIT_cls(
            parent_register=self,
            size_props=FieldSizeProps(
                width=1,
                lsb=2,
                msb=2,
                low=2,
                high=2),
            misc_props=FieldMiscProps(
                default=0,
                is_volatile=False),
            logger_handle=logger_handle+'.STOP_BIT',
            inst_name='STOP_BIT')
        self.__STOP_CHECK:uart_uart_conf_STOP_CHECK_cls = uart_uart_conf_STOP_CHECK_cls(
            parent_register=self,
            size_props=FieldSizeProps(
                width=1,
                lsb=3,
                msb=3,
                low=3,
                high=3),
            misc_props=FieldMiscProps(
                default=0,
                is_volatile=False),
            logger_handle=logger_handle+'.STOP_CHECK',
            inst_name='STOP_CHECK')
        self.__TXRST:uart_uart_conf_TXRST_cls = uart_uart_conf_TXRST_cls(
            parent_register=self,
            size_props=FieldSizeProps(
                width=1,
                lsb=14,
                msb=14,
                low=14,
                high=14),
            misc_props=FieldMiscProps(
                default=0,
                is_volatile=False),
            logger_handle=logger_handle+'.TXRST',
            inst_name='TXRST')
        self.__RXRST:uart_uart_conf_RXRST_cls = uart_uart_conf_RXRST_cls(
            parent_register=self,
            size_props=FieldSizeProps(
                width=1,
                lsb=15,
                msb=15,
                low=15,
                high=15),
            misc_props=FieldMiscProps(
                default=0,
                is_volatile=False),
            logger_handle=logger_handle+'.RXRST',
            inst_name='RXRST')

    @property
    def fields(self) -> Iterator[Union[FieldAsyncReadOnly, FieldAsyncWriteOnly,FieldAsyncReadWrite]]:
        """
        generator that produces has all the fields within the register
        """
        yield self.CHECK
        yield self.PARITY
        yield self.STOP_BIT
        yield self.STOP_CHECK
        yield self.TXRST
        yield self.RXRST
        
        # Empty generator in case there are no children of this type
        if False: yield


    

    # build the properties for the fields
    
    @property
    def CHECK(self) -> uart_uart_conf_CHECK_cls:
        """
        Property to access CHECK field of the register

        +--------------+-------------------------------------------------------------------------+
        | SystemRDL    | Value                                                                   |
        | Field        |                                                                         |
        +==============+=========================================================================+
        | Name         | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        | Description  | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        """
        return self.__CHECK
    @property
    def PARITY(self) -> uart_uart_conf_PARITY_cls:
        """
        Property to access PARITY field of the register

        +--------------+-------------------------------------------------------------------------+
        | SystemRDL    | Value                                                                   |
        | Field        |                                                                         |
        +==============+=========================================================================+
        | Name         | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        | Description  | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        """
        return self.__PARITY
    @property
    def STOP_BIT(self) -> uart_uart_conf_STOP_BIT_cls:
        """
        Property to access STOP_BIT field of the register

        +--------------+-------------------------------------------------------------------------+
        | SystemRDL    | Value                                                                   |
        | Field        |                                                                         |
        +==============+=========================================================================+
        | Name         | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        | Description  | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        """
        return self.__STOP_BIT
    @property
    def STOP_CHECK(self) -> uart_uart_conf_STOP_CHECK_cls:
        """
        Property to access STOP_CHECK field of the register

        +--------------+-------------------------------------------------------------------------+
        | SystemRDL    | Value                                                                   |
        | Field        |                                                                         |
        +==============+=========================================================================+
        | Name         | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        | Description  | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        """
        return self.__STOP_CHECK
    @property
    def TXRST(self) -> uart_uart_conf_TXRST_cls:
        """
        Property to access TXRST field of the register

        +--------------+-------------------------------------------------------------------------+
        | SystemRDL    | Value                                                                   |
        | Field        |                                                                         |
        +==============+=========================================================================+
        | Name         | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        | Description  | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        """
        return self.__TXRST
    @property
    def RXRST(self) -> uart_uart_conf_RXRST_cls:
        """
        Property to access RXRST field of the register

        +--------------+-------------------------------------------------------------------------+
        | SystemRDL    | Value                                                                   |
        | Field        |                                                                         |
        +==============+=========================================================================+
        | Name         | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        | Description  | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        """
        return self.__RXRST

    @property
    def systemrdl_python_child_name_map(self) -> dict[str, str]:
        """
        In some cases systemRDL names need to be converted make them python safe, this dictionary
        is used to map the original systemRDL names to the names of the python attributes of this
        class

        Returns: dictionary whose key is the systemRDL names and value it the property name
        """
        return {
                
            'CHECK':'CHECK',
                
                
            'PARITY':'PARITY',
                
                
            'STOP_BIT':'STOP_BIT',
                
                
            'STOP_CHECK':'STOP_CHECK',
                
                
            'TXRST':'TXRST',
                
                
            'RXRST':'RXRST',
                
            }

    

    
    
    

    
    
    
class uart_uart_baud_DIV_cls(FieldAsyncReadWrite):
    
    """
    Class to represent a register field in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = []

    

    
    
    

    
    
class uart_uart_baud_cls(RegAsyncReadWrite):
    """
    Class to represent a register in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = ['__DIV']

    def __init__(self,
                 address: int,
                 width: int,
                 accesswidth: int,
                 logger_handle: str,
                 inst_name: str,
                 parent: Union[AsyncAddressMap,AsyncRegFile,MemoryAsyncReadWrite]):

        super().__init__(address=address,
                         width=width,
                         accesswidth=accesswidth,
                         logger_handle=logger_handle,
                         inst_name=inst_name,
                         parent=parent)

        # build the field attributes
        
        self.__DIV:uart_uart_baud_DIV_cls = uart_uart_baud_DIV_cls(
            parent_register=self,
            size_props=FieldSizeProps(
                width=10,
                lsb=0,
                msb=9,
                low=0,
                high=9),
            misc_props=FieldMiscProps(
                default=338,
                is_volatile=False),
            logger_handle=logger_handle+'.DIV',
            inst_name='DIV')

    @property
    def fields(self) -> Iterator[Union[FieldAsyncReadOnly, FieldAsyncWriteOnly,FieldAsyncReadWrite]]:
        """
        generator that produces has all the fields within the register
        """
        yield self.DIV
        
        # Empty generator in case there are no children of this type
        if False: yield


    

    # build the properties for the fields
    
    @property
    def DIV(self) -> uart_uart_baud_DIV_cls:
        """
        Property to access DIV field of the register

        +--------------+-------------------------------------------------------------------------+
        | SystemRDL    | Value                                                                   |
        | Field        |                                                                         |
        +==============+=========================================================================+
        | Name         | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        | Description  | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        """
        return self.__DIV

    @property
    def systemrdl_python_child_name_map(self) -> dict[str, str]:
        """
        In some cases systemRDL names need to be converted make them python safe, this dictionary
        is used to map the original systemRDL names to the names of the python attributes of this
        class

        Returns: dictionary whose key is the systemRDL names and value it the property name
        """
        return {
                
            'DIV':'DIV',
                
            }

    

    
    
    

    
    
    
class uart_uart_data_rx_UART_DATA_RX_cls(FieldAsyncReadOnly):
    
    """
    Class to represent a register field in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    |              |      7-bit Address Detection                                            |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = []

    

    
    
    

    
    
class uart_uart_data_rx_cls(RegAsyncReadOnly):
    """
    Class to represent a register in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = ['__UART_DATA_RX']

    def __init__(self,
                 address: int,
                 width: int,
                 accesswidth: int,
                 logger_handle: str,
                 inst_name: str,
                 parent: Union[AsyncAddressMap,AsyncRegFile,ReadableAsyncMemory]):

        super().__init__(address=address,
                         width=width,
                         accesswidth=accesswidth,
                         logger_handle=logger_handle,
                         inst_name=inst_name,
                         parent=parent)

        # build the field attributes
        
        self.__UART_DATA_RX:uart_uart_data_rx_UART_DATA_RX_cls = uart_uart_data_rx_UART_DATA_RX_cls(
            parent_register=self,
            size_props=FieldSizeProps(
                width=8,
                lsb=0,
                msb=7,
                low=0,
                high=7),
            misc_props=FieldMiscProps(
                default=0,
                is_volatile=False),
            logger_handle=logger_handle+'.UART_DATA_RX',
            inst_name='UART_DATA_RX')

    @property
    def fields(self) -> Iterator[Union[FieldAsyncReadOnly, FieldAsyncWriteOnly,FieldAsyncReadWrite]]:
        """
        generator that produces has all the fields within the register
        """
        yield self.UART_DATA_RX
        
        # Empty generator in case there are no children of this type
        if False: yield


    

    # build the properties for the fields
    
    @property
    def UART_DATA_RX(self) -> uart_uart_data_rx_UART_DATA_RX_cls:
        """
        Property to access UART_DATA_RX field of the register

        +--------------+-------------------------------------------------------------------------+
        | SystemRDL    | Value                                                                   |
        | Field        |                                                                         |
        +==============+=========================================================================+
        | Name         | .. raw:: html                                                           |
        |              |                                                                         |
        |              |      7-bit Address Detection                                            |
        +--------------+-------------------------------------------------------------------------+
        | Description  | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        """
        return self.__UART_DATA_RX

    @property
    def systemrdl_python_child_name_map(self) -> dict[str, str]:
        """
        In some cases systemRDL names need to be converted make them python safe, this dictionary
        is used to map the original systemRDL names to the names of the python attributes of this
        class

        Returns: dictionary whose key is the systemRDL names and value it the property name
        """
        return {
                
            'UART_DATA_RX':'UART_DATA_RX',
                
            }

    

    
    
    

    
    
    
class uart_uart_data_tx_UART_TX_DATA_cls(FieldAsyncReadWrite):
    
    """
    Class to represent a register field in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = []

    

    
    
    

    
    
class uart_uart_data_tx_cls(RegAsyncReadWrite):
    """
    Class to represent a register in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = ['__UART_TX_DATA']

    def __init__(self,
                 address: int,
                 width: int,
                 accesswidth: int,
                 logger_handle: str,
                 inst_name: str,
                 parent: Union[AsyncAddressMap,AsyncRegFile,MemoryAsyncReadWrite]):

        super().__init__(address=address,
                         width=width,
                         accesswidth=accesswidth,
                         logger_handle=logger_handle,
                         inst_name=inst_name,
                         parent=parent)

        # build the field attributes
        
        self.__UART_TX_DATA:uart_uart_data_tx_UART_TX_DATA_cls = uart_uart_data_tx_UART_TX_DATA_cls(
            parent_register=self,
            size_props=FieldSizeProps(
                width=8,
                lsb=0,
                msb=7,
                low=0,
                high=7),
            misc_props=FieldMiscProps(
                default=0,
                is_volatile=False),
            logger_handle=logger_handle+'.UART_TX_DATA',
            inst_name='UART_TX_DATA')

    @property
    def fields(self) -> Iterator[Union[FieldAsyncReadOnly, FieldAsyncWriteOnly,FieldAsyncReadWrite]]:
        """
        generator that produces has all the fields within the register
        """
        yield self.UART_TX_DATA
        
        # Empty generator in case there are no children of this type
        if False: yield


    

    # build the properties for the fields
    
    @property
    def UART_TX_DATA(self) -> uart_uart_data_tx_UART_TX_DATA_cls:
        """
        Property to access UART_TX_DATA field of the register

        +--------------+-------------------------------------------------------------------------+
        | SystemRDL    | Value                                                                   |
        | Field        |                                                                         |
        +==============+=========================================================================+
        | Name         | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        | Description  | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        """
        return self.__UART_TX_DATA

    @property
    def systemrdl_python_child_name_map(self) -> dict[str, str]:
        """
        In some cases systemRDL names need to be converted make them python safe, this dictionary
        is used to map the original systemRDL names to the names of the python attributes of this
        class

        Returns: dictionary whose key is the systemRDL names and value it the property name
        """
        return {
                
            'UART_TX_DATA':'UART_TX_DATA',
                
            }

    

    
    
    

    
    
class uart_cls(AsyncAddressMap):
    """
    Class to represent a address map in the register model

    +--------------+-------------------------------------------------------------------------+
    | SystemRDL    | Value                                                                   |
    | Field        |                                                                         |
    +==============+=========================================================================+
    | Name         | .. raw:: html                                                           |
    |              |                                                                         |
    |              |      Universal Asynchronous Receiver/Transmitter                        |
    +--------------+-------------------------------------------------------------------------+
    | Description  | .. raw:: html                                                           |
    |              |                                                                         |
    |              |      <p>UART Controller Register Description</p>                        |
    +--------------+-------------------------------------------------------------------------+
    """

    __slots__ : list[str] = ['__uart_data_tx', '__uart_data_rx', '__uart_baud', '__uart_conf', '__uart_rxtrig', '__uart_txtrig', '__uart_delay', '__uart_status', '__uxrt_rxfifo_number', '__uart_txfifo_number']

    def __init__(self, *,
                 address:int=0,
                 logger_handle:str='reg_model.uart',
                 inst_name:str='uart',
                 callbacks: Optional[Union[AsyncCallbackSet, AsyncCallbackSetLegacy]]=None,
                 parent:Optional[AsyncAddressMap]=None):

        if callbacks is not None:
            if not isinstance(callbacks, (AsyncCallbackSet, AsyncCallbackSetLegacy)):
                raise TypeError(f'callbacks should be AsyncCallbackSet, AsyncCallbackSetLegacy got {type(callbacks)}')

        super().__init__(callbacks=callbacks,
                         address=address,
                         logger_handle=logger_handle,
                         inst_name=inst_name,
                         parent=parent)

        
            
        self.__uart_data_tx:uart_uart_data_tx_cls = uart_uart_data_tx_cls(
                                                                     address=self.address+0,
                                                                     accesswidth=32,
                                                                     width=32,
                                                                     logger_handle=logger_handle+'.uart_data_tx',
                                                                     inst_name='uart_data_tx', parent=self)
        
            
        self.__uart_data_rx:uart_uart_data_rx_cls = uart_uart_data_rx_cls(
                                                                     address=self.address+4,
                                                                     accesswidth=32,
                                                                     width=32,
                                                                     logger_handle=logger_handle+'.uart_data_rx',
                                                                     inst_name='uart_data_rx', parent=self)
        
            
        self.__uart_baud:uart_uart_baud_cls = uart_uart_baud_cls(
                                                                     address=self.address+8,
                                                                     accesswidth=32,
                                                                     width=32,
                                                                     logger_handle=logger_handle+'.uart_baud',
                                                                     inst_name='uart_baud', parent=self)
        
            
        self.__uart_conf:uart_uart_conf_cls = uart_uart_conf_cls(
                                                                     address=self.address+12,
                                                                     accesswidth=32,
                                                                     width=32,
                                                                     logger_handle=logger_handle+'.uart_conf',
                                                                     inst_name='uart_conf', parent=self)
        
            
        self.__uart_rxtrig:uart_uart_rxtrig_cls = uart_uart_rxtrig_cls(
                                                                     address=self.address+16,
                                                                     accesswidth=32,
                                                                     width=32,
                                                                     logger_handle=logger_handle+'.uart_rxtrig',
                                                                     inst_name='uart_rxtrig', parent=self)
        
            
        self.__uart_txtrig:uart_uart_txtrig_cls = uart_uart_txtrig_cls(
                                                                     address=self.address+20,
                                                                     accesswidth=32,
                                                                     width=32,
                                                                     logger_handle=logger_handle+'.uart_txtrig',
                                                                     inst_name='uart_txtrig', parent=self)
        
            
        self.__uart_delay:uart_uart_delay_cls = uart_uart_delay_cls(
                                                                     address=self.address+24,
                                                                     accesswidth=32,
                                                                     width=32,
                                                                     logger_handle=logger_handle+'.uart_delay',
                                                                     inst_name='uart_delay', parent=self)
        
            
        self.__uart_status:uart_uart_status_cls = uart_uart_status_cls(
                                                                     address=self.address+28,
                                                                     accesswidth=32,
                                                                     width=32,
                                                                     logger_handle=logger_handle+'.uart_status',
                                                                     inst_name='uart_status', parent=self)
        
            
        self.__uxrt_rxfifo_number:uart_uxrt_rxfifo_number_cls = uart_uxrt_rxfifo_number_cls(
                                                                     address=self.address+32,
                                                                     accesswidth=32,
                                                                     width=32,
                                                                     logger_handle=logger_handle+'.uxrt_rxfifo_number',
                                                                     inst_name='uxrt_rxfifo_number', parent=self)
        
            
        self.__uart_txfifo_number:uart_uart_txfifo_number_cls = uart_uart_txfifo_number_cls(
                                                                     address=self.address+36,
                                                                     accesswidth=32,
                                                                     width=32,
                                                                     logger_handle=logger_handle+'.uart_txfifo_number',
                                                                     inst_name='uart_txfifo_number', parent=self)
        

    @property
    def size(self) -> int:
        return 40
    @property
    def uart_data_tx(self) -> uart_uart_data_tx_cls:
        """
        Property to access uart_data_tx 

        +--------------+-------------------------------------------------------------------------+
        | SystemRDL    | Value                                                                   |
        | Field        |                                                                         |
        +==============+=========================================================================+
        | Name         | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        | Description  | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        """
        return self.__uart_data_tx
        
    @property
    def uart_data_rx(self) -> uart_uart_data_rx_cls:
        """
        Property to access uart_data_rx 

        +--------------+-------------------------------------------------------------------------+
        | SystemRDL    | Value                                                                   |
        | Field        |                                                                         |
        +==============+=========================================================================+
        | Name         | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        | Description  | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        """
        return self.__uart_data_rx
        
    @property
    def uart_baud(self) -> uart_uart_baud_cls:
        """
        Property to access uart_baud 

        +--------------+-------------------------------------------------------------------------+
        | SystemRDL    | Value                                                                   |
        | Field        |                                                                         |
        +==============+=========================================================================+
        | Name         | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        | Description  | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        """
        return self.__uart_baud
        
    @property
    def uart_conf(self) -> uart_uart_conf_cls:
        """
        Property to access uart_conf 

        +--------------+-------------------------------------------------------------------------+
        | SystemRDL    | Value                                                                   |
        | Field        |                                                                         |
        +==============+=========================================================================+
        | Name         | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        | Description  | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        """
        return self.__uart_conf
        
    @property
    def uart_rxtrig(self) -> uart_uart_rxtrig_cls:
        """
        Property to access uart_rxtrig 

        +--------------+-------------------------------------------------------------------------+
        | SystemRDL    | Value                                                                   |
        | Field        |                                                                         |
        +==============+=========================================================================+
        | Name         | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        | Description  | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        """
        return self.__uart_rxtrig
        
    @property
    def uart_txtrig(self) -> uart_uart_txtrig_cls:
        """
        Property to access uart_txtrig 

        +--------------+-------------------------------------------------------------------------+
        | SystemRDL    | Value                                                                   |
        | Field        |                                                                         |
        +==============+=========================================================================+
        | Name         | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        | Description  | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        """
        return self.__uart_txtrig
        
    @property
    def uart_delay(self) -> uart_uart_delay_cls:
        """
        Property to access uart_delay 

        +--------------+-------------------------------------------------------------------------+
        | SystemRDL    | Value                                                                   |
        | Field        |                                                                         |
        +==============+=========================================================================+
        | Name         | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        | Description  | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        """
        return self.__uart_delay
        
    @property
    def uart_status(self) -> uart_uart_status_cls:
        """
        Property to access uart_status 

        +--------------+-------------------------------------------------------------------------+
        | SystemRDL    | Value                                                                   |
        | Field        |                                                                         |
        +==============+=========================================================================+
        | Name         | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        | Description  | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        """
        return self.__uart_status
        
    @property
    def uxrt_rxfifo_number(self) -> uart_uxrt_rxfifo_number_cls:
        """
        Property to access uxrt_rxfifo_number 

        +--------------+-------------------------------------------------------------------------+
        | SystemRDL    | Value                                                                   |
        | Field        |                                                                         |
        +==============+=========================================================================+
        | Name         | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        | Description  | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        """
        return self.__uxrt_rxfifo_number
        
    @property
    def uart_txfifo_number(self) -> uart_uart_txfifo_number_cls:
        """
        Property to access uart_txfifo_number 

        +--------------+-------------------------------------------------------------------------+
        | SystemRDL    | Value                                                                   |
        | Field        |                                                                         |
        +==============+=========================================================================+
        | Name         | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        | Description  | .. raw:: html                                                           |
        |              |                                                                         |
        +--------------+-------------------------------------------------------------------------+
        """
        return self.__uart_txfifo_number
        

    @property
    def systemrdl_python_child_name_map(self) -> dict[str, str]:
        """
        In some cases systemRDL names need to be converted make them python safe, this dictionary
        is used to map the original systemRDL names to the names of the python attributes of this
        class

        Returns: dictionary whose key is the systemRDL names and value it the property name
        """
        return {'uart_data_tx':'uart_data_tx','uart_data_rx':'uart_data_rx','uart_baud':'uart_baud','uart_conf':'uart_conf','uart_rxtrig':'uart_rxtrig','uart_txtrig':'uart_txtrig','uart_delay':'uart_delay','uart_status':'uart_status','uxrt_rxfifo_number':'uxrt_rxfifo_number','uart_txfifo_number':'uart_txfifo_number',
            }

    

    
    

    
    def get_registers(self, unroll:bool=False) -> Iterator[Union[AsyncReg, AsyncRegArray]]:
        """
        generator that produces all the registers of this node
        """
        
                    
        yield self.uart_data_tx
        
                    
        yield self.uart_data_rx
        
                    
        yield self.uart_baud
        
                    
        yield self.uart_conf
        
                    
        yield self.uart_rxtrig
        
                    
        yield self.uart_txtrig
        
                    
        yield self.uart_delay
        
                    
        yield self.uart_status
        
                    
        yield self.uxrt_rxfifo_number
        
                    
        yield self.uart_txfifo_number
        

        # Empty generator in case there are no children of this type
        if False: yield
    
    
    def get_sections(self, unroll:bool=False) -> Iterator[Union[AsyncAddressMap, AsyncRegFile, AsyncAddressMapArray, AsyncRegFileArray]]:
        """
        generator that produces all the AsyncAddressMap, AsyncRegFile, AsyncAddressMapArray, AsyncRegFileArray children of this node
        """
        

        # Empty generator in case there are no children of this type
        if False: yield
    
    def get_memories(self, unroll:bool=False) -> Iterator[Union[AsyncMemory, AsyncMemoryArray]]:
        """
        generator that produces all the AsyncMemory, AsyncMemoryArray children of this node
        """
        

        # Empty generator in case there are no children of this type
        if False: yield
    
    



if __name__ == '__main__':
    # dummy functions to demonstrate the class
    async def read_addr_space(addr: int, width: int, accesswidth: int) -> int:
        """
        Callback to simulate the operation of the package, everytime the read is called, it will
        request the user input the value to be read back.

        Args:
            addr: Address to write to
            width: Width of the register in bits
            accesswidth: Minimum access width of the register in bits

        Returns:
            value inputted by the used
        """
        assert isinstance(addr, int)
        assert isinstance(width, int)
        assert isinstance(accesswidth, int)
        return int(input('value to read from address:0x%X'%addr))

    async def write_addr_space(addr: int, width: int, accesswidth: int, data: int) -> None:
        """
        Callback to simulate the operation of the package, everytime the read is called, it will
        request the user input the value to be read back.

        Args:
            addr: Address to write to
            width: Width of the register in bits
            accesswidth: Minimum access width of the register in bits
            data: value to be written to the register

        Returns:
            None
        """
        assert isinstance(addr, int)
        assert isinstance(width, int)
        assert isinstance(accesswidth, int)
        assert isinstance(data, int)
        print('write data:0x%X to address:0x%X'%(data, addr))

    # create an instance of the class
    uart = uart_cls(callbacks = AsyncCallbackSet(read_callback=read_addr_space,
                                                                                                     write_callback=write_addr_space))