module slint.internal;

import slint.vtable;
import slint.string_internal;
import slint.enums;
import slint.enums_internal;
import slint.properties_internal;
import slint.window;
import slint.string;
import slint.color;
import slint.properties;
import slint.point;
import slint.size;
import slint.events_internal;

import core.stdc.stdint : uintptr_t, intptr_t, uint8_t, int32_t, uint32_t, uint64_t;

enum TraversalOrder : uint8_t {
    BackToFront,
    FrontToBack,
}

/// This value is returned by the `input_event` function of an Item
/// to notify the run-time about how the event was handled and
/// what the next steps are.
/// See [`crate::items::ItemVTable::input_event`].
enum InputEventResult : uint8_t {
    /// The event was accepted. This may result in additional events, for example
    /// accepting a mouse move will result in a MouseExit event later.
    EventAccepted,
    /// The event was ignored.
    EventIgnored,
    /// All further mouse events need to be sent to this item or component
    GrabMouse,
    /// Will start a drag operation. Can only be returned from a [`crate::items::DragArea`] item.
    StartDrag,
}

/// Represents how an item's focus_event handler dealt with a focus event.
/// An accepted event results in no further event propagation.
enum FocusEventResult : uint8_t {
    /// The event was handled.
    FocusAccepted,
    /// The event was not handled and should be sent to other items.
    FocusIgnored,
}

/// Represents how an item's key_event handler dealt with a key event.
/// An accepted event results in no further event propagation.
enum KeyEventResult : uint8_t {
    /// The event was handled.
    EventAccepted,
    /// The event was not handled and should be sent to other items.
    EventIgnored,
}

/// Returned by the `render()` function on items to indicate whether the rendering of
/// children should be handled by the caller, of if the item took care of that (for example
/// through layer indirection)
enum RenderingResult {
    ContinueRenderingChildren,
    ContinueRenderingWithoutChildren,
}

/// The property names of the accessible-properties
enum AccessibleStringProperty : uint32_t {
    Checkable,
    Checked,
    DelegateFocus,
    Description,
    Enabled,
    Expandable,
    Expanded,
    ItemCount,
    ItemIndex,
    ItemSelectable,
    ItemSelected,
    Label,
    PlaceholderText,
    ReadOnly,
    Value,
    ValueMaximum,
    ValueMinimum,
    ValueStep,
}

enum UndoItemKind {
    TextInsert,
    TextRemove,
}

/// This enum defines the different kinds of key events that can happen.
enum KeyEventType : uint8_t {
    /// A key on a keyboard was pressed.
    KeyPressed = 0,
    /// A key on a keyboard was released.
    KeyReleased = 1,
    /// The input method updates the currently composed text. The KeyEvent's text field is the pre-edit text and
    /// composition_selection specifies the placement of the cursor within the pre-edit text.
    UpdateComposition = 2,
    /// The input method replaces the currently composed text with the final result of the composition.
    CommitComposition = 3,
}

/// The clip board, used in [`Platform::clipboard_text`] and [Platform::set_clipboard_text`]
enum Clipboard : uint8_t {
    /// This is the default clipboard used for text action for Ctrl+V,  Ctrl+C.
    /// Corresponds to the secondary clipboard on X11.
    DefaultClipboard = 0,
    /// This is the clipboard that is used when text is selected
    /// Corresponds to the primary clipboard on X11.
    /// The Platform implementation should do nothing if copy on select is not supported on that platform.
    SelectionClipboard = 1,
}

struct Option(T = void);

alias VisitChildrenResult = uint64_t;

struct ItemRc {
    VRc!(ItemTreeVTable) item_tree;
    uint32_t index;
}

/// The constraint that applies to an item
struct LayoutInfo {
    /// The maximum size for the item.
    float max;
    /// The maximum size in percentage of the parent (value between 0 and 100).
    float max_percent;
    /// The minimum size for this item.
    float min;
    /// The minimum size in percentage of the parent (value between 0 and 100).
    float min_percent;
    /// the preferred size
    float preferred;
    /// the  stretch factor
    float stretch;
    LayoutInfo merge(const ref LayoutInfo other) const;
    // friend inline LayoutInfo operator+(const LayoutInfo &a, const LayoutInfo &b) { return a.merge(b); }
    // friend bool operator==(const LayoutInfo&, const LayoutInfo&) = default;
}

