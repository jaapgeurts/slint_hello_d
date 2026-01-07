module slint.window;

import std.typecons;
import std.traits;
import std.stdio;

import core.stdc.stdint : uintptr_t, intptr_t, uint8_t, int32_t, uint32_t, uint64_t;

import slint.internal;
import slint.enums;
import slint.enums_internal;
import slint.point;
import slint.size;
import slint.events_internal;
import slint.string;
import slint.timer;
import slint.platform_internal;

// using ItemTreeRc = vtable::VRc<ItemTreeVTable>;
// using LogicalPosition;

extern (C++) class WindowAdapterRc {
public:
    this(WindowAdapterRcOpaque adopted_inner) {
        assert_main_thread();
        slint_windowrc_clone(&adopted_inner, &inner);
    }

    this() {
        writeln("Create window, WindowAdapterRc.this(), slint_windowrc_init(): ", inner);
        slint_windowrc_init(&inner);
    }

    ~this() {
        slint_windowrc_drop(&inner);
    }
    // WindowAdapterRc(const WindowAdapterRc &other) : WindowAdapterRc(other.inner) { }
    // WindowAdapterRc(WindowAdapterRc &&) = delete;
    // WindowAdapterRc &operator=(WindowAdapterRc &&) = delete;
    // WindowAdapterRc &operator=(const WindowAdapterRc &other)
    // {
    //     assert_main_thread();
    //     if (this != &other) {
    //         slint_windowrc_drop(&inner);
    //         slint_windowrc_clone(&other.inner, &inner);
    //     }
    //     return *this;
    // }

    void show() const {
        writeln("slint_windowrc_show()");
        slint_windowrc_show(&inner);
    }

    void hide() const {
        slint_windowrc_hide(&inner);
    }

    bool is_visible() const {
        return slint_windowrc_is_visible(&inner);
    }

    float scale_factor() const {
        return slint_windowrc_get_scale_factor(&inner);
    }

    void set_scale_factor(float value) const {
        slint_windowrc_set_scale_factor(&inner, value);
    }

    ColorScheme color_scheme() const {
        return slint_windowrc_color_scheme(&inner);
    }

    bool supports_native_menu_bar() const {
        return slint_windowrc_supports_native_menu_bar(&inner);
    }

    bool text_input_focused() const {
        return slint_windowrc_get_text_input_focused(&inner);
    }

    void set_text_input_focused(bool value) const {
        slint_windowrc_set_text_input_focused(&inner, value);
    }

    void unregister_item_tree(Component, ItemArray)(Component* c, ItemArray items) const {
        slint_unregister_item_tree(VRef!ItemTreeVTable(&Component.static_vtable,
                c), items, &inner);
    }

    void set_focus_item(ItemTreeRc component_rc, uint32_t item_index,
            bool set_focus, FocusReason reason) {
        ItemRc item_rc = ItemRc(component_rc, item_index);
        slint_windowrc_set_focus_item(&inner, &item_rc, set_focus, reason);
    }

    void set_component(ref ItemTreeWeak weak) const {
        writeln("before set_component()");
        auto item_tree_rc = weak.lock().get().into_dyn();
        slint_windowrc_set_component(&inner, &item_tree_rc);
        writeln("after  set_component()");
    }

    uint32_t show_popup(Component, Parent, PosGetter)(const Parent* parent_component,
            PosGetter pos, PopupClosePolicy close_policy, ItemRc parent_item) const {
        auto popup = Component.create(parent_component);
        auto p = pos(popup);
        auto popup_dyn = popup.into_dyn();
        auto id = slint_windowrc_show_popup(&inner, &popup_dyn, p,
                close_policy, &parent_item, false);
        popup.user_init();
        return id;
    }

    void close_popup(uint32_t popup_id) const {
        if (popup_id > 0) {
            slint_windowrc_close_popup(&inner, popup_id);
        }
    }

    uint32_t show_popup_menu(Component, SharedGlobals, InitFn)(SharedGlobals* globals,
            LogicalPosition pos, ItemRc context_menu_rc,
            InitFn init, Nullable!(VRc!(MenuVTable)) menu = Nullable!(VRc!(MenuVTable)).init) const {
        if (menu) {
            if (slint_windowrc_show_native_popup_menu(&inner, &menu.value(),
                    pos, &context_menu_rc)) {
                return 0;
            }
        }

        auto popup = Component.create(globals);
        init(&*popup);
        auto popup_dyn = popup.into_dyn();
        auto id = slint_windowrc_show_popup(&inner, &popup_dyn, pos,
                PopupClosePolicy.CloseOnClickOutside, &context_menu_rc, true);
        popup.user_init();
        return id;
    }

    T set_rendering_notifier(F)(F callback)
            if (isCallable!(F, RenderingState, GraphicsAPI)) {
        auto actual_cb = (RenderingState state, GraphicsAPI graphics_api, void* data) {
            (*cast(F*)(data))(state, graphics_api);
        };
        SetRenderingNotifierError err;
        if (slint_windowrc_set_rendering_notifier(&inner, actual_cb, (void* user_data) {
                delete cast(F*)(user_data);
            }, new F(callback), &err)) {
            return{};
        }
        else {
            return err;
        }
    }

    // clang-format off
    void on_close_requested(F)(F callback)
            if (isCallable!F && is(ReturnType!F : CloseRequestResponse)) // clang-format on
            {
        auto actual_cb = (void* data) { return (*cast(F*)(data))(); };
        slint_windowrc_on_close_requested(&inner, actual_cb, (void* user_data) {
            delete cast(F*)(user_data);
        }, new F(callback));
    }

    void request_redraw() const {
        slint_windowrc_request_redraw(&inner);
    }

    PhysicalPosition position() const {
        PhysicalPosition pos;
        slint_windowrc_position(&inner, &pos);
        return pos;
    }

    void set_logical_position(const LogicalPosition pos) {
        slint_windowrc_set_logical_position(&inner, &pos);
    }

    void set_physical_position(const PhysicalPosition pos) {
        slint_windowrc_set_physical_position(&inner, &pos);
    }

    PhysicalSize size() const {
        // TODO: review this. because casting is not preferred
        writeln("WindowAdapterRc.size() called");
        return cast(PhysicalSize) slint_windowrc_size(&inner);
    }

    // void set_logical_size(const LogicalSize size) {
    //     slint_windowrc_set_logical_size(&inner, &size);
    // }

    void set_physical_size(const PhysicalSize size) {
        slint_windowrc_set_physical_size(&inner, &size);
    }

    /// Send a pointer event to this window
    void dispatch_pointer_event(const MouseEvent event) {
        assert_main_thread();
        slint_windowrc_dispatch_pointer_event(&inner, &event);
    }

    /// Registers a font by the specified path. The path must refer to an existing
    /// TrueType font.
    /// \returns an empty optional on success, otherwise an error string
    Nullable!SharedString register_font_from_path(const SharedString path) {
        SharedString maybe_err;
        slint_register_font_from_path(&inner, &path, &maybe_err);
        if (!maybe_err.empty()) {
            return nullable(maybe_err);
        }
        else {
            return Nullable!SharedString.init;
        }
    }

    /// Registers a font by the data. The data must be valid TrueType font data.
    /// \returns an empty optional on success, otherwise an error string
    Nullable!SharedString register_font_from_data(const uint8_t* data, size_t len) {
        SharedString maybe_err;
        slint_register_font_from_data(&inner, make_slice(data, len), &maybe_err);
        if (!maybe_err.empty()) {
            return nullable(maybe_err);
        }
        else {
            return Nullable!SharedString.init;
        }
    }

    /// Registers a bitmap font for use with the software renderer.
    // TODO: enable this later
    // void register_bitmap_font(const BitmapFont font) {
    //     slint_register_bitmap_font(&inner, &font);
    // }

    /// \private
    const(WindowAdapterRcOpaque)* handle() const {
        return &inner;
    }

private:
    // friend class platform::SkiaRenderer;
    // friend class platform::SoftwareRenderer;
    WindowAdapterRcOpaque inner;
}

