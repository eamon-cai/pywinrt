# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import datetime
import sys
import types
import typing
import uuid as _uuid
from builtins import property as _property

import winrt._winrt
import winrt.system
import winrt.windows.foundation.numerics
import winrt.windows.perception.spatial

Self = typing.TypeVar('Self')

@typing.final
class SpatialGraphInteropFrameOfReferencePreview(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> SpatialGraphInteropFrameOfReferencePreview: ...
    @_property
    def coordinate_system(self) -> typing.Optional[winrt.windows.perception.spatial.SpatialCoordinateSystem]: ...
    @_property
    def coordinate_system_to_node_transform(self) -> winrt.windows.foundation.numerics.Matrix4x4: ...
    @_property
    def node_id(self) -> _uuid.UUID: ...

@typing.final
class SpatialGraphInteropPreview_Static(type):
    @typing.overload
    def create_coordinate_system_for_node(cls, node_id: _uuid.UUID, /) -> typing.Optional[winrt.windows.perception.spatial.SpatialCoordinateSystem]: ...
    @typing.overload
    def create_coordinate_system_for_node(cls, node_id: _uuid.UUID, relative_position: winrt.windows.foundation.numerics.Vector3, /) -> typing.Optional[winrt.windows.perception.spatial.SpatialCoordinateSystem]: ...
    @typing.overload
    def create_coordinate_system_for_node(cls, node_id: _uuid.UUID, relative_position: winrt.windows.foundation.numerics.Vector3, relative_orientation: winrt.windows.foundation.numerics.Quaternion, /) -> typing.Optional[winrt.windows.perception.spatial.SpatialCoordinateSystem]: ...
    def create_locator_for_node(cls, node_id: _uuid.UUID, /) -> typing.Optional[winrt.windows.perception.spatial.SpatialLocator]: ...
    @typing.overload
    def try_create_frame_of_reference(cls, coordinate_system: typing.Optional[winrt.windows.perception.spatial.SpatialCoordinateSystem], /) -> typing.Optional[SpatialGraphInteropFrameOfReferencePreview]: ...
    @typing.overload
    def try_create_frame_of_reference(cls, coordinate_system: typing.Optional[winrt.windows.perception.spatial.SpatialCoordinateSystem], relative_position: winrt.windows.foundation.numerics.Vector3, /) -> typing.Optional[SpatialGraphInteropFrameOfReferencePreview]: ...
    @typing.overload
    def try_create_frame_of_reference(cls, coordinate_system: typing.Optional[winrt.windows.perception.spatial.SpatialCoordinateSystem], relative_position: winrt.windows.foundation.numerics.Vector3, relative_orientation: winrt.windows.foundation.numerics.Quaternion, /) -> typing.Optional[SpatialGraphInteropFrameOfReferencePreview]: ...

@typing.final
class SpatialGraphInteropPreview(winrt.system.Object, metaclass=SpatialGraphInteropPreview_Static):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> SpatialGraphInteropPreview: ...

