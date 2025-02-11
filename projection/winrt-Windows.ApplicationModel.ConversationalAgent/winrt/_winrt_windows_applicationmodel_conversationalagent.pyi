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
import winrt.windows.media.audio
import winrt.windows.storage.streams

from winrt.windows.applicationmodel.conversationalagent import ActivationSignalDetectionConfigurationCreationStatus, ActivationSignalDetectionConfigurationRemovalResult, ActivationSignalDetectionConfigurationSetModelDataResult, ActivationSignalDetectionConfigurationStateChangeResult, ActivationSignalDetectionTrainingDataFormat, ActivationSignalDetectorKind, ActivationSignalDetectorPowerState, ConversationalAgentActivationKind, ConversationalAgentActivationResult, ConversationalAgentSessionUpdateResponse, ConversationalAgentState, ConversationalAgentSystemStateChangeType, ConversationalAgentVoiceActivationPrerequisiteKind, DetectionConfigurationAvailabilityChangeKind, DetectionConfigurationTrainingStatus, SignalDetectorResourceKind

Self = typing.TypeVar('Self')

@typing.final
class ActivationSignalDetectionConfiguration(winrt.system.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> ActivationSignalDetectionConfiguration: ...
    def apply_training_data(self, training_data_format: ActivationSignalDetectionTrainingDataFormat, training_data: typing.Optional[winrt.windows.storage.streams.IInputStream], /) -> DetectionConfigurationTrainingStatus: ...
    def apply_training_data_async(self, training_data_format: ActivationSignalDetectionTrainingDataFormat, training_data: typing.Optional[winrt.windows.storage.streams.IInputStream], /) -> winrt.windows.foundation.IAsyncOperation[DetectionConfigurationTrainingStatus]: ...
    def clear_model_data(self) -> None: ...
    def clear_model_data_async(self) -> winrt.windows.foundation.IAsyncAction: ...
    def clear_training_data(self) -> None: ...
    def clear_training_data_async(self) -> winrt.windows.foundation.IAsyncAction: ...
    def close(self) -> None: ...
    def get_model_data(self) -> typing.Optional[winrt.windows.storage.streams.IInputStream]: ...
    def get_model_data_async(self) -> winrt.windows.foundation.IAsyncOperation[winrt.windows.storage.streams.IInputStream]: ...
    def get_model_data_type(self) -> str: ...
    def get_model_data_type_async(self) -> winrt.windows.foundation.IAsyncOperation[str]: ...
    def set_enabled(self, value: bool, /) -> None: ...
    def set_enabled_async(self, value: bool, /) -> winrt.windows.foundation.IAsyncAction: ...
    def set_enabled_with_result(self, value: bool, /) -> ActivationSignalDetectionConfigurationStateChangeResult: ...
    def set_enabled_with_result_async(self, value: bool, /) -> winrt.windows.foundation.IAsyncOperation[ActivationSignalDetectionConfigurationStateChangeResult]: ...
    def set_model_data(self, data_type: str, data: typing.Optional[winrt.windows.storage.streams.IInputStream], /) -> None: ...
    def set_model_data_async(self, data_type: str, data: typing.Optional[winrt.windows.storage.streams.IInputStream], /) -> winrt.windows.foundation.IAsyncAction: ...
    def set_model_data_with_result(self, data_type: str, data: typing.Optional[winrt.windows.storage.streams.IInputStream], /) -> ActivationSignalDetectionConfigurationSetModelDataResult: ...
    def set_model_data_with_result_async(self, data_type: str, data: typing.Optional[winrt.windows.storage.streams.IInputStream], /) -> winrt.windows.foundation.IAsyncOperation[ActivationSignalDetectionConfigurationSetModelDataResult]: ...
    def add_availability_changed(self, handler: winrt.windows.foundation.TypedEventHandler[ActivationSignalDetectionConfiguration, DetectionConfigurationAvailabilityChangedEventArgs], /) -> winrt.windows.foundation.EventRegistrationToken: ...
    def remove_availability_changed(self, token: winrt.windows.foundation.EventRegistrationToken, /) -> None: ...
    @_property
    def availability_info(self) -> typing.Optional[DetectionConfigurationAvailabilityInfo]: ...
    @_property
    def display_name(self) -> str: ...
    @_property
    def is_active(self) -> bool: ...
    @_property
    def model_id(self) -> str: ...
    @_property
    def signal_id(self) -> str: ...
    @_property
    def training_data_format(self) -> ActivationSignalDetectionTrainingDataFormat: ...
    @_property
    def training_steps_completed(self) -> winrt.system.UInt32: ...
    @_property
    def training_steps_remaining(self) -> winrt.system.UInt32: ...
    @_property
    def training_step_completion_max_allowed_time(self) -> winrt.system.UInt32: ...

@typing.final
class ActivationSignalDetectionConfigurationCreationResult(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> ActivationSignalDetectionConfigurationCreationResult: ...
    @_property
    def configuration(self) -> typing.Optional[ActivationSignalDetectionConfiguration]: ...
    @_property
    def status(self) -> ActivationSignalDetectionConfigurationCreationStatus: ...

@typing.final
class ActivationSignalDetector(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> ActivationSignalDetector: ...
    def create_configuration(self, signal_id: str, model_id: str, display_name: str, /) -> None: ...
    def create_configuration_async(self, signal_id: str, model_id: str, display_name: str, /) -> winrt.windows.foundation.IAsyncAction: ...
    def create_configuration_with_result(self, signal_id: str, model_id: str, display_name: str, /) -> typing.Optional[ActivationSignalDetectionConfigurationCreationResult]: ...
    def create_configuration_with_result_async(self, signal_id: str, model_id: str, display_name: str, /) -> winrt.windows.foundation.IAsyncOperation[ActivationSignalDetectionConfigurationCreationResult]: ...
    def get_available_model_ids_for_signal_id(self, signal_id: str, /) -> typing.Optional[winrt.windows.foundation.collections.IVector[str]]: ...
    def get_available_model_ids_for_signal_id_async(self, signal_id: str, /) -> winrt.windows.foundation.IAsyncOperation[winrt.windows.foundation.collections.IVector[str]]: ...
    def get_configuration(self, signal_id: str, model_id: str, /) -> typing.Optional[ActivationSignalDetectionConfiguration]: ...
    def get_configuration_async(self, signal_id: str, model_id: str, /) -> winrt.windows.foundation.IAsyncOperation[ActivationSignalDetectionConfiguration]: ...
    def get_configurations(self) -> typing.Optional[winrt.windows.foundation.collections.IVectorView[ActivationSignalDetectionConfiguration]]: ...
    def get_configurations_async(self) -> winrt.windows.foundation.IAsyncOperation[winrt.windows.foundation.collections.IVectorView[ActivationSignalDetectionConfiguration]]: ...
    def get_supported_model_ids_for_signal_id(self, signal_id: str, /) -> typing.Optional[winrt.windows.foundation.collections.IVectorView[str]]: ...
    def get_supported_model_ids_for_signal_id_async(self, signal_id: str, /) -> winrt.windows.foundation.IAsyncOperation[winrt.windows.foundation.collections.IVectorView[str]]: ...
    def remove_configuration(self, signal_id: str, model_id: str, /) -> None: ...
    def remove_configuration_async(self, signal_id: str, model_id: str, /) -> winrt.windows.foundation.IAsyncAction: ...
    def remove_configuration_with_result(self, signal_id: str, model_id: str, /) -> ActivationSignalDetectionConfigurationRemovalResult: ...
    def remove_configuration_with_result_async(self, signal_id: str, model_id: str, /) -> winrt.windows.foundation.IAsyncOperation[ActivationSignalDetectionConfigurationRemovalResult]: ...
    @_property
    def can_create_configurations(self) -> bool: ...
    @_property
    def kind(self) -> ActivationSignalDetectorKind: ...
    @_property
    def provider_id(self) -> str: ...
    @_property
    def supported_model_data_types(self) -> typing.Optional[winrt.windows.foundation.collections.IVectorView[str]]: ...
    @_property
    def supported_power_states(self) -> typing.Optional[winrt.windows.foundation.collections.IVectorView[ActivationSignalDetectorPowerState]]: ...
    @_property
    def supported_training_data_formats(self) -> typing.Optional[winrt.windows.foundation.collections.IVectorView[ActivationSignalDetectionTrainingDataFormat]]: ...
    @_property
    def detector_id(self) -> str: ...

@typing.final
class ConversationalAgentDetectorManager_Static(type):
    @_property
    def default(cls) -> typing.Optional[ConversationalAgentDetectorManager]: ...

@typing.final
class ConversationalAgentDetectorManager(winrt.system.Object, metaclass=ConversationalAgentDetectorManager_Static):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> ConversationalAgentDetectorManager: ...
    def get_activation_signal_detector_from_id(self, detector_id: str, /) -> typing.Optional[ActivationSignalDetector]: ...
    def get_activation_signal_detector_from_id_async(self, detector_id: str, /) -> winrt.windows.foundation.IAsyncOperation[ActivationSignalDetector]: ...
    def get_activation_signal_detectors(self, kind: ActivationSignalDetectorKind, /) -> typing.Optional[winrt.windows.foundation.collections.IVectorView[ActivationSignalDetector]]: ...
    def get_activation_signal_detectors_async(self, kind: ActivationSignalDetectorKind, /) -> winrt.windows.foundation.IAsyncOperation[winrt.windows.foundation.collections.IVectorView[ActivationSignalDetector]]: ...
    def get_all_activation_signal_detectors(self) -> typing.Optional[winrt.windows.foundation.collections.IVectorView[ActivationSignalDetector]]: ...
    def get_all_activation_signal_detectors_async(self) -> winrt.windows.foundation.IAsyncOperation[winrt.windows.foundation.collections.IVectorView[ActivationSignalDetector]]: ...

@typing.final
class ConversationalAgentSession_Static(type):
    def get_current_session_async(cls) -> winrt.windows.foundation.IAsyncOperation[ConversationalAgentSession]: ...
    def get_current_session_sync(cls) -> typing.Optional[ConversationalAgentSession]: ...

@typing.final
class ConversationalAgentSession(winrt.system.Object, metaclass=ConversationalAgentSession_Static):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> ConversationalAgentSession: ...
    def close(self) -> None: ...
    def create_audio_device_input_node(self, graph: typing.Optional[winrt.windows.media.audio.AudioGraph], /) -> typing.Optional[winrt.windows.media.audio.AudioDeviceInputNode]: ...
    def create_audio_device_input_node_async(self, graph: typing.Optional[winrt.windows.media.audio.AudioGraph], /) -> winrt.windows.foundation.IAsyncOperation[winrt.windows.media.audio.AudioDeviceInputNode]: ...
    def get_audio_capture_device_id(self) -> str: ...
    def get_audio_capture_device_id_async(self) -> winrt.windows.foundation.IAsyncOperation[str]: ...
    def get_audio_client(self) -> typing.Optional[winrt.system.Object]: ...
    def get_audio_client_async(self) -> winrt.windows.foundation.IAsyncOperation[winrt.system.Object]: ...
    def get_audio_render_device_id(self) -> str: ...
    def get_audio_render_device_id_async(self) -> winrt.windows.foundation.IAsyncOperation[str]: ...
    def get_missing_prerequisites(self) -> typing.Optional[winrt.windows.foundation.collections.IVectorView[ConversationalAgentVoiceActivationPrerequisiteKind]]: ...
    def get_missing_prerequisites_async(self) -> winrt.windows.foundation.IAsyncOperation[winrt.windows.foundation.collections.IVectorView[ConversationalAgentVoiceActivationPrerequisiteKind]]: ...
    def get_signal_model_id(self) -> winrt.system.UInt32: ...
    def get_signal_model_id_async(self) -> winrt.windows.foundation.IAsyncOperation[winrt.system.UInt32]: ...
    def get_supported_signal_model_ids(self) -> typing.Optional[winrt.windows.foundation.collections.IVectorView[winrt.system.UInt32]]: ...
    def get_supported_signal_model_ids_async(self) -> winrt.windows.foundation.IAsyncOperation[winrt.windows.foundation.collections.IVectorView[winrt.system.UInt32]]: ...
    def request_activation(self, activation_kind: ConversationalAgentActivationKind, /) -> ConversationalAgentActivationResult: ...
    def request_activation_async(self, activation_kind: ConversationalAgentActivationKind, /) -> winrt.windows.foundation.IAsyncOperation[ConversationalAgentActivationResult]: ...
    def request_agent_state_change(self, state: ConversationalAgentState, /) -> ConversationalAgentSessionUpdateResponse: ...
    def request_agent_state_change_async(self, state: ConversationalAgentState, /) -> winrt.windows.foundation.IAsyncOperation[ConversationalAgentSessionUpdateResponse]: ...
    def request_foreground_activation(self) -> ConversationalAgentSessionUpdateResponse: ...
    def request_foreground_activation_async(self) -> winrt.windows.foundation.IAsyncOperation[ConversationalAgentSessionUpdateResponse]: ...
    def request_interruptible(self, interruptible: bool, /) -> ConversationalAgentSessionUpdateResponse: ...
    def request_interruptible_async(self, interruptible: bool, /) -> winrt.windows.foundation.IAsyncOperation[ConversationalAgentSessionUpdateResponse]: ...
    def set_signal_model_id(self, signal_model_id: winrt.system.UInt32, /) -> bool: ...
    def set_signal_model_id_async(self, signal_model_id: winrt.system.UInt32, /) -> winrt.windows.foundation.IAsyncOperation[bool]: ...
    def set_support_lock_screen_activation(self, lock_screen_activation_supported: bool, /) -> None: ...
    def set_support_lock_screen_activation_async(self, lock_screen_activation_supported: bool, /) -> winrt.windows.foundation.IAsyncAction: ...
    def add_session_interrupted(self, handler: winrt.windows.foundation.TypedEventHandler[ConversationalAgentSession, ConversationalAgentSessionInterruptedEventArgs], /) -> winrt.windows.foundation.EventRegistrationToken: ...
    def remove_session_interrupted(self, token: winrt.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_signal_detected(self, handler: winrt.windows.foundation.TypedEventHandler[ConversationalAgentSession, ConversationalAgentSignalDetectedEventArgs], /) -> winrt.windows.foundation.EventRegistrationToken: ...
    def remove_signal_detected(self, token: winrt.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_system_state_changed(self, handler: winrt.windows.foundation.TypedEventHandler[ConversationalAgentSession, ConversationalAgentSystemStateChangedEventArgs], /) -> winrt.windows.foundation.EventRegistrationToken: ...
    def remove_system_state_changed(self, token: winrt.windows.foundation.EventRegistrationToken, /) -> None: ...
    @_property
    def agent_state(self) -> ConversationalAgentState: ...
    @_property
    def is_indicator_light_available(self) -> bool: ...
    @_property
    def is_interrupted(self) -> bool: ...
    @_property
    def is_interruptible(self) -> bool: ...
    @_property
    def is_screen_available(self) -> bool: ...
    @_property
    def is_user_authenticated(self) -> bool: ...
    @_property
    def is_voice_activation_available(self) -> bool: ...
    @_property
    def signal(self) -> typing.Optional[ConversationalAgentSignal]: ...

@typing.final
class ConversationalAgentSessionInterruptedEventArgs(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> ConversationalAgentSessionInterruptedEventArgs: ...

@typing.final
class ConversationalAgentSignal(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> ConversationalAgentSignal: ...
    @_property
    def signal_start(self) -> datetime.timedelta: ...
    @signal_start.setter
    def signal_start(self, value: datetime.timedelta) -> None: ...
    @_property
    def signal_name(self) -> str: ...
    @signal_name.setter
    def signal_name(self, value: str) -> None: ...
    @_property
    def signal_id(self) -> str: ...
    @signal_id.setter
    def signal_id(self, value: str) -> None: ...
    @_property
    def signal_end(self) -> datetime.timedelta: ...
    @signal_end.setter
    def signal_end(self, value: datetime.timedelta) -> None: ...
    @_property
    def signal_context(self) -> typing.Optional[winrt.system.Object]: ...
    @signal_context.setter
    def signal_context(self, value: typing.Optional[winrt.system.Object]) -> None: ...
    @_property
    def is_signal_verification_required(self) -> bool: ...
    @is_signal_verification_required.setter
    def is_signal_verification_required(self, value: bool) -> None: ...
    @_property
    def detector_id(self) -> str: ...
    @_property
    def detector_kind(self) -> ActivationSignalDetectorKind: ...

@typing.final
class ConversationalAgentSignalDetectedEventArgs(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> ConversationalAgentSignalDetectedEventArgs: ...

@typing.final
class ConversationalAgentSystemStateChangedEventArgs(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> ConversationalAgentSystemStateChangedEventArgs: ...
    @_property
    def system_state_change_type(self) -> ConversationalAgentSystemStateChangeType: ...

@typing.final
class DetectionConfigurationAvailabilityChangedEventArgs(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> DetectionConfigurationAvailabilityChangedEventArgs: ...
    @_property
    def kind(self) -> DetectionConfigurationAvailabilityChangeKind: ...

@typing.final
class DetectionConfigurationAvailabilityInfo(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> DetectionConfigurationAvailabilityInfo: ...
    @_property
    def has_lock_screen_permission(self) -> bool: ...
    @_property
    def has_permission(self) -> bool: ...
    @_property
    def has_system_resource_access(self) -> bool: ...
    @_property
    def is_enabled(self) -> bool: ...
    @_property
    def unavailable_system_resources(self) -> typing.Optional[winrt.windows.foundation.collections.IVectorView[SignalDetectorResourceKind]]: ...

