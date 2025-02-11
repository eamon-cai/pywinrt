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
import winrt.windows.graphics.directx.direct3d11
import winrt.windows.graphics.imaging
import winrt.windows.media.core
import winrt.windows.media.effects
import winrt.windows.media.mediaproperties
import winrt.windows.media.transcoding
import winrt.windows.storage
import winrt.windows.ui

from winrt.windows.media.editing import MediaTrimmingPreference, VideoFramePrecision

Self = typing.TypeVar('Self')

@typing.final
class BackgroundAudioTrack_Static(type):
    def create_from_embedded_audio_track(cls, embedded_audio_track: typing.Optional[EmbeddedAudioTrack], /) -> typing.Optional[BackgroundAudioTrack]: ...
    def create_from_file_async(cls, file: typing.Optional[winrt.windows.storage.IStorageFile], /) -> winrt.windows.foundation.IAsyncOperation[BackgroundAudioTrack]: ...

@typing.final
class BackgroundAudioTrack(winrt.system.Object, metaclass=BackgroundAudioTrack_Static):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> BackgroundAudioTrack: ...
    def clone(self) -> typing.Optional[BackgroundAudioTrack]: ...
    def get_audio_encoding_properties(self) -> typing.Optional[winrt.windows.media.mediaproperties.AudioEncodingProperties]: ...
    @_property
    def volume(self) -> winrt.system.Double: ...
    @volume.setter
    def volume(self, value: winrt.system.Double) -> None: ...
    @_property
    def trim_time_from_start(self) -> datetime.timedelta: ...
    @trim_time_from_start.setter
    def trim_time_from_start(self, value: datetime.timedelta) -> None: ...
    @_property
    def trim_time_from_end(self) -> datetime.timedelta: ...
    @trim_time_from_end.setter
    def trim_time_from_end(self, value: datetime.timedelta) -> None: ...
    @_property
    def delay(self) -> datetime.timedelta: ...
    @delay.setter
    def delay(self, value: datetime.timedelta) -> None: ...
    @_property
    def audio_effect_definitions(self) -> typing.Optional[winrt.windows.foundation.collections.IVector[winrt.windows.media.effects.IAudioEffectDefinition]]: ...
    @_property
    def original_duration(self) -> datetime.timedelta: ...
    @_property
    def trimmed_duration(self) -> datetime.timedelta: ...
    @_property
    def user_data(self) -> typing.Optional[winrt.windows.foundation.collections.IMap[str, str]]: ...

