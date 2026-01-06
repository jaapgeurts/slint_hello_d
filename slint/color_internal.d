module slint.color_internal;

import core.stdc.stdint : uintptr_t, intptr_t, uint8_t, int32_t, uint32_t, uint64_t;

import slint.enums_internal;

/// Color represents a color in the Slint run-time, represented using 8-bit channels for
/// red, green, blue and the alpha (opacity).
/// It can be conveniently converted using the `to_` and `from_` (a)rgb helper functions:
/// ```
/// # fn do_something_with_red_and_green(_:f32, _:f32) {}
/// # fn do_something_with_red(_:u8) {}
/// # use i_slint_core::graphics::{Color, RgbaColor};
/// # let some_color = Color::from_rgb_u8(0, 0, 0);
/// let col = some_color.to_argb_f32();
/// do_something_with_red_and_green(col.red, col.green);
///
/// let RgbaColor { red, blue, green, .. } = some_color.to_argb_u8();
/// do_something_with_red(red);
///
/// let new_col = Color::from(RgbaColor{ red: 0.5, green: 0.65, blue: 0.32, alpha: 1.});
/// ```
struct ColorInner {
    uint8_t red;
    uint8_t green;
    uint8_t blue;
    uint8_t alpha;

    // bool operator==(const Color& other) const {
    //     return red == other.red &&
    //            green == other.green &&
    //            blue == other.blue &&
    //            alpha == other.alpha;
    // }
    // bool operator!=(const Color& other) const {
    //     return red != other.red ||
    //            green != other.green ||
    //            blue != other.blue ||
    //            alpha != other.alpha;
    // }
}

extern (C) {

    void slint_color_brighter(const ColorInner* col, float factor, ColorInner* out_);

    void slint_color_darker(const ColorInner* col, float factor, ColorInner* out_);

    void slint_color_transparentize(const ColorInner* col, float factor, ColorInner* out_);

    void slint_color_mix(const ColorInner* col1, const ColorInner* col2,
            float factor, ColorInner* out_);

    void slint_color_with_alpha(const ColorInner* col, float alpha, ColorInner* out_);

    void slint_color_to_hsva(const ColorInner* col, float* h, float* s, float* v, float* a);

    ColorInner slint_color_from_hsva(float h, float s, float v, float a);

} // extern "C"
