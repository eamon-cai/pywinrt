// WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

#pragma once

#include "pybase.h"
static_assert(winrt::check_version(PYWINRT_VERSION, "0.0.0"), "Mismatched Py/WinRT headers.");

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Foundation.Numerics.h")
#include "py.Windows.Foundation.Numerics.h"
#endif

#if __has_include("py.Windows.Media.MediaProperties.h")
#include "py.Windows.Media.MediaProperties.h"
#endif

#if __has_include("py.Windows.Perception.Spatial.h")
#include "py.Windows.Perception.Spatial.h"
#endif

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Foundation.Numerics.h>
#include <winrt/Windows.Media.MediaProperties.h>
#include <winrt/Windows.Perception.Spatial.h>

#include <winrt/Windows.Media.Devices.Core.h>

namespace py::proj::Windows::Media::Devices::Core
{}

namespace py::impl::Windows::Media::Devices::Core
{}

namespace py::wrapper::Windows::Media::Devices::Core
{
    using CameraIntrinsics = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::CameraIntrinsics>;
    using DepthCorrelatedCoordinateMapper = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::DepthCorrelatedCoordinateMapper>;
    using FrameControlCapabilities = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::FrameControlCapabilities>;
    using FrameController = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::FrameController>;
    using FrameExposureCapabilities = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::FrameExposureCapabilities>;
    using FrameExposureCompensationCapabilities = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::FrameExposureCompensationCapabilities>;
    using FrameExposureCompensationControl = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::FrameExposureCompensationControl>;
    using FrameExposureControl = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::FrameExposureControl>;
    using FrameFlashCapabilities = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::FrameFlashCapabilities>;
    using FrameFlashControl = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::FrameFlashControl>;
    using FrameFocusCapabilities = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::FrameFocusCapabilities>;
    using FrameFocusControl = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::FrameFocusControl>;
    using FrameIsoSpeedCapabilities = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::FrameIsoSpeedCapabilities>;
    using FrameIsoSpeedControl = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::FrameIsoSpeedControl>;
    using VariablePhotoSequenceController = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::VariablePhotoSequenceController>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Devices::Core::FrameFlashMode> = "i";


    template<>
    struct py_type<winrt::Windows::Media::Devices::Core::FrameFlashMode>
    {
        static constexpr const char* module_name = "winrt.windows.media.devices.core";
        static constexpr const char* type_name = "FrameFlashMode";
    };

    template<>
    struct py_type<winrt::Windows::Media::Devices::Core::CameraIntrinsics>
    {
        static constexpr const char* module_name = "winrt.windows.media.devices.core";
        static constexpr const char* type_name = "CameraIntrinsics";
    };

    template<>
    struct py_type<winrt::Windows::Media::Devices::Core::DepthCorrelatedCoordinateMapper>
    {
        static constexpr const char* module_name = "winrt.windows.media.devices.core";
        static constexpr const char* type_name = "DepthCorrelatedCoordinateMapper";
    };

    template<>
    struct py_type<winrt::Windows::Media::Devices::Core::FrameControlCapabilities>
    {
        static constexpr const char* module_name = "winrt.windows.media.devices.core";
        static constexpr const char* type_name = "FrameControlCapabilities";
    };

    template<>
    struct py_type<winrt::Windows::Media::Devices::Core::FrameController>
    {
        static constexpr const char* module_name = "winrt.windows.media.devices.core";
        static constexpr const char* type_name = "FrameController";
    };

    template<>
    struct py_type<winrt::Windows::Media::Devices::Core::FrameExposureCapabilities>
    {
        static constexpr const char* module_name = "winrt.windows.media.devices.core";
        static constexpr const char* type_name = "FrameExposureCapabilities";
    };

    template<>
    struct py_type<winrt::Windows::Media::Devices::Core::FrameExposureCompensationCapabilities>
    {
        static constexpr const char* module_name = "winrt.windows.media.devices.core";
        static constexpr const char* type_name = "FrameExposureCompensationCapabilities";
    };

    template<>
    struct py_type<winrt::Windows::Media::Devices::Core::FrameExposureCompensationControl>
    {
        static constexpr const char* module_name = "winrt.windows.media.devices.core";
        static constexpr const char* type_name = "FrameExposureCompensationControl";
    };

    template<>
    struct py_type<winrt::Windows::Media::Devices::Core::FrameExposureControl>
    {
        static constexpr const char* module_name = "winrt.windows.media.devices.core";
        static constexpr const char* type_name = "FrameExposureControl";
    };

    template<>
    struct py_type<winrt::Windows::Media::Devices::Core::FrameFlashCapabilities>
    {
        static constexpr const char* module_name = "winrt.windows.media.devices.core";
        static constexpr const char* type_name = "FrameFlashCapabilities";
    };

    template<>
    struct py_type<winrt::Windows::Media::Devices::Core::FrameFlashControl>
    {
        static constexpr const char* module_name = "winrt.windows.media.devices.core";
        static constexpr const char* type_name = "FrameFlashControl";
    };

    template<>
    struct py_type<winrt::Windows::Media::Devices::Core::FrameFocusCapabilities>
    {
        static constexpr const char* module_name = "winrt.windows.media.devices.core";
        static constexpr const char* type_name = "FrameFocusCapabilities";
    };

    template<>
    struct py_type<winrt::Windows::Media::Devices::Core::FrameFocusControl>
    {
        static constexpr const char* module_name = "winrt.windows.media.devices.core";
        static constexpr const char* type_name = "FrameFocusControl";
    };

    template<>
    struct py_type<winrt::Windows::Media::Devices::Core::FrameIsoSpeedCapabilities>
    {
        static constexpr const char* module_name = "winrt.windows.media.devices.core";
        static constexpr const char* type_name = "FrameIsoSpeedCapabilities";
    };

    template<>
    struct py_type<winrt::Windows::Media::Devices::Core::FrameIsoSpeedControl>
    {
        static constexpr const char* module_name = "winrt.windows.media.devices.core";
        static constexpr const char* type_name = "FrameIsoSpeedControl";
    };

    template<>
    struct py_type<winrt::Windows::Media::Devices::Core::VariablePhotoSequenceController>
    {
        static constexpr const char* module_name = "winrt.windows.media.devices.core";
        static constexpr const char* type_name = "VariablePhotoSequenceController";
    };
}