/// Items are the nodes in the render tree.
struct ItemVTable {
    /// This function is called by the run-time after the memory for the item
    /// has been allocated and initialized. It will be called before any user specified
    /// bindings are set.
    void function(Pin!(VRef!(ItemVTable)), const ItemRc* my_item) init_;
    /// offset in bytes from the *const ItemImpl.
    /// isize::MAX  means None
    uintptr_t cached_rendering_data_offset;
    /// We would need max/min/preferred size, and all layout info
    LayoutInfo function(Pin!(VRef!(ItemVTable)), Orientation orientation,
            const WindowAdapterRc* window_adapter, const ItemRc* self_rc) layout_info;
    /// Event handler for mouse and touch event. This function is called before being called on children.
    /// Then, depending on the return value, it is called for the children, and their children, then
    /// [`Self::input_event`] is called on the children, and finally [`Self::input_event`] is called
    /// on this item again.
    // TODO: enable later
    // InputEventFilterResult function(Pin!(VRef!(ItemVTable)), const MouseEvent*,
    //         const WindowAdapterRc* window_adapter, const ItemRc* self_rc) input_event_filter_before_children;
    // /// Handle input event for mouse and touch event
    // InputEventResult function(Pin!(VRef!(ItemVTable)), const MouseEvent*,
    //         const WindowAdapterRc* window_adapter, const ItemRc* self_rc) input_event;
    // FocusEventResult function(Pin!(VRef!(ItemVTable)), const FocusEvent*,
    //         const WindowAdapterRc* window_adapter, const ItemRc* self_rc) focus_event;
    // /// Called on the parents of the focused item, allowing for global shortcuts and similar
    // /// overrides of the default actions.
    // KeyEventResult function(Pin!(VRef!(ItemVTable)), const KeyEvent*,
    //         const WindowAdapterRc* window_adapter, const ItemRc* self_rc) capture_key_event;
    // KeyEventResult function(Pin!(VRef!(ItemVTable)), const KeyEvent*,
    //         const WindowAdapterRc* window_adapter, const ItemRc* self_rc) key_event;
    // RenderingResult function(Pin!(VRef!(ItemVTable)),
    //         ItemRendererRef* backend, const ItemRc* self_rc, LogicalSize size) render;
    // LogicalRect function(Pin!(VRef!(ItemVTable)),
    //         const WindowAdapterRc* window_adapter, const ItemRc* self_rc, LogicalRect geometry) bounding_rect;
    // bool function(Pin!(VRef!(ItemVTable))) clips_children;
}

extern (C) {

    struct ItemVisitorVTable {
        /// Called for each child of the visited item
        ///
        /// The `item_tree` parameter is the ItemTree in which the item live which might not be the same
        /// as the parent's ItemTree.
        /// `index` is to be used again in the visit_item_children function of the ItemTree (the one passed as parameter)
        /// and `item` is a reference to the item itself
        VisitChildrenResult function(VRefMut!(ItemVisitorVTable), const VRc!(ItemTreeVTable,
                Dyn)* item_tree, uint32_t index, Pin!(VRef!(ItemVTable)) item) visit_item;
        /// Destructor
        void function(VRefMut!(ItemVisitorVTable)) drop;
    }
    /// A ItemTree is representing an unit that is allocated together
    struct ItemTreeVTable {
        /// Visit the children of the item at index `index`.
        /// Note that the root item is at index 0, so passing 0 would visit the item under root (the children of root).
        /// If you want to visit the root item, you need to pass -1 as an index.
        VisitChildrenResult function(Pin!(VRef!(ItemTreeVTable)), intptr_t index,
                TraversalOrder order, VRefMut!(ItemVisitorVTable) visitor) visit_children_item;

        /// Return a reference to an item using the given index
        Pin!(VRef!(ItemVTable)) function(Pin!(VRef!(ItemTreeVTable)), uint32_t index) get_item_ref;

        // TODO: enable later
        /// Return the range of indices below the dynamic `ItemTreeNode` at `index`
        // IndexRange function(Pin!(VRef!(ItemTreeVTable)), uint32_t index) get_subtree_range;
        void* a;
        /// Return the `ItemTreeRc` at `subindex` below the dynamic `ItemTreeNode` at `index`
        void function(Pin!(VRef!(ItemTreeVTable)), uint32_t index,
                uintptr_t subindex, VWeak!(ItemTreeVTable, Dyn)* result) get_subtree;
        /// Return the item tree that is defined by this `ItemTree`.
        Slice!(ItemTreeNode) function(Pin!(VRef!(ItemTreeVTable))) get_item_tree;

        /// Return the node this ItemTree is a part of in the parent ItemTree.
        ///
        /// The return value is an item weak because it can be null if there is no parent.
        /// And the return value is passed by &mut because ItemWeak has a destructor
        /// Note that the returned value will typically point to a repeater node, which is
        /// strictly speaking not an Item at all!
        ///
        void function(Pin!(VRef!(ItemTreeVTable)), ItemWeak* result) parent_node;
        /// This embeds this ItemTree into the item tree of another ItemTree
        ///
        /// Returns `true` if this ItemTree was embedded into the `parent`
        /// at `parent_item_tree_index`.
        bool function(Pin!(VRef!(ItemTreeVTable)),
                const VWeak!(ItemTreeVTable)* parent, uint32_t parent_item_tree_index) embed_component;
        /// Return the index of the current subtree or usize::MAX if this is not a subtree
        uintptr_t function(Pin!(VRef!(ItemTreeVTable))) subtree_index;
        /// Returns the layout info for the root of the ItemTree
        LayoutInfo function(Pin!(VRef!(ItemTreeVTable)), Orientation) layout_info;
        /// Returns the item's geometry (relative to its parent item)

        LogicalRect function(Pin!(VRef!(ItemTreeVTable)), uint32_t item_index) item_geometry;
        /// Returns the accessible role for a given item
        AccessibleRole function(Pin!(VRef!(ItemTreeVTable)), uint32_t item_index) accessible_role;
        /// Returns the accessible property via the `result`. Returns true if such a property exists.
        bool function(Pin!(VRef!(ItemTreeVTable)), uint32_t item_index,
                AccessibleStringProperty what, SharedString* result) accessible_string_property;
        // TODO: enable later
        /// Executes an accessibility action.
        // void function(Pin!(VRef!(ItemTreeVTable)), uint32_t item_index,
        // const AccessibilityAction* action) accessibility_action;
        void* b;
        /// Returns the supported accessibility actions.
        // SupportedAccessibilityAction function(Pin!(VRef!(ItemTreeVTable)), uint32_t item_index) supported_accessibility_actions;
        void* c;

        /// Add the `ElementName::id` entries of the given item
        bool function(Pin!(VRef!(ItemTreeVTable)), uint32_t item_index, SharedString* result) item_element_infos;
        /// Returns a Window, creating a fresh one if `do_create` is true.
        void function(Pin!(VRef!(ItemTreeVTable)), bool do_create,
                Option!(WindowAdapterRc)* result) window_adapter;
        /// in-place destructor (for VRc)
        Layout function(VRefMut!(ItemTreeVTable)) drop_in_place;
        /// dealloc function (for VRc)
        void function(const ItemTreeVTable*, uint8_t* ptr, Layout layout) dealloc;
    }

    /// Type alias to the commonly used VRc<ItemTreeVTable, Dyn>>
    alias ItemTreeRc = VRc!(ItemTreeVTable, Dyn);

    /// Same layout as WindowAdapterRc
    struct WindowAdapterRcOpaque {
        const void* _0;
        const void* _1;
    }

}