/// This class represents a window towards the windowing system, that's used to render the
/// scene of a component. It provides API to control windowing system specific aspects such
/// as the position on the screen.
class Window {
public:
    /// \private
    /// Internal function used by the generated code to construct a new instance of this
    /// public API wrapper.
    this(WindowAdapterRc windowrc) {
        this.inner = windowrc;
    }
    /// Destroys this window. Window instances are explicitly shared and reference counted.
    /// If this window instance is the last one referencing the window towards the windowing
    /// system, then it will also become hidden and destroyed.

    /// Shows the window on the screen. An additional strong reference on the
    /// associated component is maintained while the window is visible.
    ///
    /// Call hide() to make the window invisible again, and drop the additional
    /// strong reference.
    void show() {
        assert_main_thread();
        writeln("inner.show()");
        inner.show();
    }
    /// Hides the window, so that it is not visible anymore. The additional strong
    /// reference on the associated component, that was created when show() was called, is
    /// dropped.
    void hide() {
        assert_main_thread();
        inner.hide();
    }

    /// Returns the visibility state of the window. This function can return false even if you
    /// previously called show() on it, for example if the user minimized the window.
    bool is_visible() const {
        assert_main_thread();
        return inner.is_visible();
    }

    /// This function allows registering a callback that's invoked during the different phases of
    /// rendering. This allows custom rendering on top or below of the scene.
    ///
    /// The provided callback must be callable with a RenderingState and the
    /// GraphicsAPI argument.
    ///
    /// On success, the function returns a std::optional without value. On error, the function
    /// returns the error code as value in the std::optional.
    Nullable!SetRenderingNotifierError set_rendering_notifier(F)(ref F callback) const
            if (isCallable!(F, RenderingState, GraphicsAPI)) {
        assert_main_thread();
        return inner.set_rendering_notifier(callback);
    }

