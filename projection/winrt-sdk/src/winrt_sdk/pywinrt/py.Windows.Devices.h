// WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

#pragma once

#include "pybase.h"
static_assert(winrt::check_version(PYWINRT_VERSION, "0.0.0"), "Mismatched Py/WinRT headers.");

#if __has_include("py.Windows.Devices.Adc.Provider.h")
#include "py.Windows.Devices.Adc.Provider.h"
#endif

#if __has_include("py.Windows.Devices.Gpio.Provider.h")
#include "py.Windows.Devices.Gpio.Provider.h"
#endif

#if __has_include("py.Windows.Devices.I2c.Provider.h")
#include "py.Windows.Devices.I2c.Provider.h"
#endif

#if __has_include("py.Windows.Devices.Pwm.Provider.h")
#include "py.Windows.Devices.Pwm.Provider.h"
#endif

#if __has_include("py.Windows.Devices.Spi.Provider.h")
#include "py.Windows.Devices.Spi.Provider.h"
#endif

#include <winrt/Windows.Devices.Adc.Provider.h>
#include <winrt/Windows.Devices.Gpio.Provider.h>
#include <winrt/Windows.Devices.I2c.Provider.h>
#include <winrt/Windows.Devices.Pwm.Provider.h>
#include <winrt/Windows.Devices.Spi.Provider.h>

#include <winrt/Windows.Devices.h>

namespace py::proj::Windows::Devices
{}

namespace py::impl::Windows::Devices
{}

namespace py::wrapper::Windows::Devices
{
    using LowLevelDevicesAggregateProvider = py::winrt_wrapper<winrt::Windows::Devices::LowLevelDevicesAggregateProvider>;
    using LowLevelDevicesController = py::winrt_wrapper<winrt::Windows::Devices::LowLevelDevicesController>;
    using ILowLevelDevicesAggregateProvider = py::winrt_wrapper<winrt::Windows::Devices::ILowLevelDevicesAggregateProvider>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Devices::LowLevelDevicesAggregateProvider>
    {
        static constexpr const char* module_name = "winrt.windows.devices";
        static constexpr const char* type_name = "LowLevelDevicesAggregateProvider";
    };

    template<>
    struct py_type<winrt::Windows::Devices::LowLevelDevicesController>
    {
        static constexpr const char* module_name = "winrt.windows.devices";
        static constexpr const char* type_name = "LowLevelDevicesController";
    };

    template<>
    struct py_type<winrt::Windows::Devices::ILowLevelDevicesAggregateProvider>
    {
        static constexpr const char* module_name = "winrt.windows.devices";
        static constexpr const char* type_name = "ILowLevelDevicesAggregateProvider";
    };
}