/// The item tree is an array of ItemTreeNode representing a static tree of items
/// within a ItemTree.
union ItemTreeNode {
    enum Tag : uint8_t {
        /// Static item
        Item,
        /// A placeholder for many instance of item in their own ItemTree which
        /// are instantiated according to a model.
        DynamicTree,
    }

    struct Item_Body {
        Tag tag;
        /// True when the item has accessibility properties attached
        bool is_accessible;
        /// number of children
        uint32_t children_count;
        /// index of the first children within the item tree
        uint32_t children_index;
        /// The index of the parent item (not valid for the root)
        uint32_t parent_index;
        /// The index in the extra item_array
        uint32_t item_array_index;
    }

    struct DynamicTree_Body {
        Tag tag;
        /// the index which is passed in the visit_dynamic callback.
        uint32_t index;
        /// The index of the parent item (not valid for the root)
        uint32_t parent_index;
    }

    struct {
        Tag tag;
    }

    Item_Body item;
    DynamicTree_Body dynamic_tree;
    this(Item_Body x) {
        item = x;
    }

    this(DynamicTree_Body x) {
        dynamic_tree = x;
    }
}

/// Type alias to the commonly used VWeak<ItemTreeVTable, Dyn>>
alias ItemTreeWeak = VWeak!(ItemTreeVTable, Dyn);

/// A Weak reference to an item that can be constructed from an ItemRc.
struct ItemWeak {
    ItemTreeWeak item_tree;
    uint32_t index;
}

/// Alias for `vtable::VRef<ItemTreeVTable>` which represent a pointer to a `dyn ItemTree` with
/// the associated vtable
alias ItemTreeRef = VRef!(ItemTreeVTable);

/// Type alias to the commonly used `Pin<VRef<ItemTreeVTable>>>`
alias ItemTreeRefPin = Pin!(ItemTreeRef);

/// The implementation of the `PropertyAnimation` element
struct PropertyAnimation {
    int32_t delay;
    int32_t duration;
    float iteration_count;
    AnimationDirection direction;
    // TODO: Enable later
    // EasingCurve easing;
}

/// 2D Size in integer coordinates
alias IntSize = Size2D!(uint32_t);

union WindowEvent {
    enum Tag : uint32_t {
        /// A pointer was pressed.
        PointerPressed,
        /// A pointer was released.
        PointerReleased,
        /// The position of the pointer has changed.
        PointerMoved,
        /// The wheel button of a mouse was rotated to initiate scrolling.
        PointerScrolled,
        /// The pointer exited the window.
        PointerExited,
        /// A key was pressed.
        KeyPressed,
        /// A key press was auto-repeated.
        KeyPressRepeated,
        /// A key was released.
        KeyReleased,
        /// The window's scale factor has changed. This can happen for example when the display's resolution
        /// changes, the user selects a new scale factor in the system settings, or the window is moved to a
        /// different screen.
        /// Platform implementations should dispatch this event also right after the initial window creation,
        /// to set the initial scale factor the windowing system provided for the window.
        ScaleFactorChanged,
        /// The window was resized.
        ///
        /// The backend must send this event to ensure that the `width` and `height` property of the root Window
        /// element are properly set.
        Resized,
        /// The user requested to close the window.
        ///
        /// The backend should send this event when the user tries to close the window,for example by pressing the close button.
        ///
        /// This will have the effect of invoking the callback set in [`Window::on_close_requested()`](`crate::api::Window::on_close_requested()`)
        /// and then hiding the window depending on the return value of the callback.
        CloseRequested,
        /// The Window was activated or de-activated.
        ///
        /// The backend should dispatch this event with true when the window gains focus
        /// and false when the window loses focus.
        WindowActiveChanged,
    }

    struct PointerPressed_Body {
        Tag tag;
        LogicalPosition position;
        /// The button that was pressed.
        PointerEventButton button;
    }

    struct PointerReleased_Body {
        Tag tag;
        LogicalPosition position;
        /// The button that was released.
        PointerEventButton button;
    }

