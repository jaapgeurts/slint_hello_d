// Copyright © SixtyFPS GmbH <info@slint.dev>
// SPDX-License-Identifier: GPL-3.0-only OR LicenseRef-Slint-Royalty-free-2.0 OR LicenseRef-Slint-Software-3.0
module slint.color;

import core.stdc.stdint : uintptr_t, intptr_t, uint8_t, int32_t, uint32_t, uint64_t;

import slint.color_internal;

/// RgbaColor stores the red, green, blue and alpha components of a color
/// with the precision of the template parameter T. For example if T is float,
/// the values are normalized between 0 and 1. If T is uint8_t, they values range
/// is 0 to 255.
struct RgbaColor(T) {
    /// The alpha component.
    T alpha;
    /// The red component.
    T red;
    /// The green component.
    T green;
    /// The blue component.
    T blue;

    /// Creates a new RgbaColor instance from a given color. This template function is
    /// specialized and thus implemented for T == uint8_t and T == float.
    this(const Color color) {
        static if (is(T == uint8_t)) {
            red = color.red();
            green = color.green();
            blue = color.blue();
            alpha = color.alpha();
        }
        static if (is(T == float)) {
            red = cast(float)(color.red()) / 255f;
            green = cast(float)(color.green()) / 255f;
            blue = cast(float)(color.blue()) / 255f;
            alpha = cast(float)(color.alpha()) / 255f;
        }
    }

}

/// HsvaColor stores the hue, saturation, value, and alpha components of a color in the HSV color
/// space.
struct HsvaColor {
    /// The hue component in degrees between 0 and 360.
    float hue;
    /// The saturation component, between 0 and 1.
    float saturation;
    /// The value component, between 0 and 1.
    float value;
    /// The alpha component, between 0 and 1.
    float alpha;
}

/// Color represents a color in the Slint run-time, represented using 8-bit channels for
/// red, green, blue and the alpha (opacity).
class Color {
public:
    /// Default constructs a new color that is entirely transparent.
    this() {
        inner.red = inner.green = inner.blue = inner.alpha = 0;
    }
    /// Constructs a new color from the given RgbaColor<uint8_t> \a col.
    this(const RgbaColor!(uint8_t) col) {
        inner.red = col.red;
        inner.green = col.green;
        inner.blue = col.blue;
        inner.alpha = col.alpha;
    }
    /// Constructs a new color from the given RgbaColor<float> \a col.
    this(const RgbaColor!(float) col) {
        inner.red = cast(uint8_t)(col.red * 255);
        inner.green = cast(uint8_t)(col.green * 255);
        inner.blue = cast(uint8_t)(col.blue * 255);
        inner.alpha = cast(uint8_t)(col.alpha * 255);
    }

    /// Construct a color from an integer encoded as `0xAARRGGBB`
    static Color from_argb_encoded(uint32_t argb_encoded) {
        Color col = new Color();
        col.inner.red = (argb_encoded >> 16) & 0xff;
        col.inner.green = (argb_encoded >> 8) & 0xff;
        col.inner.blue = argb_encoded & 0xff;
        col.inner.alpha = (argb_encoded >> 24) & 0xff;
        return col;
    }

    /// Returns `(alpha, red, green, blue)` encoded as uint32_t.
    uint32_t as_argb_encoded() const {
        return (uint32_t(inner.red) << 16) | (uint32_t(inner.green) << 8) | uint32_t(
                inner.blue) | (uint32_t(inner.alpha) << 24);
    }

    /// Construct a color from the alpha, red, green and blue color channel parameters.
    static Color from_argb_uint8(uint8_t alpha, uint8_t red, uint8_t green, uint8_t blue) {
        Color col = new Color();
        col.inner.alpha = alpha;
        col.inner.red = red;
        col.inner.green = green;
        col.inner.blue = blue;
        return col;
    }

    /// Construct a color from the red, green and blue color channel parameters. The alpha
    /// channel will have the value 255.
    static Color from_rgb_uint8(uint8_t red, uint8_t green, uint8_t blue) {
        return from_argb_uint8(255, red, green, blue);
    }

    /// Construct a color from the alpha, red, green and blue color channel parameters.
    static Color from_argb_float(float alpha, float red, float green, float blue) {
        Color col = new Color();
        col.inner.alpha = cast(uint8_t)(alpha * 255);
        col.inner.red = cast(uint8_t)(red * 255);
        col.inner.green = cast(uint8_t)(green * 255);
        col.inner.blue = cast(uint8_t)(blue * 255);
        return col;
    }

