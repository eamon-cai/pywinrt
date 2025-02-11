# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import datetime
import sys
import types
import typing
import uuid as _uuid
from builtins import property as _property

import winrt._winrt
import winrt.system

Self = typing.TypeVar('Self')

@typing.final
class Color:
    a: winrt.system.UInt8
    r: winrt.system.UInt8
    g: winrt.system.UInt8
    b: winrt.system.UInt8
    def __init__(self, a: winrt.system.UInt8, r: winrt.system.UInt8, g: winrt.system.UInt8, b: winrt.system.UInt8) -> None: ...

@typing.final
class WindowId:
    value: winrt.system.UInt64
    def __init__(self, value: winrt.system.UInt64) -> None: ...

@typing.final
class ColorHelper_Static(type):
    def from_argb(cls, a: winrt.system.UInt8, r: winrt.system.UInt8, g: winrt.system.UInt8, b: winrt.system.UInt8, /) -> Color: ...
    def to_display_name(cls, color: Color, /) -> str: ...

@typing.final
class ColorHelper(winrt.system.Object, metaclass=ColorHelper_Static):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> ColorHelper: ...

@typing.final
class Colors_Static(type):
    @_property
    def alice_blue(cls) -> Color: ...
    @_property
    def antique_white(cls) -> Color: ...
    @_property
    def aqua(cls) -> Color: ...
    @_property
    def aquamarine(cls) -> Color: ...
    @_property
    def azure(cls) -> Color: ...
    @_property
    def beige(cls) -> Color: ...
    @_property
    def bisque(cls) -> Color: ...
    @_property
    def black(cls) -> Color: ...
    @_property
    def blanched_almond(cls) -> Color: ...
    @_property
    def blue(cls) -> Color: ...
    @_property
    def blue_violet(cls) -> Color: ...
    @_property
    def brown(cls) -> Color: ...
    @_property
    def burly_wood(cls) -> Color: ...
    @_property
    def cadet_blue(cls) -> Color: ...
    @_property
    def chartreuse(cls) -> Color: ...
    @_property
    def chocolate(cls) -> Color: ...
    @_property
    def coral(cls) -> Color: ...
    @_property
    def cornflower_blue(cls) -> Color: ...
    @_property
    def cornsilk(cls) -> Color: ...
    @_property
    def crimson(cls) -> Color: ...
    @_property
    def cyan(cls) -> Color: ...
    @_property
    def dark_blue(cls) -> Color: ...
    @_property
    def dark_cyan(cls) -> Color: ...
    @_property
    def dark_goldenrod(cls) -> Color: ...
    @_property
    def dark_gray(cls) -> Color: ...
    @_property
    def dark_green(cls) -> Color: ...
    @_property
    def dark_khaki(cls) -> Color: ...
    @_property
    def dark_magenta(cls) -> Color: ...
    @_property
    def dark_olive_green(cls) -> Color: ...
    @_property
    def dark_orange(cls) -> Color: ...
    @_property
    def dark_orchid(cls) -> Color: ...
    @_property
    def dark_red(cls) -> Color: ...
    @_property
    def dark_salmon(cls) -> Color: ...
    @_property
    def dark_sea_green(cls) -> Color: ...
    @_property
    def dark_slate_blue(cls) -> Color: ...
    @_property
    def dark_slate_gray(cls) -> Color: ...
    @_property
    def dark_turquoise(cls) -> Color: ...
    @_property
    def dark_violet(cls) -> Color: ...
    @_property
    def deep_pink(cls) -> Color: ...
    @_property
    def deep_sky_blue(cls) -> Color: ...
    @_property
    def dim_gray(cls) -> Color: ...
    @_property
    def dodger_blue(cls) -> Color: ...
    @_property
    def firebrick(cls) -> Color: ...
    @_property
    def floral_white(cls) -> Color: ...
    @_property
    def forest_green(cls) -> Color: ...
    @_property
    def fuchsia(cls) -> Color: ...
    @_property
    def gainsboro(cls) -> Color: ...
    @_property
    def ghost_white(cls) -> Color: ...
    @_property
    def gold(cls) -> Color: ...
    @_property
    def goldenrod(cls) -> Color: ...
    @_property
    def gray(cls) -> Color: ...
    @_property
    def green(cls) -> Color: ...
    @_property
    def green_yellow(cls) -> Color: ...
    @_property
    def honeydew(cls) -> Color: ...
    @_property
    def hot_pink(cls) -> Color: ...
    @_property
    def indian_red(cls) -> Color: ...
    @_property
    def indigo(cls) -> Color: ...
    @_property
    def ivory(cls) -> Color: ...
    @_property
    def khaki(cls) -> Color: ...
    @_property
    def lavender(cls) -> Color: ...
    @_property
    def lavender_blush(cls) -> Color: ...
    @_property
    def lawn_green(cls) -> Color: ...
    @_property
    def lemon_chiffon(cls) -> Color: ...
    @_property
    def light_blue(cls) -> Color: ...
    @_property
    def light_coral(cls) -> Color: ...
    @_property
    def light_cyan(cls) -> Color: ...
    @_property
    def light_goldenrod_yellow(cls) -> Color: ...
    @_property
    def light_gray(cls) -> Color: ...
    @_property
    def light_green(cls) -> Color: ...
    @_property
    def light_pink(cls) -> Color: ...
    @_property
    def light_salmon(cls) -> Color: ...
    @_property
    def light_sea_green(cls) -> Color: ...
    @_property
    def light_sky_blue(cls) -> Color: ...
    @_property
    def light_slate_gray(cls) -> Color: ...
    @_property
    def light_steel_blue(cls) -> Color: ...
    @_property
    def light_yellow(cls) -> Color: ...
    @_property
    def lime(cls) -> Color: ...
    @_property
    def lime_green(cls) -> Color: ...
    @_property
    def linen(cls) -> Color: ...
    @_property
    def magenta(cls) -> Color: ...
    @_property
    def maroon(cls) -> Color: ...
    @_property
    def medium_aquamarine(cls) -> Color: ...
    @_property
    def medium_blue(cls) -> Color: ...
    @_property
    def medium_orchid(cls) -> Color: ...
    @_property
    def medium_purple(cls) -> Color: ...
    @_property
    def medium_sea_green(cls) -> Color: ...
    @_property
    def medium_slate_blue(cls) -> Color: ...
    @_property
    def medium_spring_green(cls) -> Color: ...
    @_property
    def medium_turquoise(cls) -> Color: ...
    @_property
    def medium_violet_red(cls) -> Color: ...
    @_property
    def midnight_blue(cls) -> Color: ...
    @_property
    def mint_cream(cls) -> Color: ...
    @_property
    def misty_rose(cls) -> Color: ...
    @_property
    def moccasin(cls) -> Color: ...
    @_property
    def navajo_white(cls) -> Color: ...
    @_property
    def navy(cls) -> Color: ...
    @_property
    def old_lace(cls) -> Color: ...
    @_property
    def olive(cls) -> Color: ...
    @_property
    def olive_drab(cls) -> Color: ...
    @_property
    def orange(cls) -> Color: ...
    @_property
    def orange_red(cls) -> Color: ...
    @_property
    def orchid(cls) -> Color: ...
    @_property
    def pale_goldenrod(cls) -> Color: ...
    @_property
    def pale_green(cls) -> Color: ...
    @_property
    def pale_turquoise(cls) -> Color: ...
    @_property
    def pale_violet_red(cls) -> Color: ...
    @_property
    def papaya_whip(cls) -> Color: ...
    @_property
    def peach_puff(cls) -> Color: ...
    @_property
    def peru(cls) -> Color: ...
    @_property
    def pink(cls) -> Color: ...
    @_property
    def plum(cls) -> Color: ...
    @_property
    def powder_blue(cls) -> Color: ...
    @_property
    def purple(cls) -> Color: ...
    @_property
    def red(cls) -> Color: ...
    @_property
    def rosy_brown(cls) -> Color: ...
    @_property
    def royal_blue(cls) -> Color: ...
    @_property
    def saddle_brown(cls) -> Color: ...
    @_property
    def salmon(cls) -> Color: ...
    @_property
    def sandy_brown(cls) -> Color: ...
    @_property
    def sea_green(cls) -> Color: ...
    @_property
    def sea_shell(cls) -> Color: ...
    @_property
    def sienna(cls) -> Color: ...
    @_property
    def silver(cls) -> Color: ...
    @_property
    def sky_blue(cls) -> Color: ...
    @_property
    def slate_blue(cls) -> Color: ...
    @_property
    def slate_gray(cls) -> Color: ...
    @_property
    def snow(cls) -> Color: ...
    @_property
    def spring_green(cls) -> Color: ...
    @_property
    def steel_blue(cls) -> Color: ...
    @_property
    def tan(cls) -> Color: ...
    @_property
    def teal(cls) -> Color: ...
    @_property
    def thistle(cls) -> Color: ...
    @_property
    def tomato(cls) -> Color: ...
    @_property
    def transparent(cls) -> Color: ...
    @_property
    def turquoise(cls) -> Color: ...
    @_property
    def violet(cls) -> Color: ...
    @_property
    def wheat(cls) -> Color: ...
    @_property
    def white(cls) -> Color: ...
    @_property
    def white_smoke(cls) -> Color: ...
    @_property
    def yellow(cls) -> Color: ...
    @_property
    def yellow_green(cls) -> Color: ...

@typing.final
class Colors(winrt.system.Object, metaclass=Colors_Static):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> Colors: ...

@typing.final
class UIContentRoot(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> UIContentRoot: ...
    @_property
    def u_i_context(self) -> typing.Optional[UIContext]: ...

@typing.final
class UIContext(winrt.system.Object):
    @staticmethod
    def _from(obj: winrt.system.Object, /) -> UIContext: ...