    struct PointerMoved_Body {
        Tag tag;
        LogicalPosition position;
    }

    struct PointerScrolled_Body {
        Tag tag;
        LogicalPosition position;
        /// The amount of logical pixels to scroll in the horizontal direction.
        float delta_x;
        /// The amount of logical pixels to scroll in the vertical direction.
        float delta_y;
    }

    struct KeyPressed_Body {
        Tag tag;
        /// The unicode representation of the key pressed.
        ///
        /// # Example
        /// A specific key can be mapped to a unicode by using the [`Key`] enum
        /// ```rust
        /// let _ = slint::platform::WindowEvent::KeyPressed { text: slint::platform::Key::Shift.into() };
        /// ```
        SharedString text;
    }

    struct KeyPressRepeated_Body {
        Tag tag;
        /// The unicode representation of the key pressed.
        ///
        /// # Example
        /// A specific key can be mapped to a unicode by using the [`Key`] enum
        /// ```rust
        /// let _ = slint::platform::WindowEvent::KeyPressRepeated { text: slint::platform::Key::Shift.into() };
        /// ```
        SharedString text;
    }

    struct KeyReleased_Body {
        Tag tag;
        /// The unicode representation of the key released.
        ///
        /// # Example
        /// A specific key can be mapped to a unicode by using the [`Key`] enum
        /// ```rust
        /// let _ = slint::platform::WindowEvent::KeyReleased { text: slint::platform::Key::Shift.into() };
        /// ```
        SharedString text;
    }

    struct ScaleFactorChanged_Body {
        Tag tag;
        /// The window system provided scale factor to map logical pixels to physical pixels.
        float scale_factor;
    }

    struct Resized_Body {
        Tag tag;
        /// The new logical size of the window
        LogicalSize size;
    }

    struct WindowActiveChanged_Body {
        Tag tag;
        bool _0;
    }

    struct {
        Tag tag;
    }

    PointerPressed_Body pointer_pressed;
    PointerReleased_Body pointer_released;
    PointerMoved_Body pointer_moved;
    PointerScrolled_Body pointer_scrolled;
    KeyPressed_Body key_pressed;
    KeyPressRepeated_Body key_press_repeated;
    KeyReleased_Body key_released;
    ScaleFactorChanged_Body scale_factor_changed;
    Resized_Body resized;
    WindowActiveChanged_Body window_active_changed;
    /* Some members of the WindowEvent enum have destructors (with SharedString), but thankfully we don't use these so we can have an empty constructor */

}

/// Expand Rect so that cbindgen can see it. ( is in fact euclid::default::Rect<f32>)
struct Rect {
    float x;
    float y;
    float width;
    float height;
}

