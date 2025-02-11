# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import datetime
import sys
import types
import typing
import uuid as _uuid
from builtins import property as _property

import winrt._winrt
import winrt.system
import winrt.windows.applicationmodel.contacts
import winrt.windows.applicationmodel.datatransfer
import winrt.windows.foundation.collections
import winrt.windows.storage.streams

Self = typing.TypeVar('Self')

@typing.final
class QuickLink(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> QuickLink: ...
    def __new__(cls: typing.Type[QuickLink]) -> QuickLink:...
    @_property
    def title(self) -> str: ...
    @title.setter
    def title(self, value: str) -> None: ...
    @_property
    def thumbnail(self) -> typing.Optional[winrt.windows.storage.streams.RandomAccessStreamReference]: ...
    @thumbnail.setter
    def thumbnail(self, value: typing.Optional[winrt.windows.storage.streams.RandomAccessStreamReference]) -> None: ...
    @_property
    def id(self) -> str: ...
    @id.setter
    def id(self, value: str) -> None: ...
    @_property
    def supported_data_formats(self) -> typing.Optional[winrt.windows.foundation.collections.IVector[str]]: ...
    @_property
    def supported_file_types(self) -> typing.Optional[winrt.windows.foundation.collections.IVector[str]]: ...

@typing.final
class ShareOperation(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> ShareOperation: ...
    def dismiss_u_i(self) -> None: ...
    def remove_this_quick_link(self) -> None: ...
    @typing.overload
    def report_completed(self) -> None: ...
    @typing.overload
    def report_completed(self, quicklink: typing.Optional[QuickLink], /) -> None: ...
    def report_data_retrieved(self) -> None: ...
    def report_error(self, value: str, /) -> None: ...
    def report_started(self) -> None: ...
    def report_submitted_background_task(self) -> None: ...
    @_property
    def data(self) -> typing.Optional[winrt.windows.applicationmodel.datatransfer.DataPackageView]: ...
    @_property
    def quick_link_id(self) -> str: ...
    @_property
    def contacts(self) -> typing.Optional[winrt.windows.foundation.collections.IVectorView[winrt.windows.applicationmodel.contacts.Contact]]: ...