    /// This function allows registering a callback that's invoked when the user tries to close
    /// a window.
    /// The callback has to return a CloseRequestResponse.
    // clang-format off
    void on_close_requested(F)(F callback) const
            if (isCallable!F && is(ReturnType!F : CloseRequestResponse)) {
        assert_main_thread();
        inner.on_close_requested(callback);
    }

    /// This function issues a request to the windowing system to redraw the contents of the window.
    void request_redraw() const {
        assert_main_thread();
        inner.request_redraw();
    }

    /// Returns the position of the window on the screen, in physical screen coordinates and
    /// including a window frame (if present).
    PhysicalPosition position() const {
        assert_main_thread();
        return inner.position();
    }

    /// Sets the position of the window on the screen, in physical screen coordinates and including
    /// a window frame (if present).
    /// Note that on some windowing systems, such as Wayland, this functionality is not available.
    void set_position(const LogicalPosition pos) {
        assert_main_thread();
        inner.set_logical_position(pos);
    }
    /// Sets the position of the window on the screen, in physical screen coordinates and including
    /// a window frame (if present).
    /// Note that on some windowing systems, such as Wayland, this functionality is not available.
    void set_position(const PhysicalPosition pos) {
        assert_main_thread();
        inner.set_physical_position(pos);
    }

    /// Returns the size of the window on the screen, in physical screen coordinates and excluding
    /// a window frame (if present).
    PhysicalSize size() const {
        assert_main_thread();
        return inner.size();
    }

    /// Resizes the window to the specified size on the screen, in logical pixels and excluding
    /// a window frame (if present).
    void set_size(const LogicalSize size) {
        assert_main_thread();
        // TODO: enable later
        // inner.set_logical_size(size);
    }
    /// Resizes the window to the specified size on the screen, in physical pixels and excluding
    /// a window frame (if present).
    void set_size(const PhysicalSize size) {
        assert_main_thread();
        inner.set_physical_size(size);
    }

