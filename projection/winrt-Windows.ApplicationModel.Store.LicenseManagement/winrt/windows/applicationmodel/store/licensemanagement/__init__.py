# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import enum

import winrt.system
from winrt import _winrt_windows_applicationmodel_store_licensemanagement

__all__ = [
    "LicenseRefreshOption",
    "LicenseManager",
    "LicenseSatisfactionInfo",
    "LicenseSatisfactionResult",
]

class LicenseRefreshOption(enum.IntEnum):
    RUNNING_LICENSES = 0
    ALL_LICENSES = 1

LicenseManager = _winrt_windows_applicationmodel_store_licensemanagement.LicenseManager
LicenseSatisfactionInfo = _winrt_windows_applicationmodel_store_licensemanagement.LicenseSatisfactionInfo
LicenseSatisfactionResult = _winrt_windows_applicationmodel_store_licensemanagement.LicenseSatisfactionResult
