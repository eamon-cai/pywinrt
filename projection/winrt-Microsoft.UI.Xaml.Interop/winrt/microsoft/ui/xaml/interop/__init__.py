# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import enum
import typing
import uuid as _uuid

import winrt.system
from winrt import _winrt_microsoft_ui_xaml_interop

__all__ = [
    "NotifyCollectionChangedAction",
    "NotifyCollectionChangedEventArgs",
    "IBindableIterable",
    "IBindableIterator",
    "IBindableObservableVector",
    "IBindableVector",
    "IBindableVectorView",
    "INotifyCollectionChanged",
    "BindableVectorChangedEventHandler",
    "NotifyCollectionChangedEventHandler",
]

class NotifyCollectionChangedAction(enum.IntEnum):
    ADD = 0
    REMOVE = 1
    REPLACE = 2
    MOVE = 3
    RESET = 4

NotifyCollectionChangedEventArgs = _winrt_microsoft_ui_xaml_interop.NotifyCollectionChangedEventArgs
IBindableIterable = _winrt_microsoft_ui_xaml_interop.IBindableIterable
IBindableIterator = _winrt_microsoft_ui_xaml_interop.IBindableIterator
IBindableObservableVector = _winrt_microsoft_ui_xaml_interop.IBindableObservableVector
IBindableVector = _winrt_microsoft_ui_xaml_interop.IBindableVector
IBindableVectorView = _winrt_microsoft_ui_xaml_interop.IBindableVectorView
INotifyCollectionChanged = _winrt_microsoft_ui_xaml_interop.INotifyCollectionChanged
BindableVectorChangedEventHandler = typing.Callable[[typing.Optional[IBindableObservableVector], typing.Optional[winrt.system.Object]], None]
NotifyCollectionChangedEventHandler = typing.Callable[[typing.Optional[winrt.system.Object], typing.Optional[NotifyCollectionChangedEventArgs]], None]