extern (C) {

    /// Initialize the callback.
    /// slint_callback_drop must be called.
    void slint_callback_init(CallbackOpaque* out_);

    /// Emit the callback
    void slint_callback_call(const CallbackOpaque* sig, const void* arg, void* ret);

    /// Set callback handler.
    ///
    /// The binding has signature fn(user_data)
    void slint_callback_set_handler(const CallbackOpaque* sig, void function(void* user_data,
            const void* arg, void* ret) binding, void* user_data,
            void function(void*) drop_user_data);

    /// Destroy callback
    void slint_callback_drop(CallbackOpaque* handle);

    bool slint_date_time_use_24_hour_format();

    int32_t slint_date_time_month_day_count(uint32_t month, int32_t year);

    int32_t slint_date_time_month_offset(uint32_t month, int32_t year);

    void slint_date_time_format_date(const SharedString* format, uint32_t day,
            uint32_t month, int32_t year, SharedString* out_);

    void slint_date_time_date_now(int32_t* d, int32_t* m, int32_t* y);

    bool slint_date_time_parse_date(const SharedString* date,
            const SharedString* format, int32_t* d, int32_t* m, int32_t* y);

    /// Call init() on the ItemVTable of each item in the item array.
    void slint_register_item_tree(const ItemTreeRc item_tree_rc,
            const WindowAdapterRcOpaque* window_handle);

    // TODO: enable later
    // /// Free the backend graphics resources allocated in the item array.
    // void slint_unregister_item_tree(ItemTreeRefPin component, Slice!(VOffset!(uint8_t,
    //         ItemVTable, AllowPin)) item_array, const WindowAdapterRcOpaque* window_handle);

    /// Expose `crate::item_tree::visit_item_tree` to C++
    ///
    /// Safety: Assume a correct implementation of the item_tree array

    // TODO: enable later
    // VisitChildrenResult slint_visit_item_tree(const ItemTreeRc item_tree,
    //         Slice!(ItemTreeNode) item_tree_array, intptr_t index,
    //         TraversalOrder order, VRefMut!(ItemVisitorVTable) visitor,
    //         VisitChildrenResult function(const void* base, TraversalOrder order,
    //             VRefMut!(ItemVisitorVTable) visitor, uint32_t dyn_index) visit_dynamic);
    // void slint_contextmenu_close(Pin!(const ContextMenu*) s, const WindowAdapterRcOpaque* window_adapter,
    //         const VRc!(ItemTreeVTable)* self_component, uint32_t self_index);
    //
    // bool slint_contextmenu_is_open(Pin!(const ContextMenu*) s, const WindowAdapterRcOpaque* window_adapter,
    //         const VRc!(ItemTreeVTable)* self_component, uint32_t self_index);
    //
    // LogicalPoint slint_item_absolute_position(
    //         const VRc!(ItemTreeVTable)* self_component, uint32_t self_index);

    // TODO: enable later
    // /// # Safety
    // /// This must be called using a non-null pointer pointing to a chunk of memory big enough to
    // /// hold a FlickableDataBox
    // void slint_flickable_data_init(FlickableDataBox* data);
    //
    // /// # Safety
    // /// This must be called using a non-null pointer pointing to an initialized FlickableDataBox
    // void slint_flickable_data_free(FlickableDataBox* data);

    // void slint_textinput_set_selection_offsets(Pin!(const TextInput*) text_input,
    //         const WindowAdapterRcOpaque* window_adapter,
    //         const VRc!(ItemTreeVTable)* self_component, uint32_t self_index,
    //         int32_t start, int32_t end);
    //
    // void slint_textinput_select_all(Pin!(const TextInput*) text_input,
    //         const WindowAdapterRcOpaque* window_adapter,
    //         const VRc!(ItemTreeVTable)* self_component, uint32_t self_index);
    //
    // void slint_textinput_clear_selection(Pin!(const TextInput*) text_input,
    //         const WindowAdapterRcOpaque* window_adapter,
    //         const VRc!(ItemTreeVTable)* self_component, uint32_t self_index);
    //
    // void slint_textinput_cut(Pin!(const TextInput*) text_input, const WindowAdapterRcOpaque* window_adapter,
    //         const VRc!(ItemTreeVTable)* self_component, uint32_t self_index);
    //
    // void slint_textinput_copy(Pin!(const TextInput*) text_input, const WindowAdapterRcOpaque* window_adapter,
    //         const VRc!(ItemTreeVTable)* self_component, uint32_t self_index);
    //
    // void slint_textinput_paste(Pin!(const TextInput*) text_input, const WindowAdapterRcOpaque* window_adapter,
    //         const VRc!(ItemTreeVTable)* self_component, uint32_t self_index);
    //
    // FontMetrics slint_cpp_text_item_fontmetrics(const WindowAdapterRcOpaque* window_adapter,
    //         const VRc!(ItemTreeVTable)* self_component, uint32_t self_index);
    //
    // void slint_swipegesturehandler_cancel(Pin!(const SwipeGestureHandler*) s,
    //         const WindowAdapterRcOpaque* window_adapter,
    //         const VRc!(ItemTreeVTable)* self_component, uint32_t self_index);
    //
    // void slint_solve_grid_layout(const GridLayoutData* data, SharedVector!(float)* result);
    //
    // LayoutInfo slint_grid_layout_info(Slice!(GridLayoutCellData) cells,
    //         float spacing, const Padding* padding);
    //
    // void slint_solve_box_layout(const BoxLayoutData* data,
    //         Slice!(uint32_t) repeater_indexes, SharedVector!(float)* result);
    //
    // /// Return the LayoutInfo for a BoxLayout with the given cells.
    // LayoutInfo slint_box_layout_info(Slice!(BoxLayoutCellData) cells,
    //         float spacing, const Padding* padding, LayoutAlignment alignment);
    //
    // /// Return the LayoutInfo for a BoxLayout with the given cells.
    // LayoutInfo slint_box_layout_info_ortho(Slice!(BoxLayoutCellData) cells, const Padding* padding);

    /// Calls [`reorder_dialog_button_layout`].
    ///
    /// Safety: `cells` must be a pointer to a mutable array of cell data, the array must have at
    /// least `roles.len()` elements.
    // void slint_reorder_dialog_button_layout(GridLayoutCellData* cells,
    //         Slice!(DialogButtonRole) roles);

    /// Create a `VRc::<MenuVTable>`` that wraps the [`ItemTreeRc`]
    ///
    /// Put the created VRc into the result pointer with std::ptr::write
    // void slint_menus_create_wrapper(const ItemTreeRc menu_tree,
    //         VRc!(MenuVTable)* result, bool function(const ItemTreeRc menu_tree) condition);

    /// Initialize the first pointer of the Property. Does not initialize the content.
    /// `out` is assumed to be uninitialized
    void slint_property_init(PropertyHandleOpaque* out_);

    /// To be called before accessing the value
    void slint_property_update(const PropertyHandleOpaque* handle, void* val);

    /// Mark the fact that the property was changed and that its binding need to be removed, and
    /// the dependencies marked dirty.
    /// To be called after the `value` has been changed
    void slint_property_set_changed(const PropertyHandleOpaque* handle, const void* value);

    /// Set a binding
    ///
    /// The current implementation will do usually two memory allocation:
    ///  1. the allocation from the calling code to allocate user_data
    ///  2. the box allocation within this binding
    /// It might be possible to reduce that by passing something with a
    /// vtable, so there is the need for less memory allocation.
    void slint_property_set_binding(const PropertyHandleOpaque* handle, void function(void* user_data,
            void* pointer_to_value) binding, void* user_data, void function(void*) drop_user_data,
            bool function(void* user_data, const void* pointer_to_value) intercept_set,
            bool function(void* user_data, void* new_binding) intercept_set_binding);

    /// Set a binding using an already allocated building holder
    ///
    void slint_property_set_binding_internal(const PropertyHandleOpaque* handle, void* binding);

    /// Returns whether the property behind this handle is marked as dirty
    bool slint_property_is_dirty(const PropertyHandleOpaque* handle);

    /// Marks the property as dirty and notifies dependencies.
    void slint_property_mark_dirty(const PropertyHandleOpaque* handle);

    /// Marks the property as dirty and notifies dependencies.
    void slint_property_set_constant(const PropertyHandleOpaque* handle);

    /// Destroy handle
    void slint_property_drop(PropertyHandleOpaque* handle);

    /// Internal function to set up a property animation to the specified target value for an integer property.
    void slint_property_set_animated_value_int(const PropertyHandleOpaque* handle,
            int32_t from, int32_t to, const PropertyAnimation* animation_data);

    /// Internal function to set up a property animation to the specified target value for a float property.
    void slint_property_set_animated_value_float(const PropertyHandleOpaque* handle,
            float from, float to, const PropertyAnimation* animation_data);

    /// Internal function to set up a property animation to the specified target value for a color property.
    void slint_property_set_animated_value_color(const PropertyHandleOpaque* handle,
            Color from, Color to, const PropertyAnimation* animation_data);

    // TODO: enable later
    // /// Internal function to set up a property animation to the specified target value for a brush property.
    // void slint_property_set_animated_value_brush(const PropertyHandleOpaque* handle,
    //         const Brush* from, const Brush* to, const PropertyAnimation* animation_data);
    //
    /// Internal function to set up a property animation between values produced by the specified binding for an integer property.
    void slint_property_set_animated_binding_int(const PropertyHandleOpaque* handle, void function(void*, int*) binding,
            void* user_data, void function(void*) drop_user_data, const PropertyAnimation* animation_data,
            PropertyAnimation function(void* user_data, uint64_t* start_instant) transition_data);

    /// Internal function to set up a property animation between values produced by the specified binding for a float property.
    void slint_property_set_animated_binding_float(const PropertyHandleOpaque* handle,
            void function(void*, float*) binding,
            void* user_data, void function(void*) drop_user_data, const PropertyAnimation* animation_data,
            PropertyAnimation function(void* user_data, uint64_t* start_instant) transition_data);

    /// Internal function to set up a property animation between values produced by the specified binding for a color property.
    void slint_property_set_animated_binding_color(const PropertyHandleOpaque* handle,
            void function(void*, Color*) binding,
            void* user_data, void function(void*) drop_user_data, const PropertyAnimation* animation_data,
            PropertyAnimation function(void* user_data, uint64_t* start_instant) transition_data);

    // TODO: enable later
    // /// Internal function to set up a property animation between values produced by the specified binding for a brush property.
    // void slint_property_set_animated_binding_brush(const PropertyHandleOpaque* handle,
    //         void function(void*, Brush*) binding,
    //         void* user_data, void function(void*) drop_user_data, const PropertyAnimation* animation_data,
    //         PropertyAnimation function(void* user_data, uint64_t* start_instant) transition_data);

    /// Internal function to set up a state binding on a Property<StateInfo>.
    void slint_property_set_state_binding(const PropertyHandleOpaque* handle,
            int32_t function(void*) binding, void* user_data, void function(void*) drop_user_data);

    /// Initialize the first pointer of the PropertyTracker.
    /// `out` is assumed to be uninitialized
    /// slint_property_tracker_drop need to be called after that
    void slint_property_tracker_init(PropertyTrackerOpaque* out_);

    /// Call the callback with the user data. Any properties access within the callback will be registered.
    /// Any currently evaluated bindings or property trackers will be notified if accessed properties are changed.
    void slint_property_tracker_evaluate(const PropertyTrackerOpaque* handle,
            void function(void* user_data) callback, void* user_data);

    /// Call the callback with the user data. Any properties access within the callback will be registered.
    /// Any currently evaluated bindings or property trackers will be not notified if accessed properties are changed.
    void slint_property_tracker_evaluate_as_dependency_root(const PropertyTrackerOpaque* handle,
            void function(void* user_data) callback, void* user_data);

    /// Query if the property tracker is dirty
    bool slint_property_tracker_is_dirty(const PropertyTrackerOpaque* handle);

    /// Destroy handle
    void slint_property_tracker_drop(PropertyTrackerOpaque* handle);

    /// Construct a ChangeTracker
    void slint_change_tracker_construct(ChangeTracker* ct);

    /// Drop a ChangeTracker
    void slint_change_tracker_drop(ChangeTracker* ct);

    /// initialize the change tracker
    void slint_change_tracker_init(const ChangeTracker* ct, void* user_data,
            void function(void* user_data) drop_user_data,
            bool function(void* user_data) eval_fn, void function(void* user_data) notify_fn);

    /// return the current animation tick for the `animation-tick` function
    uint64_t slint_animation_tick();

    /// This function is used for the low-level C++ interface to allocate the backing vector of a SharedVector.
    uint8_t* slint_shared_vector_allocate(uintptr_t size, uintptr_t align_);

    /// This function is used for the low-level C++ interface to deallocate the backing vector of a SharedVector
    void slint_shared_vector_free(uint8_t* ptr, uintptr_t size, uintptr_t align_);

    /// This function is used for the low-level C++ interface to initialize the empty SharedVector.
    const(uint8_t)* slint_shared_vector_empty();

    /// Returns a nul-terminated pointer for this string.
    /// The returned value is owned by the string, and should not be used after any
    /// mutable function have been called on the string, and must not be freed.
    const(char)* slint_shared_string_bytes(const SharedString* ss);

    /// Destroy the shared string
    void slint_shared_string_drop(const SharedString* ss);

    /// Increment the reference count of the string.
    /// The resulting structure must be passed to slint_shared_string_drop
    void slint_shared_string_clone(SharedString* out_, const SharedString* ss);

    /// Safety: bytes must be a valid utf-8 string of size len without null inside.
    /// The resulting structure must be passed to slint_shared_string_drop
    void slint_shared_string_from_bytes(SharedString* out_, const char* bytes, uintptr_t len);

    /// Create a string from a number.
    /// The resulting structure must be passed to slint_shared_string_drop
    void slint_shared_string_from_number(SharedString* out_, double n);

    void slint_shared_string_from_number_fixed(SharedString* out_, double n, uintptr_t digits);

    void slint_shared_string_from_number_precision(SharedString* out_, double n, uintptr_t precision);

    /// Append some bytes to an existing shared string
    ///
    /// bytes must be a valid utf8 array of size `len`, without null bytes inside
    void slint_shared_string_append(SharedString* self_, const char* bytes, uintptr_t len);

    void slint_shared_string_to_lowercase(SharedString* out_, const SharedString* ss);

    void slint_shared_string_to_uppercase(SharedString* out_, const SharedString* ss);

    /// Slint animations do not use real time, but use a mocked time.
    /// Normally, the event loop update the time of the animation using
    /// real time, but in tests, it is more convenient to use the fake time.
    /// This function will add some milliseconds to the fake time
    void slint_mock_elapsed_time(uint64_t time_in_ms);

    /// Return the current mocked time.
    uint64_t slint_get_mocked_time();

    /// Simulate a click on a position within the component.
    void slint_send_mouse_click(float x, float y, const WindowAdapterRc* window_adapter);

    /// Simulate a character input event (pressed or released).
    void slint_send_keyboard_char(const SharedString* string, bool pressed,
            const WindowAdapterRc* window_adapter);

    /// Simulate a character input event.
    void send_keyboard_string_sequence(const SharedString* sequence,
            const WindowAdapterRc* window_adapter);

    /// Returns the interval in milliseconds. 0 when the timer was never started.
    uint64_t slint_timer_interval(uintptr_t id);

    /// Perform the translation and formatting.
    void slint_translate(SharedString* to_translate, const SharedString* context,
            const SharedString* domain, Slice!(SharedString) arguments,
            int32_t n, const SharedString* plural);

    /// Mark all translated string as dirty to perform re-translation in case the language change
    void slint_translations_mark_dirty();

    /// Safety: The slice must contain valid null-terminated utf-8 strings
    void slint_translate_from_bundle(Slice!(const char*) strs,
            Slice!(SharedString) arguments, SharedString* out_put);

    /// strs is all the strings variant of all languages.
    /// indices is the array of indices such that for each language, the corresponding indice is one past the last index of the string for that language.
    /// So to get the string array for that language, one would do `strs[indices[lang-1]..indices[lang]]`
    /// (where indices[-1] is 0)
    ///
    /// Safety; the strs must be pointer to valid null-terminated utf-8 strings
    void slint_translate_from_bundle_with_plural(Slice!(const char*) strs, Slice!(uint32_t) indices,
            Slice!(uintptr_t function(int32_t)) plural_rules,
            Slice!(SharedString) arguments, int32_t n, SharedString* out_put);

    void slint_translate_set_bundled_languages(Slice!(Slice!(uint8_t)) languages);

    bool slint_translate_select_bundled_translation(Slice!(uint8_t) language);

    /// Releases the reference to the windowrc held by handle.
    void slint_windowrc_drop(WindowAdapterRcOpaque* handle);

    /// Releases the reference to the component window held by handle.
    void slint_windowrc_clone(const WindowAdapterRcOpaque* source, WindowAdapterRcOpaque* target);

    /// Spins an event loop and renders the items of the provided component in this window.
    void slint_windowrc_show(const WindowAdapterRcOpaque* handle);

    /// Spins an event loop and renders the items of the provided component in this window.
    void slint_windowrc_hide(const WindowAdapterRcOpaque* handle);

    /// Returns the visibility state of the window. This function can return false even if you previously called show()
    /// on it, for example if the user minimized the window.
    bool slint_windowrc_is_visible(const WindowAdapterRcOpaque* handle);

    /// Returns the window scale factor.
    float slint_windowrc_get_scale_factor(const WindowAdapterRcOpaque* handle);

    /// Sets the window scale factor, merely for testing purposes.
    void slint_windowrc_set_scale_factor(const WindowAdapterRcOpaque* handle, float value);

    /// Returns the text-input-focused property value.
    bool slint_windowrc_get_text_input_focused(const WindowAdapterRcOpaque* handle);

    /// Set the text-input-focused property.
    void slint_windowrc_set_text_input_focused(const WindowAdapterRcOpaque* handle, bool value);

    /// Sets the focus item.
    void slint_windowrc_set_focus_item(const WindowAdapterRcOpaque* handle,
            const ItemRc* focus_item, bool set_focus, FocusReason reason);

    /// Associates the window with the given component.
    void slint_windowrc_set_component(const WindowAdapterRcOpaque* handle,
            const ItemTreeRc* component);

    // TODO: enable later
    // /// Show a popup and return its ID. The returned ID will always be non-zero.
    // uint32_t slint_windowrc_show_popup(const WindowAdapterRcOpaque* handle, const ItemTreeRc popup,
    //         LogicalPosition position, PopupClosePolicy close_policy,
    //         const ItemRc* parent_item, bool is_menu);

    /// Close the popup by the given ID.
    void slint_windowrc_close_popup(const WindowAdapterRcOpaque* handle, uint32_t popup_id);

    // TODO: enable later
    // /// C binding to the set_rendering_notifier() API of Window
    // bool slint_windowrc_set_rendering_notifier(const WindowAdapterRcOpaque* handle,
    //         void function(RenderingState rendering_state,
    //             GraphicsAPI graphics_api, void* user_data) callback, void function(void* user_data) drop_user_data,
    //         void* user_data, SetRenderingNotifierError* error);

    // /// C binding to the on_close_requested() API of Window
    // void slint_windowrc_on_close_requested(const WindowAdapterRcOpaque* handle,
    //         CloseRequestResponse function(void* user_data) callback,
    //         void function(void* user_data) drop_user_data, void* user_data);

    /// This function issues a request to the windowing system to redraw the contents of the window.
    void slint_windowrc_request_redraw(const WindowAdapterRcOpaque* handle);

    /// Returns the position of the window on the screen, in physical screen coordinates and including
    /// a window frame (if present).
    void slint_windowrc_position(const WindowAdapterRcOpaque* handle, Point2D!(int32_t)* pos);

    /// Sets the position of the window on the screen, in physical screen coordinates and including
    /// a window frame (if present).
    /// Note that on some windowing systems, such as Wayland, this functionality is not available.
    void slint_windowrc_set_physical_position(const WindowAdapterRcOpaque* handle,
            const Point2D!(int32_t)* pos);

    /// Sets the position of the window on the screen, in physical screen coordinates and including
    /// a window frame (if present).
    /// Note that on some windowing systems, such as Wayland, this functionality is not available.
    void slint_windowrc_set_logical_position(const WindowAdapterRcOpaque* handle,
            const Point2D!(float)* pos);

    /// Returns the size of the window on the screen, in physical screen coordinates and excluding
    /// a window frame (if present).
    IntSize slint_windowrc_size(const WindowAdapterRcOpaque* handle);

    /// Resizes the window to the specified size on the screen, in physical pixels and excluding
    /// a window frame (if present).
    void slint_windowrc_set_physical_size(const WindowAdapterRcOpaque* handle, const IntSize* size);

    // TODO: enable later
    /// Resizes the window to the specified size on the screen, in physical pixels and excluding
    /// a window frame (if present).
    // void slint_windowrc_set_logical_size(const WindowAdapterRcOpaque* handle, const Size* size);

    /// Return whether the style is using a dark theme
    ColorScheme slint_windowrc_color_scheme(const WindowAdapterRcOpaque* handle);

    /// Return whether the platform supports native menu bars
    bool slint_windowrc_supports_native_menu_bar(const WindowAdapterRcOpaque* handle);

    // TODO: enable later
    /// Setup the native menu bar
    // void slint_windowrc_setup_native_menu_bar(const WindowAdapterRcOpaque* handle,
    //         const VRc!(MenuVTable)* menu_instance);

    // /// Show a native context menu
    // bool slint_windowrc_show_native_popup_menu(const WindowAdapterRcOpaque* handle,
    //         const VRc!(MenuVTable)* context_menu, LogicalPosition position,
    //         const ItemRc* parent_item);

    /// Return the default-font-size property of the WindowItem
    float slint_windowrc_resolved_default_font_size(const ItemTreeRc item_tree);

    /// Dispatch a key pressed or release event
    void slint_windowrc_dispatch_key_event(const WindowAdapterRcOpaque* handle,
            KeyEventType event_type, const SharedString* text, bool repeat);

    // /// Dispatch a mouse event
    void slint_windowrc_dispatch_pointer_event(const WindowAdapterRcOpaque* handle,
            const MouseEvent* event);

    /// Dispatch a window event
    void slint_windowrc_dispatch_event(const WindowAdapterRcOpaque* handle, const WindowEvent* event);

    bool slint_windowrc_is_fullscreen(const WindowAdapterRcOpaque* handle);

    bool slint_windowrc_is_minimized(const WindowAdapterRcOpaque* handle);

    bool slint_windowrc_is_maximized(const WindowAdapterRcOpaque* handle);

    void slint_windowrc_set_fullscreen(const WindowAdapterRcOpaque* handle, bool value);

    void slint_windowrc_set_minimized(const WindowAdapterRcOpaque* handle, bool value);

    void slint_windowrc_set_maximized(const WindowAdapterRcOpaque* handle, bool value);

    // TODO: enable later
    /// Takes a snapshot of the window contents and returns it as RGBA8 encoded pixel buffer.
    // bool slint_windowrc_take_snapshot(const WindowAdapterRcOpaque* handle,
    // SharedVector!(Rgba8Pixel)* data, uint32_t* width, uint32_t* height);

} // extern "C"