    /// Construct a color from the red, green and blue color channel parameters. The alpha
    /// channel will have the value 255.
    static Color from_rgb_float(float red, float green, float blue) {
        return Color.from_argb_float(1.0, red, green, blue);
    }

    /// Converts this color to an RgbaColor struct for easy destructuring.
    RgbaColor!(uint8_t) to_argb_uint() const {
        return RgbaColor!(uint8_t)(this);
    }

    /// Converts this color to an RgbaColor struct for easy destructuring.
    RgbaColor!(float) to_argb_float() const {
        return RgbaColor!(float)(this);
    }

    /// Construct a color from the HSV color space components.
    /// The hue is expected to be in the range between 0 and 360, and the other parameters between 0
    /// and 1.
    static Color from_hsva(float h, float s, float v, float a) {
        Color ret;
        ret.inner = slint_color_from_hsva(h, s, v, a);
        return ret;
    }

    /// Convert this color to the HSV color space.
    /// @returns a new HsvaColor.
    HsvaColor to_hsva() const {
        HsvaColor hsv;
        slint_color_to_hsva(&inner, &hsv.hue, &hsv.saturation, &hsv.value, &hsv.alpha);
        return hsv;
    }

    /// Returns the red channel of the color as u8 in the range 0..255.
    uint8_t red() const {
        return inner.red;
    }

    /// Returns the green channel of the color as u8 in the range 0..255.
    uint8_t green() const {
        return inner.green;
    }

    /// Returns the blue channel of the color as u8 in the range 0..255.
    uint8_t blue() const {
        return inner.blue;
    }

    /// Returns the alpha channel of the color as u8 in the range 0..255.
    uint8_t alpha() const {
        return inner.alpha;
    }

    /// Returns a new version of this color that has the brightness increased
    /// by the specified factor. This is done by converting the color to the HSV
    /// color space and multiplying the brightness (value) with (1 + factor).
    /// The result is converted back to RGB and the alpha channel is unchanged.
    /// So for example `brighter(0.2)` will increase the brightness by 20%, and
    /// calling `brighter(-0.5)` will return a color that's 50% darker.
    Color brighter(float factor) const {
        Color result;
        slint_color_brighter(&inner, factor, &result.inner);
        return result;
    }

    /// Returns a new version of this color that has the brightness decreased
    /// by the specified factor. This is done by converting the color to the HSV
    /// color space and dividing the brightness (value) by (1 + factor). The
    /// result is converted back to RGB and the alpha channel is unchanged.
    /// So for example `darker(0.3)` will decrease the brightness by 30%.
    Color darker(float factor) const {
        Color result;
        slint_color_darker(&inner, factor, &result.inner);
        return result;
    }

    /// Returns a new version of this color with the opacity decreased by \a factor.
    ///
    /// The transparency is obtained by multiplying the alpha channel by `(1 - factor)`.
    Color transparentize(float factor) const {
        Color result;
        slint_color_transparentize(&inner, factor, &result.inner);
        return result;
    }

    /// Returns a new color that is a mix of \a this color and \a other. The specified \a factor is
    /// clamped to be between `0.0` and `1.0` and then applied to \a this color, while `1.0 -
    /// factor` is applied to \a other.
    Color mix(const Color other, float factor) const {
        Color result;
        slint_color_mix(&inner, &other.inner, factor, &result.inner);
        return result;
    }

    /// Returns a new version of this color with the opacity set to \a alpha.
    Color with_alpha(float alpha) const {
        Color result;
        slint_color_with_alpha(&inner, alpha, &result.inner);
        return result;
    }

    /// Returns true if \a lhs has the same values for the individual color channels as \a rhs;
    /// false otherwise.
    // friend bool operator==(const Color &lhs, const Color &rhs) = default;

    /// Writes the \a color to the specified \a stream and returns a reference to the
    /// stream.
    // friend std.ostream &operator<<(std.ostream &stream, const Color &color)
    // {
    // Cast to uint32_t to avoid the components being interpreted as char.
    //     return stream << "argb(" << uint32_t(color.inner.alpha) << ", " << uint32_t(color.inner.red)
    //                   << ", " << uint32_t(color.inner.green) << ", " << uint32_t(color.inner.blue)
    //                   << ")";
    // }

    ColorInner inner;
    // friend class private_api.LinearGradientBrush;
    // friend class Brush;
}