    /// This function returns the scale factor that allows converting between logical and
    /// physical pixels.
    float scale_factor() const {
        assert_main_thread();
        return inner.scale_factor();
    }

    /// Returns if the window is currently fullscreen
    bool is_fullscreen() const {
        assert_main_thread();
        return slint_windowrc_is_fullscreen(inner.handle());
    }
    /// Set or unset the window to display fullscreen.
    void set_fullscreen(bool fullscreen) {
        assert_main_thread();
        slint_windowrc_set_fullscreen(inner.handle(), fullscreen);
    }

    /// Returns if the window is currently maximized
    bool is_maximized() const {
        assert_main_thread();
        return slint_windowrc_is_maximized(inner.handle());
    }
    /// Maximize or unmaximize the window.
    void set_maximized(bool maximized) {
        assert_main_thread();
        slint_windowrc_set_maximized(inner.handle(), maximized);
    }

    /// Returns if the window is currently minimized
    bool is_minimized() const {
        assert_main_thread();
        return slint_windowrc_is_minimized(inner.handle());
    }
    /// Minimize or unminimze the window.
    void set_minimized(bool minimized) {
        assert_main_thread();
        slint_windowrc_set_minimized(inner.handle(), minimized);
    }

    /// Dispatch a key press event to the scene.
    ///
    /// Use this when you're implementing your own backend and want to forward user input events.
    ///
    /// The \a text is the unicode representation of the key.
    void dispatch_key_press_event(const SharedString text) {
        assert_main_thread();
        slint_windowrc_dispatch_key_event(inner.handle(), KeyEventType.KeyPressed, &text, false);
    }

    /// Dispatch an auto-repeated key press event to the scene.
    ///
    /// Use this when you're implementing your own backend and want to forward user input events.
    ///
    /// The \a text is the unicode representation of the key.
    void dispatch_key_press_repeat_event(const SharedString text) {
        assert_main_thread();
        slint_windowrc_dispatch_key_event(inner.handle(), KeyEventType.KeyPressed, &text, true);
    }

    /// Dispatch a key release event to the scene.
    ///
    /// Use this when you're implementing your own backend and want to forward user input events.
    ///
    /// The \a text is the unicode representation of the key.
    void dispatch_key_release_event(const SharedString text) {
        assert_main_thread();
        slint_windowrc_dispatch_key_event(inner.handle(), KeyEventType.KeyReleased, &text, false);
    }

    /// Dispatches a pointer or mouse press event to the scene.
    ///
    /// Use this function when you're implementing your own backend and want to forward user
    /// pointer/mouse events.
    ///
    /// \a pos represents the logical position of the pointer relative to the window.
    /// \a button is the button that was pressed.
    void dispatch_pointer_press_event(LogicalPosition pos, PointerEventButton button) {
        assert_main_thread();
        inner.dispatch_pointer_event(MouseEvent.Pressed(LogicalPoint(pos.x, pos.y), button, 0));
    }
    /// Dispatches a pointer or mouse release event to the scene.
    ///
    /// Use this function when you're implementing your own backend and want to forward user
    /// pointer/mouse events.
    ///
    /// \a pos represents the logical position of the pointer relative to the window.
    /// \a button is the button that was released.
    void dispatch_pointer_release_event(LogicalPosition pos, PointerEventButton button) {
        assert_main_thread();
        inner.dispatch_pointer_event(MouseEvent.Released(LogicalPoint(pos.x, pos.y), button, 0));
    }
    /// Dispatches a pointer exit event to the scene.
    ///
    /// Use this function when you're implementing your own backend and want to forward user
    /// pointer/mouse events.
    ///
    /// This event is triggered when the pointer exits the window.
    void dispatch_pointer_exit_event() {
        assert_main_thread();
        inner.dispatch_pointer_event(MouseEvent.Exit());
    }

