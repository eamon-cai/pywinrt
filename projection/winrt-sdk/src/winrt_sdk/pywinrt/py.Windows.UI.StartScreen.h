// WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

#pragma once

#include "pybase.h"
static_assert(winrt::check_version(PYWINRT_VERSION, "0.0.0"), "Mismatched Py/WinRT headers.");

#if __has_include("py.Windows.ApplicationModel.Core.h")
#include "py.Windows.ApplicationModel.Core.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Perception.Spatial.h")
#include "py.Windows.Perception.Spatial.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#if __has_include("py.Windows.UI.h")
#include "py.Windows.UI.h"
#endif

#if __has_include("py.Windows.UI.Popups.h")
#include "py.Windows.UI.Popups.h"
#endif

#include <winrt/Windows.ApplicationModel.Core.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Perception.Spatial.h>
#include <winrt/Windows.System.h>
#include <winrt/Windows.UI.h>
#include <winrt/Windows.UI.Popups.h>

#include <winrt/Windows.UI.StartScreen.h>

namespace py::proj::Windows::UI::StartScreen
{}

namespace py::impl::Windows::UI::StartScreen
{}

namespace py::wrapper::Windows::UI::StartScreen
{
    using JumpList = py::winrt_wrapper<winrt::Windows::UI::StartScreen::JumpList>;
    using JumpListItem = py::winrt_wrapper<winrt::Windows::UI::StartScreen::JumpListItem>;
    using SecondaryTile = py::winrt_wrapper<winrt::Windows::UI::StartScreen::SecondaryTile>;
    using SecondaryTileVisualElements = py::winrt_wrapper<winrt::Windows::UI::StartScreen::SecondaryTileVisualElements>;
    using StartScreenManager = py::winrt_wrapper<winrt::Windows::UI::StartScreen::StartScreenManager>;
    using TileMixedRealityModel = py::winrt_wrapper<winrt::Windows::UI::StartScreen::TileMixedRealityModel>;
    using VisualElementsRequest = py::winrt_wrapper<winrt::Windows::UI::StartScreen::VisualElementsRequest>;
    using VisualElementsRequestDeferral = py::winrt_wrapper<winrt::Windows::UI::StartScreen::VisualElementsRequestDeferral>;
    using VisualElementsRequestedEventArgs = py::winrt_wrapper<winrt::Windows::UI::StartScreen::VisualElementsRequestedEventArgs>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::UI::StartScreen::ForegroundText> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::UI::StartScreen::JumpListItemKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::UI::StartScreen::JumpListSystemGroupKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::UI::StartScreen::TileMixedRealityModelActivationBehavior> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::UI::StartScreen::TileOptions> = "I";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::UI::StartScreen::TileSize> = "i";


    template<>
    struct py_type<winrt::Windows::UI::StartScreen::ForegroundText>
    {
        static constexpr const char* module_name = "winrt.windows.ui.startscreen";
        static constexpr const char* type_name = "ForegroundText";
    };

    template<>
    struct py_type<winrt::Windows::UI::StartScreen::JumpListItemKind>
    {
        static constexpr const char* module_name = "winrt.windows.ui.startscreen";
        static constexpr const char* type_name = "JumpListItemKind";
    };

    template<>
    struct py_type<winrt::Windows::UI::StartScreen::JumpListSystemGroupKind>
    {
        static constexpr const char* module_name = "winrt.windows.ui.startscreen";
        static constexpr const char* type_name = "JumpListSystemGroupKind";
    };

    template<>
    struct py_type<winrt::Windows::UI::StartScreen::TileMixedRealityModelActivationBehavior>
    {
        static constexpr const char* module_name = "winrt.windows.ui.startscreen";
        static constexpr const char* type_name = "TileMixedRealityModelActivationBehavior";
    };

    template<>
    struct py_type<winrt::Windows::UI::StartScreen::TileOptions>
    {
        static constexpr const char* module_name = "winrt.windows.ui.startscreen";
        static constexpr const char* type_name = "TileOptions";
    };

    template<>
    struct py_type<winrt::Windows::UI::StartScreen::TileSize>
    {
        static constexpr const char* module_name = "winrt.windows.ui.startscreen";
        static constexpr const char* type_name = "TileSize";
    };

    template<>
    struct py_type<winrt::Windows::UI::StartScreen::JumpList>
    {
        static constexpr const char* module_name = "winrt.windows.ui.startscreen";
        static constexpr const char* type_name = "JumpList";
    };

    template<>
    struct py_type<winrt::Windows::UI::StartScreen::JumpListItem>
    {
        static constexpr const char* module_name = "winrt.windows.ui.startscreen";
        static constexpr const char* type_name = "JumpListItem";
    };

    template<>
    struct py_type<winrt::Windows::UI::StartScreen::SecondaryTile>
    {
        static constexpr const char* module_name = "winrt.windows.ui.startscreen";
        static constexpr const char* type_name = "SecondaryTile";
    };

    template<>
    struct py_type<winrt::Windows::UI::StartScreen::SecondaryTileVisualElements>
    {
        static constexpr const char* module_name = "winrt.windows.ui.startscreen";
        static constexpr const char* type_name = "SecondaryTileVisualElements";
    };

    template<>
    struct py_type<winrt::Windows::UI::StartScreen::StartScreenManager>
    {
        static constexpr const char* module_name = "winrt.windows.ui.startscreen";
        static constexpr const char* type_name = "StartScreenManager";
    };

    template<>
    struct py_type<winrt::Windows::UI::StartScreen::TileMixedRealityModel>
    {
        static constexpr const char* module_name = "winrt.windows.ui.startscreen";
        static constexpr const char* type_name = "TileMixedRealityModel";
    };

    template<>
    struct py_type<winrt::Windows::UI::StartScreen::VisualElementsRequest>
    {
        static constexpr const char* module_name = "winrt.windows.ui.startscreen";
        static constexpr const char* type_name = "VisualElementsRequest";
    };

    template<>
    struct py_type<winrt::Windows::UI::StartScreen::VisualElementsRequestDeferral>
    {
        static constexpr const char* module_name = "winrt.windows.ui.startscreen";
        static constexpr const char* type_name = "VisualElementsRequestDeferral";
    };

    template<>
    struct py_type<winrt::Windows::UI::StartScreen::VisualElementsRequestedEventArgs>
    {
        static constexpr const char* module_name = "winrt.windows.ui.startscreen";
        static constexpr const char* type_name = "VisualElementsRequestedEventArgs";
    };
}
