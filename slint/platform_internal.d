module slint.platform_internal;

import core.stdc.stdint : uintptr_t, intptr_t, uint8_t, uint16_t, int32_t, uint32_t, uint64_t;

/* Generated with cbindgen:0.29.2 */

import slint.brush_internal;
import slint.internal;
import slint.size;
import slint.point;
import slint.string;
import slint.string_internal;
import slint.color;
import slint.enums_internal;
import slint.platform;
import slint.platform_internal;

// TODO: remove: comes from image_internal
alias Size = Size2D!(float);

/// a Repr(C) variant of slint::platform::LayoutConstraints
extern (C) struct LayoutConstraintsReprC {
    Size min;
    Size max;
    Size preferred;
    bool has_min;
    bool has_max;
}

alias WindowAdapterUserData = void*;

struct RendererPtr {
    const void* _a;
    const void* _b;
}

alias PlatformUserData = void*;

struct PlatformTaskOpaque {
    const void* _0;
    const void* _1;
}

alias SoftwareRendererOpaque = const void*;

alias CppTargetPixelBufferUserData = void*;

struct DrawRectangleArgs {
    float x;
    float y;
    float width;
    float height;
    float top_left_radius;
    float top_right_radius;
    float bottom_right_radius;
    float bottom_left_radius;
    float border_width;
    Brush background;
    Brush border;
    uint8_t alpha;
    /// 0, 90, 180, or 270
    int32_t rotation;
}

struct DrawTextureArgs {
    const uint8_t* image_data;
    // TODO: enable later
    // TexturePixelFormat pixel_format;
    uintptr_t byte_stride;
    uint32_t width;
    uint32_t height;
    Color colorize;
    uint8_t alpha;
    intptr_t dst_x;
    intptr_t dst_y;
    uintptr_t dst_width;
    uintptr_t dst_height;
    /// 0, 90, 180, or 270
    int32_t rotation;
    bool has_tiling;
    int32_t tiling_offset_x;
    int32_t tiling_offset_y;
    float tiling_scale_x;
    float tiling_scale_y;
    uint32_t tiling_gap_x;
    uint32_t tiling_gap_y;
}

struct CppTargetPixelBuffer(T) {
    CppTargetPixelBufferUserData user_data;
    void function(CppTargetPixelBufferUserData, uintptr_t, T** slice_ptr, uintptr_t* slice_len) line_slice;
    uintptr_t function(CppTargetPixelBufferUserData) num_lines;
    bool function(CppTargetPixelBufferUserData, const Brush*, const PhysicalRegion*) fill_background;
    bool function(CppTargetPixelBufferUserData, const DrawRectangleArgs*, const PhysicalRegion*) draw_rectangle;
    bool function(CppTargetPixelBufferUserData, const DrawTextureArgs*, const PhysicalRegion*) draw_texture;
}

alias CppRawHandleOpaque = const void*;

alias SkiaRendererOpaque = const void*;