    /// Dispatches a pointer move event to the scene.
    ///
    /// Use this function when you're implementing your own backend and want to forward user
    /// pointer/mouse events.
    ///
    /// \a pos represents the logical position of the pointer relative to the window.
    void dispatch_pointer_move_event(LogicalPosition pos) {
        assert_main_thread();
        inner.dispatch_pointer_event(MouseEvent.Moved(LogicalPoint(pos.x, pos.y)));
    }

    /// Dispatches a scroll (or wheel) event to the scene.
    ///
    /// Use this function when you're implementing your own backend and want to forward user wheel
    /// events.
    ///
    /// \a parameter represents the logical position of the pointer relative to the window.
    /// \a delta_x and \a delta_y represent the scroll delta values in the X and Y
    /// directions in logical pixels.
    void dispatch_pointer_scroll_event(LogicalPosition pos, float delta_x, float delta_y) {
        assert_main_thread();
        inner.dispatch_pointer_event(MouseEvent.Wheel(LogicalPoint(pos.x,
                pos.y), delta_x, delta_y));
    }

    /// Set the logical size of this window after a resize event
    ///
    /// The backend must send this event to ensure that the `width` and `height` property of the
    /// root Window element are properly set.
    void dispatch_resize_event(LogicalSize s) {
        assert_main_thread();
        WindowEvent event;
        event.resized = WindowEvent.Resized_Body(WindowEvent.Tag.Resized,
                LogicalSize(s.width, s.height));
        slint_windowrc_dispatch_event(inner.handle(), &event);
    }

    /// The window's scale factor has changed. This can happen for example when the display's
    /// resolution changes, the user selects a new scale factor in the system settings, or the
    /// window is moved to a different screen. Platform implementations should dispatch this event
    /// also right after the initial window creation, to set the initial scale factor the windowing
    /// system provided for the window.
    void dispatch_scale_factor_change_event(float factor) {
        assert_main_thread();
        WindowEvent event;
        event.scale_factor_changed = WindowEvent.ScaleFactorChanged_Body(
                WindowEvent.Tag.ScaleFactorChanged, factor);
        slint_windowrc_dispatch_event(inner.handle(), &event);
    }

    /// The Window was activated or de-activated.
    ///
    /// The backend should dispatch this event with true when the window gains focus
    /// and false when the window loses focus.
    void dispatch_window_active_changed_event(bool active) {
        assert_main_thread();
        WindowEvent event;
        event.window_active_changed = WindowEvent.WindowActiveChanged_Body(
                WindowEvent.Tag.WindowActiveChanged, active);
        slint_windowrc_dispatch_event(inner.handle(), &event);
    }

    /// The user requested to close the window.
    ///
    /// The backend should send this event when the user tries to close the window,for example by
    /// pressing the close button.
    ///
    /// This will have the effect of invoking the callback set in Window::on_close_requested() and
    /// then hiding the window depending on the return value of the callback.
    void dispatch_close_requested_event() {
        assert_main_thread();
        WindowEvent event = WindowEvent(WindowEvent.Tag.CloseRequested);
        slint_windowrc_dispatch_event(inner.handle(), &event);
    }

    /// Returns true if there is an animation currently active on any property in the Window.
    bool has_active_animations() const {
        assert_main_thread();
        return slint_windowrc_has_active_animations(inner.handle());
    }

    /// Takes a snapshot of the window contents and returns it as RGBA8 encoded pixel buffer.
    ///
    /// Note that this function may be slow to call as it may need to re-render the scene.
    // TODO: enable later
    // Nullable!(SharedPixelBuffer!(Rgba8Pixel)) take_snapshot() const
    // {
    //     SharedPixelBuffer!(Rgba8Pixel) result;
    //     if (slint_windowrc_take_snapshot(inner.handle(), &result.m_data,
    //                                                        &result.m_width, &result.m_height)) {
    //         return result;
    //     } else {
    //         return {};
    //     }
    // }

    /// \private
    WindowAdapterRc window_handle() {
        return inner;
    }
    /// \private
    const(WindowAdapterRc) window_handle() const {
        return inner;
    }

private:
    WindowAdapterRc inner;
}
