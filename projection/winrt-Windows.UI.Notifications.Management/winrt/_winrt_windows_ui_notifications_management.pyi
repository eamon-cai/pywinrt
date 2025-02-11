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
import winrt.windows.foundation.collections
import winrt.windows.ui.notifications

from winrt.windows.ui.notifications.management import UserNotificationListenerAccessStatus

Self = typing.TypeVar('Self')

@typing.final
class UserNotificationListener_Static(type):
    @_property
    def current(cls) -> typing.Optional[UserNotificationListener]: ...

@typing.final
class UserNotificationListener(winrt.system.Object, metaclass=UserNotificationListener_Static):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> UserNotificationListener: ...
    def clear_notifications(self) -> None: ...
    def get_access_status(self) -> UserNotificationListenerAccessStatus: ...
    def get_notification(self, notification_id: winrt.system.UInt32, /) -> typing.Optional[winrt.windows.ui.notifications.UserNotification]: ...
    def get_notifications_async(self, kinds: winrt.windows.ui.notifications.NotificationKinds, /) -> winrt.windows.foundation.IAsyncOperation[winrt.windows.foundation.collections.IVectorView[winrt.windows.ui.notifications.UserNotification]]: ...
    def remove_notification(self, notification_id: winrt.system.UInt32, /) -> None: ...
    def request_access_async(self) -> winrt.windows.foundation.IAsyncOperation[UserNotificationListenerAccessStatus]: ...
    def add_notification_changed(self, handler: winrt.windows.foundation.TypedEventHandler[UserNotificationListener, winrt.windows.ui.notifications.UserNotificationChangedEventArgs], /) -> winrt.windows.foundation.EventRegistrationToken: ...
    def remove_notification_changed(self, token: winrt.windows.foundation.EventRegistrationToken, /) -> None: ...

