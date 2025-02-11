# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import datetime
import sys
import types
import typing
import uuid as _uuid
from builtins import property as _property

import winrt._winrt
import winrt.system
import winrt.windows.devices.spi.provider
import winrt.windows.foundation
import winrt.windows.foundation.collections

from winrt.windows.devices.spi import SpiMode, SpiSharingMode

Self = typing.TypeVar('Self')

@typing.final
class SpiBusInfo(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> SpiBusInfo: ...
    @_property
    def chip_select_line_count(self) -> winrt.system.Int32: ...
    @_property
    def max_clock_frequency(self) -> winrt.system.Int32: ...
    @_property
    def min_clock_frequency(self) -> winrt.system.Int32: ...
    @_property
    def supported_data_bit_lengths(self) -> typing.Optional[winrt.windows.foundation.collections.IVectorView[winrt.system.Int32]]: ...

@typing.final
class SpiConnectionSettings(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> SpiConnectionSettings: ...
    def __new__(cls: typing.Type[SpiConnectionSettings], chip_select_line: winrt.system.Int32) -> SpiConnectionSettings:...
    @_property
    def sharing_mode(self) -> SpiSharingMode: ...
    @sharing_mode.setter
    def sharing_mode(self, value: SpiSharingMode) -> None: ...
    @_property
    def mode(self) -> SpiMode: ...
    @mode.setter
    def mode(self, value: SpiMode) -> None: ...
    @_property
    def data_bit_length(self) -> winrt.system.Int32: ...
    @data_bit_length.setter
    def data_bit_length(self, value: winrt.system.Int32) -> None: ...
    @_property
    def clock_frequency(self) -> winrt.system.Int32: ...
    @clock_frequency.setter
    def clock_frequency(self, value: winrt.system.Int32) -> None: ...
    @_property
    def chip_select_line(self) -> winrt.system.Int32: ...
    @chip_select_line.setter
    def chip_select_line(self, value: winrt.system.Int32) -> None: ...

@typing.final
class SpiController_Static(type):
    def get_controllers_async(cls, provider: typing.Optional[winrt.windows.devices.spi.provider.ISpiProvider], /) -> winrt.windows.foundation.IAsyncOperation[winrt.windows.foundation.collections.IVectorView[SpiController]]: ...
    def get_default_async(cls) -> winrt.windows.foundation.IAsyncOperation[SpiController]: ...

@typing.final
class SpiController(winrt.system.Object, metaclass=SpiController_Static):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> SpiController: ...
    def get_device(self, settings: typing.Optional[SpiConnectionSettings], /) -> typing.Optional[SpiDevice]: ...

@typing.final
class SpiDevice_Static(type):
    def from_id_async(cls, bus_id: str, settings: typing.Optional[SpiConnectionSettings], /) -> winrt.windows.foundation.IAsyncOperation[SpiDevice]: ...
    def get_bus_info(cls, bus_id: str, /) -> typing.Optional[SpiBusInfo]: ...
    @typing.overload
    def get_device_selector(cls) -> str: ...
    @typing.overload
    def get_device_selector(cls, friendly_name: str, /) -> str: ...

@typing.final
class SpiDevice(winrt.system.Object, metaclass=SpiDevice_Static):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> SpiDevice: ...
    def close(self) -> None: ...
    def read(self, buffer: winrt.system.Array[winrt.system.UInt8], /) -> None: ...
    def transfer_full_duplex(self, write_buffer: winrt.system.Array[winrt.system.UInt8], read_buffer: winrt.system.Array[winrt.system.UInt8], /) -> None: ...
    def transfer_sequential(self, write_buffer: winrt.system.Array[winrt.system.UInt8], read_buffer: winrt.system.Array[winrt.system.UInt8], /) -> None: ...
    def write(self, buffer: winrt.system.Array[winrt.system.UInt8], /) -> None: ...
    @_property
    def connection_settings(self) -> typing.Optional[SpiConnectionSettings]: ...
    @_property
    def device_id(self) -> str: ...

@typing.final
class ISpiDeviceStatics(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> ISpiDeviceStatics: ...
    def from_id_async(self, bus_id: str, settings: typing.Optional[SpiConnectionSettings], /) -> winrt.windows.foundation.IAsyncOperation[SpiDevice]: ...
    def get_bus_info(self, bus_id: str, /) -> typing.Optional[SpiBusInfo]: ...
    @typing.overload
    def get_device_selector(self) -> str: ...
    @typing.overload
    def get_device_selector(self, friendly_name: str, /) -> str: ...

