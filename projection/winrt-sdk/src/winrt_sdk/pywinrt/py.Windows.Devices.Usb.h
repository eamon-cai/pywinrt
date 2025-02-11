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

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Storage.Streams.h>

#include <winrt/Windows.Devices.Usb.h>

namespace py::proj::Windows::Devices::Usb
{}

namespace py::impl::Windows::Devices::Usb
{}

namespace py::wrapper::Windows::Devices::Usb
{
    using UsbBulkInEndpointDescriptor = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbBulkInEndpointDescriptor>;
    using UsbBulkInPipe = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbBulkInPipe>;
    using UsbBulkOutEndpointDescriptor = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor>;
    using UsbBulkOutPipe = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbBulkOutPipe>;
    using UsbConfiguration = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbConfiguration>;
    using UsbConfigurationDescriptor = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbConfigurationDescriptor>;
    using UsbControlRequestType = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbControlRequestType>;
    using UsbDescriptor = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbDescriptor>;
    using UsbDevice = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbDevice>;
    using UsbDeviceClass = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbDeviceClass>;
    using UsbDeviceClasses = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbDeviceClasses>;
    using UsbDeviceDescriptor = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbDeviceDescriptor>;
    using UsbEndpointDescriptor = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbEndpointDescriptor>;
    using UsbInterface = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbInterface>;
    using UsbInterfaceDescriptor = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbInterfaceDescriptor>;
    using UsbInterfaceSetting = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbInterfaceSetting>;
    using UsbInterruptInEndpointDescriptor = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor>;
    using UsbInterruptInEventArgs = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbInterruptInEventArgs>;
    using UsbInterruptInPipe = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbInterruptInPipe>;
    using UsbInterruptOutEndpointDescriptor = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor>;
    using UsbInterruptOutPipe = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbInterruptOutPipe>;
    using UsbSetupPacket = py::winrt_wrapper<winrt::Windows::Devices::Usb::UsbSetupPacket>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Usb::UsbControlRecipient> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Usb::UsbControlTransferType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Usb::UsbEndpointType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Usb::UsbReadOptions> = "I";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Usb::UsbTransferDirection> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Usb::UsbWriteOptions> = "I";


    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbControlRecipient>
    {
        static constexpr const char* module_name = "winrt.windows.devices.usb";
        static constexpr const char* type_name = "UsbControlRecipient";
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbControlTransferType>
    {
        static constexpr const char* module_name = "winrt.windows.devices.usb";
        static constexpr const char* type_name = "UsbControlTransferType";
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbEndpointType>
    {
        static constexpr const char* module_name = "winrt.windows.devices.usb";
        static constexpr const char* type_name = "UsbEndpointType";
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbReadOptions>
    {
        static constexpr const char* module_name = "winrt.windows.devices.usb";
        static constexpr const char* type_name = "UsbReadOptions";
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbTransferDirection>
    {
        static constexpr const char* module_name = "winrt.windows.devices.usb";
        static constexpr const char* type_name = "UsbTransferDirection";
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbWriteOptions>
    {
        static constexpr const char* module_name = "winrt.windows.devices.usb";
        static constexpr const char* type_name = "UsbWriteOptions";
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbBulkInEndpointDescriptor>
    {
        static constexpr const char* module_name = "winrt.windows.devices.usb";
        static constexpr const char* type_name = "UsbBulkInEndpointDescriptor";
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbBulkInPipe>
    {
        static constexpr const char* module_name = "winrt.windows.devices.usb";
        static constexpr const char* type_name = "UsbBulkInPipe";
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor>
    {
        static constexpr const char* module_name = "winrt.windows.devices.usb";
        static constexpr const char* type_name = "UsbBulkOutEndpointDescriptor";
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbBulkOutPipe>
    {
        static constexpr const char* module_name = "winrt.windows.devices.usb";
        static constexpr const char* type_name = "UsbBulkOutPipe";
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbConfiguration>
    {
        static constexpr const char* module_name = "winrt.windows.devices.usb";
        static constexpr const char* type_name = "UsbConfiguration";
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbConfigurationDescriptor>
    {
        static constexpr const char* module_name = "winrt.windows.devices.usb";
        static constexpr const char* type_name = "UsbConfigurationDescriptor";
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbControlRequestType>
    {
        static constexpr const char* module_name = "winrt.windows.devices.usb";
        static constexpr const char* type_name = "UsbControlRequestType";
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbDescriptor>
    {
        static constexpr const char* module_name = "winrt.windows.devices.usb";
        static constexpr const char* type_name = "UsbDescriptor";
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbDevice>
    {
        static constexpr const char* module_name = "winrt.windows.devices.usb";
        static constexpr const char* type_name = "UsbDevice";
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbDeviceClass>
    {
        static constexpr const char* module_name = "winrt.windows.devices.usb";
        static constexpr const char* type_name = "UsbDeviceClass";
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbDeviceClasses>
    {
        static constexpr const char* module_name = "winrt.windows.devices.usb";
        static constexpr const char* type_name = "UsbDeviceClasses";
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbDeviceDescriptor>
    {
        static constexpr const char* module_name = "winrt.windows.devices.usb";
        static constexpr const char* type_name = "UsbDeviceDescriptor";
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbEndpointDescriptor>
    {
        static constexpr const char* module_name = "winrt.windows.devices.usb";
        static constexpr const char* type_name = "UsbEndpointDescriptor";
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbInterface>
    {
        static constexpr const char* module_name = "winrt.windows.devices.usb";
        static constexpr const char* type_name = "UsbInterface";
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbInterfaceDescriptor>
    {
        static constexpr const char* module_name = "winrt.windows.devices.usb";
        static constexpr const char* type_name = "UsbInterfaceDescriptor";
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbInterfaceSetting>
    {
        static constexpr const char* module_name = "winrt.windows.devices.usb";
        static constexpr const char* type_name = "UsbInterfaceSetting";
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor>
    {
        static constexpr const char* module_name = "winrt.windows.devices.usb";
        static constexpr const char* type_name = "UsbInterruptInEndpointDescriptor";
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbInterruptInEventArgs>
    {
        static constexpr const char* module_name = "winrt.windows.devices.usb";
        static constexpr const char* type_name = "UsbInterruptInEventArgs";
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbInterruptInPipe>
    {
        static constexpr const char* module_name = "winrt.windows.devices.usb";
        static constexpr const char* type_name = "UsbInterruptInPipe";
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor>
    {
        static constexpr const char* module_name = "winrt.windows.devices.usb";
        static constexpr const char* type_name = "UsbInterruptOutEndpointDescriptor";
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbInterruptOutPipe>
    {
        static constexpr const char* module_name = "winrt.windows.devices.usb";
        static constexpr const char* type_name = "UsbInterruptOutPipe";
    };

    template<>
    struct py_type<winrt::Windows::Devices::Usb::UsbSetupPacket>
    {
        static constexpr const char* module_name = "winrt.windows.devices.usb";
        static constexpr const char* type_name = "UsbSetupPacket";
    };
}
