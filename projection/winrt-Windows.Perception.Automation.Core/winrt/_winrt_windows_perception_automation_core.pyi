# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import datetime
import sys
import types
import typing
import uuid as _uuid
from builtins import property as _property

import winrt._winrt
import winrt.system
import winrt.windows.foundation

Self = typing.TypeVar('Self')

@typing.final
class CorePerceptionAutomation_Static(type):
    def set_activation_factory_provider(cls, provider: typing.Optional[winrt.windows.foundation.IGetActivationFactory], /) -> None: ...

@typing.final
class CorePerceptionAutomation(winrt.system.Object, metaclass=CorePerceptionAutomation_Static):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> CorePerceptionAutomation: ...

