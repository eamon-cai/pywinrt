# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import datetime
import sys
import types
import typing
import uuid as _uuid
from builtins import property as _property

import winrt._winrt
import winrt.system
import winrt.windows.applicationmodel
import winrt.windows.applicationmodel.activation
import winrt.windows.foundation
import winrt.windows.foundation.collections
import winrt.windows.system
import winrt.windows.ui.core

from winrt.windows.applicationmodel.core import AppRestartFailureReason

Self = typing.TypeVar('Self')

@typing.final
class AppListEntry(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> AppListEntry: ...
    def launch_async(self) -> winrt.windows.foundation.IAsyncOperation[bool]: ...
    def launch_for_user_async(self, user: typing.Optional[winrt.windows.system.User], /) -> winrt.windows.foundation.IAsyncOperation[bool]: ...
    @_property
    def display_info(self) -> typing.Optional[winrt.windows.applicationmodel.AppDisplayInfo]: ...
    @_property
    def app_user_model_id(self) -> str: ...
    @_property
    def app_info(self) -> typing.Optional[winrt.windows.applicationmodel.AppInfo]: ...

@typing.final
class CoreApplication_Static(type):
    @typing.overload
    def create_new_view(cls) -> typing.Optional[CoreApplicationView]: ...
    @typing.overload
    def create_new_view(cls, view_source: typing.Optional[IFrameworkViewSource], /) -> typing.Optional[CoreApplicationView]: ...
    @typing.overload
    def create_new_view(cls, runtime_type: str, entry_point: str, /) -> typing.Optional[CoreApplicationView]: ...
    def decrement_application_use_count(cls) -> None: ...
    def enable_prelaunch(cls, value: bool, /) -> None: ...
    def exit(cls) -> None: ...
    def get_current_view(cls) -> typing.Optional[CoreApplicationView]: ...
    def increment_application_use_count(cls) -> None: ...
    def request_restart_async(cls, launch_arguments: str, /) -> winrt.windows.foundation.IAsyncOperation[AppRestartFailureReason]: ...
    def request_restart_for_user_async(cls, user: typing.Optional[winrt.windows.system.User], launch_arguments: str, /) -> winrt.windows.foundation.IAsyncOperation[AppRestartFailureReason]: ...
    def run(cls, view_source: typing.Optional[IFrameworkViewSource], /) -> None: ...
    def run_with_activation_factories(cls, activation_factory_callback: typing.Optional[winrt.windows.foundation.IGetActivationFactory], /) -> None: ...
    def add_unhandled_error_detected(cls, handler: winrt.windows.foundation.EventHandler[UnhandledErrorDetectedEventArgs], /) -> winrt.windows.foundation.EventRegistrationToken: ...
    def remove_unhandled_error_detected(cls, token: winrt.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_exiting(cls, handler: winrt.windows.foundation.EventHandler[winrt.system.Object], /) -> winrt.windows.foundation.EventRegistrationToken: ...
    def remove_exiting(cls, token: winrt.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_background_activated(cls, handler: winrt.windows.foundation.EventHandler[winrt.windows.applicationmodel.activation.BackgroundActivatedEventArgs], /) -> winrt.windows.foundation.EventRegistrationToken: ...
    def remove_background_activated(cls, token: winrt.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_entered_background(cls, handler: winrt.windows.foundation.EventHandler[winrt.windows.applicationmodel.EnteredBackgroundEventArgs], /) -> winrt.windows.foundation.EventRegistrationToken: ...
    def remove_entered_background(cls, token: winrt.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_leaving_background(cls, handler: winrt.windows.foundation.EventHandler[winrt.windows.applicationmodel.LeavingBackgroundEventArgs], /) -> winrt.windows.foundation.EventRegistrationToken: ...
    def remove_leaving_background(cls, token: winrt.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_resuming(cls, handler: winrt.windows.foundation.EventHandler[winrt.system.Object], /) -> winrt.windows.foundation.EventRegistrationToken: ...
    def remove_resuming(cls, token: winrt.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_suspending(cls, handler: winrt.windows.foundation.EventHandler[winrt.windows.applicationmodel.SuspendingEventArgs], /) -> winrt.windows.foundation.EventRegistrationToken: ...
    def remove_suspending(cls, token: winrt.windows.foundation.EventRegistrationToken, /) -> None: ...
    @_property
    def id(cls) -> str: ...
    @_property
    def properties(cls) -> typing.Optional[winrt.windows.foundation.collections.IPropertySet]: ...
    @_property
    def main_view(cls) -> typing.Optional[CoreApplicationView]: ...
    @_property
    def views(cls) -> typing.Optional[winrt.windows.foundation.collections.IVectorView[CoreApplicationView]]: ...

@typing.final
class CoreApplication(winrt.system.Object, metaclass=CoreApplication_Static):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> CoreApplication: ...

@typing.final
class CoreApplicationView(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> CoreApplicationView: ...
    def add_activated(self, handler: winrt.windows.foundation.TypedEventHandler[CoreApplicationView, winrt.windows.applicationmodel.activation.IActivatedEventArgs], /) -> winrt.windows.foundation.EventRegistrationToken: ...
    def remove_activated(self, token: winrt.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_hosted_view_closing(self, handler: winrt.windows.foundation.TypedEventHandler[CoreApplicationView, HostedViewClosingEventArgs], /) -> winrt.windows.foundation.EventRegistrationToken: ...
    def remove_hosted_view_closing(self, token: winrt.windows.foundation.EventRegistrationToken, /) -> None: ...
    @_property
    def core_window(self) -> typing.Optional[winrt.windows.ui.core.CoreWindow]: ...
    @_property
    def is_hosted(self) -> bool: ...
    @_property
    def is_main(self) -> bool: ...
    @_property
    def dispatcher(self) -> typing.Optional[winrt.windows.ui.core.CoreDispatcher]: ...
    @_property
    def is_component(self) -> bool: ...
    @_property
    def title_bar(self) -> typing.Optional[CoreApplicationViewTitleBar]: ...
    @_property
    def properties(self) -> typing.Optional[winrt.windows.foundation.collections.IPropertySet]: ...
    @_property
    def dispatcher_queue(self) -> typing.Optional[winrt.windows.system.DispatcherQueue]: ...

@typing.final
class CoreApplicationViewTitleBar(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> CoreApplicationViewTitleBar: ...
    def add_is_visible_changed(self, handler: winrt.windows.foundation.TypedEventHandler[CoreApplicationViewTitleBar, winrt.system.Object], /) -> winrt.windows.foundation.EventRegistrationToken: ...
    def remove_is_visible_changed(self, token: winrt.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_layout_metrics_changed(self, handler: winrt.windows.foundation.TypedEventHandler[CoreApplicationViewTitleBar, winrt.system.Object], /) -> winrt.windows.foundation.EventRegistrationToken: ...
    def remove_layout_metrics_changed(self, token: winrt.windows.foundation.EventRegistrationToken, /) -> None: ...
    @_property
    def extend_view_into_title_bar(self) -> bool: ...
    @extend_view_into_title_bar.setter
    def extend_view_into_title_bar(self, value: bool) -> None: ...
    @_property
    def height(self) -> winrt.system.Double: ...
    @_property
    def is_visible(self) -> bool: ...
    @_property
    def system_overlay_left_inset(self) -> winrt.system.Double: ...
    @_property
    def system_overlay_right_inset(self) -> winrt.system.Double: ...

@typing.final
class HostedViewClosingEventArgs(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> HostedViewClosingEventArgs: ...
    def get_deferral(self) -> typing.Optional[winrt.windows.foundation.Deferral]: ...

@typing.final
class UnhandledError(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> UnhandledError: ...
    def propagate(self) -> None: ...
    @_property
    def handled(self) -> bool: ...

@typing.final
class UnhandledErrorDetectedEventArgs(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> UnhandledErrorDetectedEventArgs: ...
    @_property
    def unhandled_error(self) -> typing.Optional[UnhandledError]: ...

@typing.final
class ICoreApplicationUnhandledError(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> ICoreApplicationUnhandledError: ...
    def add_unhandled_error_detected(self, handler: winrt.windows.foundation.EventHandler[UnhandledErrorDetectedEventArgs], /) -> winrt.windows.foundation.EventRegistrationToken: ...
    def remove_unhandled_error_detected(self, token: winrt.windows.foundation.EventRegistrationToken, /) -> None: ...

@typing.final
class IFrameworkView(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> IFrameworkView: ...
    def initialize(self, application_view: typing.Optional[CoreApplicationView], /) -> None: ...
    def load(self, entry_point: str, /) -> None: ...
    def run(self) -> None: ...
    def set_window(self, window: typing.Optional[winrt.windows.ui.core.CoreWindow], /) -> None: ...
    def uninitialize(self) -> None: ...

@typing.final
class IFrameworkViewSource(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> IFrameworkViewSource: ...
    def create_view(self) -> typing.Optional[IFrameworkView]: ...