@typing.final
class EmbeddedAudioTrack(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> EmbeddedAudioTrack: ...
    def get_audio_encoding_properties(self) -> typing.Optional[winrt.windows.media.mediaproperties.AudioEncodingProperties]: ...

@typing.final
class MediaClip_Static(type):
    def create_from_color(cls, color: winrt.windows.ui.Color, original_duration: datetime.timedelta, /) -> typing.Optional[MediaClip]: ...
    def create_from_file_async(cls, file: typing.Optional[winrt.windows.storage.IStorageFile], /) -> winrt.windows.foundation.IAsyncOperation[MediaClip]: ...
    def create_from_image_file_async(cls, file: typing.Optional[winrt.windows.storage.IStorageFile], original_duration: datetime.timedelta, /) -> winrt.windows.foundation.IAsyncOperation[MediaClip]: ...
    def create_from_surface(cls, surface: typing.Optional[winrt.windows.graphics.directx.direct3d11.IDirect3DSurface], original_duration: datetime.timedelta, /) -> typing.Optional[MediaClip]: ...

@typing.final
class MediaClip(winrt.system.Object, metaclass=MediaClip_Static):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> MediaClip: ...
    def clone(self) -> typing.Optional[MediaClip]: ...
    def get_video_encoding_properties(self) -> typing.Optional[winrt.windows.media.mediaproperties.VideoEncodingProperties]: ...
    @_property
    def selected_embedded_audio_track_index(self) -> winrt.system.UInt32: ...
    @selected_embedded_audio_track_index.setter
    def selected_embedded_audio_track_index(self, value: winrt.system.UInt32) -> None: ...
    @_property
    def trim_time_from_end(self) -> datetime.timedelta: ...
    @trim_time_from_end.setter
    def trim_time_from_end(self, value: datetime.timedelta) -> None: ...
    @_property
    def volume(self) -> winrt.system.Double: ...
    @volume.setter
    def volume(self, value: winrt.system.Double) -> None: ...
    @_property
    def trim_time_from_start(self) -> datetime.timedelta: ...
    @trim_time_from_start.setter
    def trim_time_from_start(self, value: datetime.timedelta) -> None: ...
    @_property
    def embedded_audio_tracks(self) -> typing.Optional[winrt.windows.foundation.collections.IVectorView[EmbeddedAudioTrack]]: ...
    @_property
    def end_time_in_composition(self) -> datetime.timedelta: ...
    @_property
    def original_duration(self) -> datetime.timedelta: ...
    @_property
    def start_time_in_composition(self) -> datetime.timedelta: ...
    @_property
    def trimmed_duration(self) -> datetime.timedelta: ...
    @_property
    def user_data(self) -> typing.Optional[winrt.windows.foundation.collections.IMap[str, str]]: ...
    @_property
    def video_effect_definitions(self) -> typing.Optional[winrt.windows.foundation.collections.IVector[winrt.windows.media.effects.IVideoEffectDefinition]]: ...
    @_property
    def audio_effect_definitions(self) -> typing.Optional[winrt.windows.foundation.collections.IVector[winrt.windows.media.effects.IAudioEffectDefinition]]: ...

@typing.final
class MediaComposition_Static(type):
    def load_async(cls, file: typing.Optional[winrt.windows.storage.StorageFile], /) -> winrt.windows.foundation.IAsyncOperation[MediaComposition]: ...

@typing.final
class MediaComposition(winrt.system.Object, metaclass=MediaComposition_Static):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> MediaComposition: ...
    def __new__(cls: typing.Type[MediaComposition]) -> MediaComposition:...
    def clone(self) -> typing.Optional[MediaComposition]: ...
    def create_default_encoding_profile(self) -> typing.Optional[winrt.windows.media.mediaproperties.MediaEncodingProfile]: ...
    @typing.overload
    def generate_media_stream_source(self) -> typing.Optional[winrt.windows.media.core.MediaStreamSource]: ...
    @typing.overload
    def generate_media_stream_source(self, encoding_profile: typing.Optional[winrt.windows.media.mediaproperties.MediaEncodingProfile], /) -> typing.Optional[winrt.windows.media.core.MediaStreamSource]: ...
    def generate_preview_media_stream_source(self, scaled_width: winrt.system.Int32, scaled_height: winrt.system.Int32, /) -> typing.Optional[winrt.windows.media.core.MediaStreamSource]: ...
    def get_thumbnail_async(self, time_from_start: datetime.timedelta, scaled_width: winrt.system.Int32, scaled_height: winrt.system.Int32, frame_precision: VideoFramePrecision, /) -> winrt.windows.foundation.IAsyncOperation[winrt.windows.graphics.imaging.ImageStream]: ...
    def get_thumbnails_async(self, times_from_start: typing.Iterable[datetime.timedelta], scaled_width: winrt.system.Int32, scaled_height: winrt.system.Int32, frame_precision: VideoFramePrecision, /) -> winrt.windows.foundation.IAsyncOperation[winrt.windows.foundation.collections.IVectorView[winrt.windows.graphics.imaging.ImageStream]]: ...
    @typing.overload
    def render_to_file_async(self, destination: typing.Optional[winrt.windows.storage.IStorageFile], /) -> winrt.windows.foundation.IAsyncOperationWithProgress[winrt.windows.media.transcoding.TranscodeFailureReason, winrt.system.Double]: ...
    @typing.overload
    def render_to_file_async(self, destination: typing.Optional[winrt.windows.storage.IStorageFile], trimming_preference: MediaTrimmingPreference, /) -> winrt.windows.foundation.IAsyncOperationWithProgress[winrt.windows.media.transcoding.TranscodeFailureReason, winrt.system.Double]: ...
    @typing.overload
    def render_to_file_async(self, destination: typing.Optional[winrt.windows.storage.IStorageFile], trimming_preference: MediaTrimmingPreference, encoding_profile: typing.Optional[winrt.windows.media.mediaproperties.MediaEncodingProfile], /) -> winrt.windows.foundation.IAsyncOperationWithProgress[winrt.windows.media.transcoding.TranscodeFailureReason, winrt.system.Double]: ...
    def save_async(self, file: typing.Optional[winrt.windows.storage.IStorageFile], /) -> winrt.windows.foundation.IAsyncAction: ...
    @_property
    def background_audio_tracks(self) -> typing.Optional[winrt.windows.foundation.collections.IVector[BackgroundAudioTrack]]: ...
    @_property
    def clips(self) -> typing.Optional[winrt.windows.foundation.collections.IVector[MediaClip]]: ...
    @_property
    def duration(self) -> datetime.timedelta: ...
    @_property
    def user_data(self) -> typing.Optional[winrt.windows.foundation.collections.IMap[str, str]]: ...
    @_property
    def overlay_layers(self) -> typing.Optional[winrt.windows.foundation.collections.IVector[MediaOverlayLayer]]: ...

@typing.final
class MediaOverlay(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> MediaOverlay: ...
    @typing.overload
    def __new__(cls: typing.Type[MediaOverlay], clip: typing.Optional[MediaClip]) -> MediaOverlay:...
    @typing.overload
    def __new__(cls: typing.Type[MediaOverlay], clip: typing.Optional[MediaClip], position: winrt.windows.foundation.Rect, opacity: winrt.system.Double) -> MediaOverlay:...
    def clone(self) -> typing.Optional[MediaOverlay]: ...
    @_property
    def position(self) -> winrt.windows.foundation.Rect: ...
    @position.setter
    def position(self, value: winrt.windows.foundation.Rect) -> None: ...
    @_property
    def opacity(self) -> winrt.system.Double: ...
    @opacity.setter
    def opacity(self, value: winrt.system.Double) -> None: ...
    @_property
    def delay(self) -> datetime.timedelta: ...
    @delay.setter
    def delay(self, value: datetime.timedelta) -> None: ...
    @_property
    def audio_enabled(self) -> bool: ...
    @audio_enabled.setter
    def audio_enabled(self, value: bool) -> None: ...
    @_property
    def clip(self) -> typing.Optional[MediaClip]: ...

@typing.final
class MediaOverlayLayer(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> MediaOverlayLayer: ...
    @typing.overload
    def __new__(cls: typing.Type[MediaOverlayLayer], compositor_definition: typing.Optional[winrt.windows.media.effects.IVideoCompositorDefinition]) -> MediaOverlayLayer:...
    @typing.overload
    def __new__(cls: typing.Type[MediaOverlayLayer]) -> MediaOverlayLayer:...
    def clone(self) -> typing.Optional[MediaOverlayLayer]: ...
    @_property
    def custom_compositor_definition(self) -> typing.Optional[winrt.windows.media.effects.IVideoCompositorDefinition]: ...
    @_property
    def overlays(self) -> typing.Optional[winrt.windows.foundation.collections.IVector[MediaOverlay]]: ...

