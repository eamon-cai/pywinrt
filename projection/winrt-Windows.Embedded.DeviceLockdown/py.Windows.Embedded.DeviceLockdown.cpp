// WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

#include "py.Windows.Embedded.DeviceLockdown.h"


namespace py::cpp::Windows::Embedded::DeviceLockdown
{
    // ----- DeviceLockdownProfile class --------------------

    static PyObject* _new_DeviceLockdownProfile(PyTypeObject* /*unused*/, PyObject* /*unused*/, PyObject* /*unused*/) noexcept
    {
        static_assert(py::py_type<winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfile>::type_name);
        py::set_invalid_activation_error(py::py_type<winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfile>::type_name);
        return nullptr;
    }

    static PyObject* DeviceLockdownProfile_ApplyLockdownProfileAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Embedded.DeviceLockdown.DeviceLockdownProfile", L"ApplyLockdownProfileAsync", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::guid>(args, 0);

                return py::convert(winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfile::ApplyLockdownProfileAsync(param0));
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

    static PyObject* DeviceLockdownProfile_GetCurrentLockdownProfile(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Embedded.DeviceLockdown.DeviceLockdownProfile", L"GetCurrentLockdownProfile", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                return py::convert(winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfile::GetCurrentLockdownProfile());
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

    static PyObject* DeviceLockdownProfile_GetLockdownProfileInformation(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Embedded.DeviceLockdown.DeviceLockdownProfile", L"GetLockdownProfileInformation", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::guid>(args, 0);

                return py::convert(winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfile::GetLockdownProfileInformation(param0));
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

    static PyObject* DeviceLockdownProfile_GetSupportedLockdownProfiles(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Embedded.DeviceLockdown.DeviceLockdownProfile", L"GetSupportedLockdownProfiles", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                return py::convert(winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfile::GetSupportedLockdownProfiles());
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

    static PyMethodDef _methods_DeviceLockdownProfile[] = {
        { }
    };

    static PyGetSetDef _getset_DeviceLockdownProfile[] = {
        { }
    };

    static PyType_Slot _type_slots_DeviceLockdownProfile[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_DeviceLockdownProfile) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_DeviceLockdownProfile) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_DeviceLockdownProfile) },
        { },
    };

    static PyType_Spec type_spec_DeviceLockdownProfile =
    {
        "winrt._winrt_windows_embedded_devicelockdown.DeviceLockdownProfile",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_DeviceLockdownProfile
    };

    static PyGetSetDef getset_DeviceLockdownProfile_Static[] = {
        { }
    };

    static PyMethodDef methods_DeviceLockdownProfile_Static[] = {
        { "apply_lockdown_profile_async", reinterpret_cast<PyCFunction>(DeviceLockdownProfile_ApplyLockdownProfileAsync), METH_VARARGS, nullptr },
        { "get_current_lockdown_profile", reinterpret_cast<PyCFunction>(DeviceLockdownProfile_GetCurrentLockdownProfile), METH_VARARGS, nullptr },
        { "get_lockdown_profile_information", reinterpret_cast<PyCFunction>(DeviceLockdownProfile_GetLockdownProfileInformation), METH_VARARGS, nullptr },
        { "get_supported_lockdown_profiles", reinterpret_cast<PyCFunction>(DeviceLockdownProfile_GetSupportedLockdownProfiles), METH_VARARGS, nullptr },
        { }
    };

    static PyType_Slot type_slots_DeviceLockdownProfile_Static[] = 
    {
        { Py_tp_base, reinterpret_cast<void*>(&PyType_Type) },
        { Py_tp_getset, reinterpret_cast<void*>(getset_DeviceLockdownProfile_Static) },
        { Py_tp_methods, reinterpret_cast<void*>(methods_DeviceLockdownProfile_Static) },
        { }
    };

    static PyType_Spec type_spec_DeviceLockdownProfile_Static =
    {
        "winrt._winrt_windows_embedded_devicelockdown.DeviceLockdownProfile_Static",
        static_cast<int>(PyType_Type.tp_basicsize),
        static_cast<int>(PyType_Type.tp_itemsize),
        Py_TPFLAGS_DEFAULT,
        type_slots_DeviceLockdownProfile_Static
    };

    // ----- DeviceLockdownProfileInformation class --------------------

    static PyObject* _new_DeviceLockdownProfileInformation(PyTypeObject* /*unused*/, PyObject* /*unused*/, PyObject* /*unused*/) noexcept
    {
        static_assert(py::py_type<winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation>::type_name);
        py::set_invalid_activation_error(py::py_type<winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation>::type_name);
        return nullptr;
    }

    static void _dealloc_DeviceLockdownProfileInformation(py::wrapper::Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation* self) noexcept
    {
        auto tp = Py_TYPE(self);
        std::destroy_at(&self->obj);
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* DeviceLockdownProfileInformation_get_Name(py::wrapper::Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Embedded.DeviceLockdown.DeviceLockdownProfileInformation", L"Name"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Name());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_DeviceLockdownProfileInformation(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_DeviceLockdownProfileInformation(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_DeviceLockdownProfileInformation[] = {
        { "_assign_array_", _assign_array_DeviceLockdownProfileInformation, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_DeviceLockdownProfileInformation), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_DeviceLockdownProfileInformation[] = {
        { "name", reinterpret_cast<getter>(DeviceLockdownProfileInformation_get_Name), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_DeviceLockdownProfileInformation[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_DeviceLockdownProfileInformation) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_DeviceLockdownProfileInformation) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_DeviceLockdownProfileInformation) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_DeviceLockdownProfileInformation) },
        { },
    };

    static PyType_Spec type_spec_DeviceLockdownProfileInformation =
    {
        "winrt._winrt_windows_embedded_devicelockdown.DeviceLockdownProfileInformation",
        sizeof(py::wrapper::Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_DeviceLockdownProfileInformation
    };

    // ----- Windows.Embedded.DeviceLockdown Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Embedded::DeviceLockdown");


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winrt_windows_embedded_devicelockdown",
           module_doc,
           0,
           nullptr,
           nullptr,
           nullptr,
           nullptr,
           nullptr};

} // py::cpp::Windows::Embedded::DeviceLockdown

PyMODINIT_FUNC PyInit__winrt_windows_embedded_devicelockdown(void) noexcept
{
    using namespace py::cpp::Windows::Embedded::DeviceLockdown;

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

    py::pyobj_handle type_DeviceLockdownProfile_Static{PyType_FromSpec(&type_spec_DeviceLockdownProfile_Static)};
    if (!type_DeviceLockdownProfile_Static)
    {
        return nullptr;
    }

    if (py::register_python_type(module.get(), &type_spec_DeviceLockdownProfile, object_bases.get(), reinterpret_cast<PyTypeObject*>(type_DeviceLockdownProfile_Static.get())) == -1)
    {
        return nullptr;
    }

    if (py::register_python_type(module.get(), &type_spec_DeviceLockdownProfileInformation, object_bases.get(), nullptr) == -1)
    {
        return nullptr;
    }


    return module.detach();
}
