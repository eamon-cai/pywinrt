# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import datetime
import sys
import types
import typing
import uuid as _uuid
from builtins import property as _property

import winrt._winrt
import winrt.system

Self = typing.TypeVar('Self')

@typing.final
class DisplayRequest(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> DisplayRequest: ...
    def __new__(cls: typing.Type[DisplayRequest]) -> DisplayRequest:...
    def request_active(self) -> None: ...
    def request_release(self) -> None: ...

