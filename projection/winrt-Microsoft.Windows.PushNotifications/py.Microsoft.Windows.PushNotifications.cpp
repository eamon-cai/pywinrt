// WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

#include "py.Microsoft.Windows.PushNotifications.h"


namespace py::cpp::Microsoft::Windows::PushNotifications
{
    // ----- PushNotificationChannel class --------------------

    static PyObject* _new_PushNotificationChannel(PyTypeObject* /*unused*/, PyObject* /*unused*/, PyObject* /*unused*/) noexcept
    {
        static_assert(py::py_type<winrt::Microsoft::Windows::PushNotifications::PushNotificationChannel>::type_name);
        py::set_invalid_activation_error(py::py_type<winrt::Microsoft::Windows::PushNotifications::PushNotificationChannel>::type_name);
        return nullptr;
    }

    static void _dealloc_PushNotificationChannel(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationChannel* self) noexcept
    {
        auto tp = Py_TYPE(self);
        std::destroy_at(&self->obj);
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* PushNotificationChannel_Close(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationChannel* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Microsoft.Windows.PushNotifications.PushNotificationChannel", L"Close", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                self->obj.Close();
                Py_RETURN_NONE;
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static PyObject* PushNotificationChannel_get_ExpirationTime(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationChannel* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Microsoft.Windows.PushNotifications.PushNotificationChannel", L"ExpirationTime"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.ExpirationTime());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* PushNotificationChannel_get_Uri(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationChannel* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Microsoft.Windows.PushNotifications.PushNotificationChannel", L"Uri"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Uri());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_PushNotificationChannel(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Microsoft::Windows::PushNotifications::PushNotificationChannel>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_PushNotificationChannel(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Microsoft::Windows::PushNotifications::PushNotificationChannel>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_PushNotificationChannel[] = {
        { "close", reinterpret_cast<PyCFunction>(PushNotificationChannel_Close), METH_VARARGS, nullptr },
        { "_assign_array_", _assign_array_PushNotificationChannel, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_PushNotificationChannel), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_PushNotificationChannel[] = {
        { "expiration_time", reinterpret_cast<getter>(PushNotificationChannel_get_ExpirationTime), nullptr, nullptr, nullptr },
        { "uri", reinterpret_cast<getter>(PushNotificationChannel_get_Uri), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_PushNotificationChannel[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_PushNotificationChannel) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_PushNotificationChannel) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_PushNotificationChannel) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_PushNotificationChannel) },
        { },
    };

    static PyType_Spec type_spec_PushNotificationChannel =
    {
        "winrt._winrt_microsoft_windows_pushnotifications.PushNotificationChannel",
        sizeof(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationChannel),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_PushNotificationChannel
    };

    // ----- PushNotificationCreateChannelResult class --------------------

    static PyObject* _new_PushNotificationCreateChannelResult(PyTypeObject* /*unused*/, PyObject* /*unused*/, PyObject* /*unused*/) noexcept
    {
        static_assert(py::py_type<winrt::Microsoft::Windows::PushNotifications::PushNotificationCreateChannelResult>::type_name);
        py::set_invalid_activation_error(py::py_type<winrt::Microsoft::Windows::PushNotifications::PushNotificationCreateChannelResult>::type_name);
        return nullptr;
    }

    static void _dealloc_PushNotificationCreateChannelResult(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationCreateChannelResult* self) noexcept
    {
        auto tp = Py_TYPE(self);
        std::destroy_at(&self->obj);
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* PushNotificationCreateChannelResult_get_Channel(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationCreateChannelResult* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Microsoft.Windows.PushNotifications.PushNotificationCreateChannelResult", L"Channel"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Channel());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* PushNotificationCreateChannelResult_get_ExtendedError(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationCreateChannelResult* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Microsoft.Windows.PushNotifications.PushNotificationCreateChannelResult", L"ExtendedError"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.ExtendedError());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* PushNotificationCreateChannelResult_get_Status(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationCreateChannelResult* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Microsoft.Windows.PushNotifications.PushNotificationCreateChannelResult", L"Status"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Status());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_PushNotificationCreateChannelResult(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Microsoft::Windows::PushNotifications::PushNotificationCreateChannelResult>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_PushNotificationCreateChannelResult(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Microsoft::Windows::PushNotifications::PushNotificationCreateChannelResult>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_PushNotificationCreateChannelResult[] = {
        { "_assign_array_", _assign_array_PushNotificationCreateChannelResult, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_PushNotificationCreateChannelResult), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_PushNotificationCreateChannelResult[] = {
        { "channel", reinterpret_cast<getter>(PushNotificationCreateChannelResult_get_Channel), nullptr, nullptr, nullptr },
        { "extended_error", reinterpret_cast<getter>(PushNotificationCreateChannelResult_get_ExtendedError), nullptr, nullptr, nullptr },
        { "status", reinterpret_cast<getter>(PushNotificationCreateChannelResult_get_Status), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_PushNotificationCreateChannelResult[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_PushNotificationCreateChannelResult) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_PushNotificationCreateChannelResult) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_PushNotificationCreateChannelResult) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_PushNotificationCreateChannelResult) },
        { },
    };

    static PyType_Spec type_spec_PushNotificationCreateChannelResult =
    {
        "winrt._winrt_microsoft_windows_pushnotifications.PushNotificationCreateChannelResult",
        sizeof(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationCreateChannelResult),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_PushNotificationCreateChannelResult
    };

    // ----- PushNotificationManager class --------------------

    static PyObject* _new_PushNotificationManager(PyTypeObject* /*unused*/, PyObject* /*unused*/, PyObject* /*unused*/) noexcept
    {
        static_assert(py::py_type<winrt::Microsoft::Windows::PushNotifications::PushNotificationManager>::type_name);
        py::set_invalid_activation_error(py::py_type<winrt::Microsoft::Windows::PushNotifications::PushNotificationManager>::type_name);
        return nullptr;
    }

    static void _dealloc_PushNotificationManager(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationManager* self) noexcept
    {
        auto tp = Py_TYPE(self);
        std::destroy_at(&self->obj);
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* PushNotificationManager_CreateChannelAsync(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationManager* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Microsoft.Windows.PushNotifications.PushNotificationManager", L"CreateChannelAsync", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::guid>(args, 0);

                return py::convert(self->obj.CreateChannelAsync(param0));
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static PyObject* PushNotificationManager_IsSupported(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Microsoft.Windows.PushNotifications.PushNotificationManager", L"IsSupported", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                return py::convert(winrt::Microsoft::Windows::PushNotifications::PushNotificationManager::IsSupported());
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static PyObject* PushNotificationManager_Register(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationManager* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Microsoft.Windows.PushNotifications.PushNotificationManager", L"Register", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                self->obj.Register();
                Py_RETURN_NONE;
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static PyObject* PushNotificationManager_Unregister(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationManager* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Microsoft.Windows.PushNotifications.PushNotificationManager", L"Unregister", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                self->obj.Unregister();
                Py_RETURN_NONE;
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static PyObject* PushNotificationManager_UnregisterAll(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationManager* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Microsoft.Windows.PushNotifications.PushNotificationManager", L"UnregisterAll", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                self->obj.UnregisterAll();
                Py_RETURN_NONE;
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static PyObject* PushNotificationManager_get_Default(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Microsoft.Windows.PushNotifications.PushNotificationManager", L"Default"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(winrt::Microsoft::Windows::PushNotifications::PushNotificationManager::Default());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* PushNotificationManager_add_PushReceived(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationManager* self, PyObject* arg) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(L"Microsoft.Windows.PushNotifications.PushNotificationManager", L"PushReceived"))
        {
            PyErr_SetString(PyExc_AttributeError, "event is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::Windows::PushNotifications::PushNotificationManager, winrt::Microsoft::Windows::PushNotifications::PushNotificationReceivedEventArgs>>(arg);

            return py::convert(self->obj.PushReceived(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* PushNotificationManager_remove_PushReceived(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationManager* self, PyObject* arg) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(L"Microsoft.Windows.PushNotifications.PushNotificationManager", L"PushReceived"))
        {
            PyErr_SetString(PyExc_AttributeError, "event is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.PushReceived(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_PushNotificationManager(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Microsoft::Windows::PushNotifications::PushNotificationManager>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_PushNotificationManager(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Microsoft::Windows::PushNotifications::PushNotificationManager>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_PushNotificationManager[] = {
        { "create_channel_async", reinterpret_cast<PyCFunction>(PushNotificationManager_CreateChannelAsync), METH_VARARGS, nullptr },
        { "register", reinterpret_cast<PyCFunction>(PushNotificationManager_Register), METH_VARARGS, nullptr },
        { "unregister", reinterpret_cast<PyCFunction>(PushNotificationManager_Unregister), METH_VARARGS, nullptr },
        { "unregister_all", reinterpret_cast<PyCFunction>(PushNotificationManager_UnregisterAll), METH_VARARGS, nullptr },
        { "add_push_received", reinterpret_cast<PyCFunction>(PushNotificationManager_add_PushReceived), METH_O, nullptr },
        { "remove_push_received", reinterpret_cast<PyCFunction>(PushNotificationManager_remove_PushReceived), METH_O, nullptr },
        { "_assign_array_", _assign_array_PushNotificationManager, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_PushNotificationManager), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_PushNotificationManager[] = {
        { }
    };

    static PyType_Slot _type_slots_PushNotificationManager[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_PushNotificationManager) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_PushNotificationManager) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_PushNotificationManager) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_PushNotificationManager) },
        { },
    };

    static PyType_Spec type_spec_PushNotificationManager =
    {
        "winrt._winrt_microsoft_windows_pushnotifications.PushNotificationManager",
        sizeof(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationManager),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_PushNotificationManager
    };

    static PyGetSetDef getset_PushNotificationManager_Static[] = {
        { "default", reinterpret_cast<getter>(PushNotificationManager_get_Default), nullptr, nullptr, nullptr },
        { }
    };

    static PyMethodDef methods_PushNotificationManager_Static[] = {
        { "is_supported", reinterpret_cast<PyCFunction>(PushNotificationManager_IsSupported), METH_VARARGS, nullptr },
        { }
    };

    static PyType_Slot type_slots_PushNotificationManager_Static[] = 
    {
        { Py_tp_base, reinterpret_cast<void*>(&PyType_Type) },
        { Py_tp_getset, reinterpret_cast<void*>(getset_PushNotificationManager_Static) },
        { Py_tp_methods, reinterpret_cast<void*>(methods_PushNotificationManager_Static) },
        { }
    };

    static PyType_Spec type_spec_PushNotificationManager_Static =
    {
        "winrt._winrt_microsoft_windows_pushnotifications.PushNotificationManager_Static",
        static_cast<int>(PyType_Type.tp_basicsize),
        static_cast<int>(PyType_Type.tp_itemsize),
        Py_TPFLAGS_DEFAULT,
        type_slots_PushNotificationManager_Static
    };

    // ----- PushNotificationReceivedEventArgs class --------------------

    static PyObject* _new_PushNotificationReceivedEventArgs(PyTypeObject* /*unused*/, PyObject* /*unused*/, PyObject* /*unused*/) noexcept
    {
        static_assert(py::py_type<winrt::Microsoft::Windows::PushNotifications::PushNotificationReceivedEventArgs>::type_name);
        py::set_invalid_activation_error(py::py_type<winrt::Microsoft::Windows::PushNotifications::PushNotificationReceivedEventArgs>::type_name);
        return nullptr;
    }

    static void _dealloc_PushNotificationReceivedEventArgs(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationReceivedEventArgs* self) noexcept
    {
        auto tp = Py_TYPE(self);
        std::destroy_at(&self->obj);
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* PushNotificationReceivedEventArgs_GetDeferral(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationReceivedEventArgs* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Microsoft.Windows.PushNotifications.PushNotificationReceivedEventArgs", L"GetDeferral", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                return py::convert(self->obj.GetDeferral());
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static PyObject* PushNotificationReceivedEventArgs_get_Payload(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationReceivedEventArgs* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Microsoft.Windows.PushNotifications.PushNotificationReceivedEventArgs", L"Payload"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Payload());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* PushNotificationReceivedEventArgs_add_Canceled(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationReceivedEventArgs* self, PyObject* arg) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(L"Microsoft.Windows.PushNotifications.PushNotificationReceivedEventArgs", L"Canceled"))
        {
            PyErr_SetString(PyExc_AttributeError, "event is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            auto param0 = py::convert_to<winrt::Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler>(arg);

            return py::convert(self->obj.Canceled(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* PushNotificationReceivedEventArgs_remove_Canceled(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationReceivedEventArgs* self, PyObject* arg) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(L"Microsoft.Windows.PushNotifications.PushNotificationReceivedEventArgs", L"Canceled"))
        {
            PyErr_SetString(PyExc_AttributeError, "event is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.Canceled(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_PushNotificationReceivedEventArgs(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Microsoft::Windows::PushNotifications::PushNotificationReceivedEventArgs>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_PushNotificationReceivedEventArgs(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Microsoft::Windows::PushNotifications::PushNotificationReceivedEventArgs>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_PushNotificationReceivedEventArgs[] = {
        { "get_deferral", reinterpret_cast<PyCFunction>(PushNotificationReceivedEventArgs_GetDeferral), METH_VARARGS, nullptr },
        { "add_canceled", reinterpret_cast<PyCFunction>(PushNotificationReceivedEventArgs_add_Canceled), METH_O, nullptr },
        { "remove_canceled", reinterpret_cast<PyCFunction>(PushNotificationReceivedEventArgs_remove_Canceled), METH_O, nullptr },
        { "_assign_array_", _assign_array_PushNotificationReceivedEventArgs, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_PushNotificationReceivedEventArgs), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_PushNotificationReceivedEventArgs[] = {
        { "payload", reinterpret_cast<getter>(PushNotificationReceivedEventArgs_get_Payload), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_PushNotificationReceivedEventArgs[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_PushNotificationReceivedEventArgs) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_PushNotificationReceivedEventArgs) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_PushNotificationReceivedEventArgs) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_PushNotificationReceivedEventArgs) },
        { },
    };

    static PyType_Spec type_spec_PushNotificationReceivedEventArgs =
    {
        "winrt._winrt_microsoft_windows_pushnotifications.PushNotificationReceivedEventArgs",
        sizeof(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationReceivedEventArgs),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_PushNotificationReceivedEventArgs
    };

    // ----- PushNotificationCreateChannelStatus struct --------------------

    winrt_struct_wrapper<winrt::Microsoft::Windows::PushNotifications::PushNotificationCreateChannelStatus>* _new_PushNotificationCreateChannelStatus(PyTypeObject* subclass, PyObject* /*unused*/, PyObject* /*unused*/) noexcept
    {
        auto self = reinterpret_cast<winrt_struct_wrapper<winrt::Microsoft::Windows::PushNotifications::PushNotificationCreateChannelStatus>*>(subclass->tp_alloc(subclass, 0));

        if (!self)
        {
            return nullptr;
        }

        std::construct_at(&self->obj);

        return self;
    }

    int _init_PushNotificationCreateChannelStatus(winrt_struct_wrapper<winrt::Microsoft::Windows::PushNotifications::PushNotificationCreateChannelStatus>* self, PyObject* args, PyObject* kwds) noexcept
    {
        auto tuple_size = PyTuple_Size(args);

        if ((tuple_size == 0) && (kwds == nullptr))
        {
            self->obj = {};
            return 0;
        }

        int32_t _status{};
        PyObject* _extendedError{};
        uint32_t _retryCount{};

        static const char* kwlist[] = {"status", "extended_error", "retry_count", nullptr};
        if (!PyArg_ParseTupleAndKeywords(args, kwds, "iOI", const_cast<char**>(kwlist), &_status, &_extendedError, &_retryCount))
        {
            return -1;
        }

        try
        {
            self->obj = {static_cast<winrt::Microsoft::Windows::PushNotifications::PushNotificationChannelStatus>(_status), py::converter<winrt::hresult>::convert_to(_extendedError), _retryCount};
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static void _dealloc_PushNotificationCreateChannelStatus(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationCreateChannelStatus* self) noexcept
    {
        auto tp = Py_TYPE(self);
        std::destroy_at(&self->obj);
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* _assign_array_PushNotificationCreateChannelStatus(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Microsoft::Windows::PushNotifications::PushNotificationCreateChannelStatus>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyMethodDef _methods_PushNotificationCreateChannelStatus[] = {
        { "_assign_array_", _assign_array_PushNotificationCreateChannelStatus, METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyObject* PushNotificationCreateChannelStatus_get_status(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationCreateChannelStatus* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.status);
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int PushNotificationCreateChannelStatus_set_status(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationCreateChannelStatus* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_AttributeError, "can't delete attribute");
            return -1;
        }

        try
        {
            self->obj.status = py::converter<winrt::Microsoft::Windows::PushNotifications::PushNotificationChannelStatus>::convert_to(arg);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* PushNotificationCreateChannelStatus_get_extendedError(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationCreateChannelStatus* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.extendedError);
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int PushNotificationCreateChannelStatus_set_extendedError(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationCreateChannelStatus* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_AttributeError, "can't delete attribute");
            return -1;
        }

        try
        {
            self->obj.extendedError = py::converter<winrt::hresult>::convert_to(arg);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* PushNotificationCreateChannelStatus_get_retryCount(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationCreateChannelStatus* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.retryCount);
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int PushNotificationCreateChannelStatus_set_retryCount(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationCreateChannelStatus* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_AttributeError, "can't delete attribute");
            return -1;
        }

        try
        {
            self->obj.retryCount = py::converter<uint32_t>::convert_to(arg);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyGetSetDef _getset_PushNotificationCreateChannelStatus[] = {
        { "status", reinterpret_cast<getter>(PushNotificationCreateChannelStatus_get_status), reinterpret_cast<setter>(PushNotificationCreateChannelStatus_set_status), nullptr, nullptr },
        { "extended_error", reinterpret_cast<getter>(PushNotificationCreateChannelStatus_get_extendedError), reinterpret_cast<setter>(PushNotificationCreateChannelStatus_set_extendedError), nullptr, nullptr },
        { "retry_count", reinterpret_cast<getter>(PushNotificationCreateChannelStatus_get_retryCount), reinterpret_cast<setter>(PushNotificationCreateChannelStatus_set_retryCount), nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_PushNotificationCreateChannelStatus[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_PushNotificationCreateChannelStatus) },
        { Py_tp_init, reinterpret_cast<void*>(_init_PushNotificationCreateChannelStatus) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_PushNotificationCreateChannelStatus) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_PushNotificationCreateChannelStatus) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_PushNotificationCreateChannelStatus) },
        { },
    };

    static PyType_Spec type_spec_PushNotificationCreateChannelStatus =
    {
        "winrt._winrt_microsoft_windows_pushnotifications.PushNotificationCreateChannelStatus",
        sizeof(py::wrapper::Microsoft::Windows::PushNotifications::PushNotificationCreateChannelStatus),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_PushNotificationCreateChannelStatus
    };

    // ----- Microsoft.Windows.PushNotifications Initialization --------------------
    PyDoc_STRVAR(module_doc, "Microsoft::Windows::PushNotifications");


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winrt_microsoft_windows_pushnotifications",
           module_doc,
           0,
           nullptr,
           nullptr,
           nullptr,
           nullptr,
           nullptr};

} // py::cpp::Microsoft::Windows::PushNotifications

PyMODINIT_FUNC PyInit__winrt_microsoft_windows_pushnotifications(void) noexcept
{
    using namespace py::cpp::Microsoft::Windows::PushNotifications;

    if (py::import_winrt_runtime() == -1)
    {
        return nullptr;
    }

    py::pyobj_handle module{PyModule_Create(&module_def)};

    if (!module)
    {
        return nullptr;
    }

    auto object_type = py::get_object_type();
    if (!object_type)
    {
        return nullptr;
    }

    py::pyobj_handle object_bases{PyTuple_Pack(1, object_type)};

    if (!object_bases)
    {
        return nullptr;
    }

    if (py::register_python_type(module.get(), &type_spec_PushNotificationChannel, object_bases.get(), nullptr) == -1)
    {
        return nullptr;
    }

    if (py::register_python_type(module.get(), &type_spec_PushNotificationCreateChannelResult, object_bases.get(), nullptr) == -1)
    {
        return nullptr;
    }

    py::pyobj_handle type_PushNotificationManager_Static{PyType_FromSpec(&type_spec_PushNotificationManager_Static)};
    if (!type_PushNotificationManager_Static)
    {
        return nullptr;
    }

    if (py::register_python_type(module.get(), &type_spec_PushNotificationManager, object_bases.get(), reinterpret_cast<PyTypeObject*>(type_PushNotificationManager_Static.get())) == -1)
    {
        return nullptr;
    }

    if (py::register_python_type(module.get(), &type_spec_PushNotificationReceivedEventArgs, object_bases.get(), nullptr) == -1)
    {
        return nullptr;
    }

    if (py::register_python_type(module.get(), &type_spec_PushNotificationCreateChannelStatus, nullptr, nullptr) == -1)
    {
        return nullptr;
    }


    return module.detach();
}