extern (C) {

    void slint_windowrc_init(WindowAdapterRcOpaque* out_);

    void slint_ensure_backend();

    /// Enters the main event loop.
    void slint_run_event_loop(bool quit_on_last_window_closed);

    /// Will execute the given functor in the main thread
    void slint_post_event(void function(void* user_data) event, void* user_data,
            void function(void*) drop_user_data);

    void slint_quit_event_loop();

    void slint_register_font_from_path(const WindowAdapterRcOpaque* win,
            const SharedString* path, SharedString* error_str);

    void slint_register_font_from_data(const WindowAdapterRcOpaque* win,
            Slice!(uint8_t) data, SharedString* error_str);

    // TODO: enable later
    // void slint_register_bitmap_font(const WindowAdapterRcOpaque *win, const BitmapFont *font_data);

    bool slint_string_to_float(const SharedString* string, float* value);

    uintptr_t slint_string_character_count(const SharedString* string);

    bool slint_string_to_usize(const SharedString* string, uintptr_t* value);

    void slint_debug(const SharedString* string);

    void slint_set_xdg_app_id(const SharedString* _app_id);

    OperatingSystemType slint_detect_operating_system();

    void slint_window_properties_get_title(const WindowAdapter.WindowProperties* wp,
            SharedString* out_);

    // TODO: enable later
    // void slint_window_properties_get_background(const WindowProperties *wp, Brush *out);

    bool slint_window_properties_get_fullscreen(const WindowAdapter.WindowProperties* wp);

    bool slint_window_properties_get_minimized(const WindowAdapter.WindowProperties* wp);

    bool slint_window_properties_get_maximized(const WindowAdapter.WindowProperties* wp);

    LayoutConstraintsReprC slint_window_properties_get_layout_constraints(
            const WindowAdapter.WindowProperties* wp);

    void slint_window_adapter_new(WindowAdapterUserData user_data,
            void function(WindowAdapterUserData) drop, RendererPtr function(
                WindowAdapterUserData) get_renderer_ref,
            void function(WindowAdapterUserData, bool) set_visible,
            void function(WindowAdapterUserData) request_redraw, IntSize function(WindowAdapterUserData) size,
            void function(WindowAdapterUserData, IntSize) set_size,
            void function(WindowAdapterUserData, const WindowAdapter.WindowProperties*) update_window_properties,
            bool function(WindowAdapterUserData, Point2D!(int32_t)*) position,
            void function(WindowAdapterUserData, Point2D!(int32_t)) set_position,
            WindowAdapterRcOpaque* target);

    void slint_platform_register(PlatformUserData user_data,
            void function(PlatformUserData) drop, void function(PlatformUserData,
                WindowAdapterRcOpaque*) window_factory,
            uint64_t function(PlatformUserData) duration_since_start,
            void function(PlatformUserData, const SharedString*,
                Clipboard) set_clipboard_text,
            bool function(PlatformUserData,
                SharedString*, Clipboard) clipboard_text, void function(PlatformUserData) run_event_loop,
            void function(PlatformUserData) quit_event_loop,
            void function(PlatformUserData, PlatformTaskOpaque) invoke_from_event_loop);

    bool slint_windowrc_has_active_animations(const WindowAdapterRcOpaque* handle);

    void slint_platform_update_timers_and_animations();

    /// Returns the duration in millisecond until the next timer or `u64::MAX` if there is no pending timers
    uint64_t slint_platform_duration_until_next_timer_update();

    void slint_platform_task_drop(PlatformTaskOpaque event);

    void slint_platform_task_run(PlatformTaskOpaque event);

    SoftwareRendererOpaque slint_software_renderer_new(uint32_t buffer_age);

    void slint_software_renderer_drop(SoftwareRendererOpaque r);

    // PhysicalRegion slint_software_renderer_render_rgb8(SoftwareRendererOpaque r,
    //                                                    Rgb8Pixel *buffer,
    //                                                    uintptr_t buffer_len,
    //                                                    uintptr_t pixel_stride);
    //
    // PhysicalRegion slint_software_renderer_render_accel_rgb8(SoftwareRendererOpaque r,
    //                                                          CppTargetPixelBuffer!(Rgb8Pixel) *buffer);
    //
    // PhysicalRegion slint_software_renderer_render_accel_rgb565(SoftwareRendererOpaque r,
    //                                                            CppTargetPixelBuffer!(Rgb565Pixel) *buffer);
    //
    // PhysicalRegion slint_software_renderer_render_rgb565(SoftwareRendererOpaque r,
    //                                                      uint16_t *buffer,
    //                                                      uintptr_t buffer_len,
    //                                                      uintptr_t pixel_stride);
    //
    // PhysicalRegion slint_software_renderer_render_by_line_rgb565(SoftwareRendererOpaque r,
    //                                                              void function(void*,
    //                                                                                      uintptr_t,
    //                                                                                      uintptr_t,
    //                                                                                      uintptr_t,
    //                                                                                      void function(const void*,
    //                                                                                              Rgb565Pixel*,
    //                                                                                              uintptr_t),
    //                                                                                      const void*) process_line_fn,
    //                                                              void *user_data);
    //
    // PhysicalRegion slint_software_renderer_render_by_line_rgb8(SoftwareRendererOpaque r,
    //                                                            void function(void*,
    //                                                                                    uintptr_t,
    //                                                                                    uintptr_t,
    //                                                                                    uintptr_t,
    //                                                                                    void function(const void*,
    //                                                                                            Rgb8Pixel*,
    //                                                                                            uintptr_t),
    //                                                                                    const void*) process_line_fn,
    //                                                            void *user_data);

    void slint_software_renderer_set_rendering_rotation(SoftwareRendererOpaque r, int32_t rotation);

    RendererPtr slint_software_renderer_handle(SoftwareRendererOpaque r);

    // void slint_software_renderer_region_to_rects(const PhysicalRegion *region,
    // SharedVector!(IntRect) *out_);

    CppRawHandleOpaque slint_new_raw_window_handle_win32(void* hwnd, void* _hinstance);

    CppRawHandleOpaque slint_new_raw_window_handle_x11_xcb(uint32_t window,
            uint32_t visual_id, void* connection, int screen);

    CppRawHandleOpaque slint_new_raw_window_handle_x11_xlib(ulong window,
            ulong visual_id, void* display, int screen);

    CppRawHandleOpaque slint_new_raw_window_handle_wayland(void* surface, void* display);

    CppRawHandleOpaque slint_new_raw_window_handle_appkit(void* ns_view, void* _ns_window);

    void slint_raw_window_handle_drop(CppRawHandleOpaque handle);

    SkiaRendererOpaque slint_skia_renderer_new(CppRawHandleOpaque handle_opaque, IntSize size);

    void slint_skia_renderer_drop(SkiaRendererOpaque r);

    void slint_skia_renderer_render(SkiaRendererOpaque r);

    RendererPtr slint_skia_renderer_handle(SkiaRendererOpaque r);

    extern void free(void* p);

    extern void* malloc(uintptr_t size);

} // extern "C"
