# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import datetime
import sys
import types
import typing
import uuid as _uuid
from builtins import property as _property

import winrt._winrt
import winrt.system
import winrt.windows.applicationmodel.activation
import winrt.windows.foundation
import winrt.windows.foundation.collections

from winrt.windows.gaming.ui import GameChatMessageOrigin, GameChatOverlayPosition

Self = typing.TypeVar('Self')

@typing.final
class GameBar_Static(type):
    def add_is_input_redirected_changed(cls, handler: winrt.windows.foundation.EventHandler[winrt.system.Object], /) -> winrt.windows.foundation.EventRegistrationToken: ...
    def remove_is_input_redirected_changed(cls, token: winrt.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_visibility_changed(cls, handler: winrt.windows.foundation.EventHandler[winrt.system.Object], /) -> winrt.windows.foundation.EventRegistrationToken: ...
    def remove_visibility_changed(cls, token: winrt.windows.foundation.EventRegistrationToken, /) -> None: ...
    @_property
    def is_input_redirected(cls) -> bool: ...
    @_property
    def visible(cls) -> bool: ...

@typing.final
class GameBar(winrt.system.Object, metaclass=GameBar_Static):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> GameBar: ...

@typing.final
class GameChatMessageReceivedEventArgs(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> GameChatMessageReceivedEventArgs: ...
    @_property
    def app_display_name(self) -> str: ...
    @_property
    def app_id(self) -> str: ...
    @_property
    def message(self) -> str: ...
    @_property
    def origin(self) -> GameChatMessageOrigin: ...
    @_property
    def sender_name(self) -> str: ...

@typing.final
class GameChatOverlay_Static(type):
    def get_default(cls) -> typing.Optional[GameChatOverlay]: ...

@typing.final
class GameChatOverlay(winrt.system.Object, metaclass=GameChatOverlay_Static):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> GameChatOverlay: ...
    def add_message(self, sender: str, message: str, origin: GameChatMessageOrigin, /) -> None: ...
    @_property
    def desired_position(self) -> GameChatOverlayPosition: ...
    @desired_position.setter
    def desired_position(self, value: GameChatOverlayPosition) -> None: ...

@typing.final
class GameChatOverlayMessageSource(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> GameChatOverlayMessageSource: ...
    def __new__(cls: typing.Type[GameChatOverlayMessageSource]) -> GameChatOverlayMessageSource:...
    def set_delay_before_closing_after_message_received(self, value: datetime.timedelta, /) -> None: ...
    def add_message_received(self, handler: winrt.windows.foundation.TypedEventHandler[GameChatOverlayMessageSource, GameChatMessageReceivedEventArgs], /) -> winrt.windows.foundation.EventRegistrationToken: ...
    def remove_message_received(self, token: winrt.windows.foundation.EventRegistrationToken, /) -> None: ...

@typing.final
class GameUIProviderActivatedEventArgs(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> GameUIProviderActivatedEventArgs: ...
    def report_completed(self, results: typing.Optional[winrt.windows.foundation.collections.ValueSet], /) -> None: ...
    @_property
    def kind(self) -> winrt.windows.applicationmodel.activation.ActivationKind: ...
    @_property
    def previous_execution_state(self) -> winrt.windows.applicationmodel.activation.ApplicationExecutionState: ...
    @_property
    def splash_screen(self) -> typing.Optional[winrt.windows.applicationmodel.activation.SplashScreen]: ...
    @_property
    def game_u_i_args(self) -> typing.Optional[winrt.windows.foundation.collections.ValueSet]: ...

