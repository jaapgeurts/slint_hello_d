// This file is auto-generated
#pragma once
#include <array>
#include <limits>
#include <slint.h>
static_assert(1 == SLINT_VERSION_MAJOR && 14 == SLINT_VERSION_MINOR && 1 == SLINT_VERSION_PATCH, "This file was generated with Slint compiler version 1.14.1, but the Slint library used is " SLINT_VERSION_STRING ". The version numbers must match exactly.");
class Recipe;

class SharedGlobals;

class LineEditBase_root_1;

class LineEditClearIcon_root_11;

class LineEditPasswordIcon_root_13;

class LineEdit_root_15;

class FocusBorder_root_24;

class Button_root_26;

class MenuItemBase_root_38;

class MenuItem_root_53;

class Component_empty_6 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class LineEditBase_root_1 const> parent;
    slint::cbindgen_private::Empty empty_6 = {};
    slint::cbindgen_private::MenuItem menuitem_7 = {};
    slint::cbindgen_private::MenuItem menuitem_8 = {};
    slint::cbindgen_private::MenuItem menuitem_9 = {};
    slint::cbindgen_private::MenuItem menuitem_10 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class LineEditBase_root_1 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class LineEditBase_root_1 const * parent) -> slint::ComponentHandle<Component_empty_6>;
    ~Component_empty_6 ();
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_6>;
};

class LineEditBase_root_1 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Callback<void(slint::SharedString)> root_1_accepted;
    slint::private_api::Callback<void(slint::SharedString)> root_1_edited;
    slint::private_api::Property<bool> root_1_has_focus;
    slint::private_api::Property<float> root_1_height;
    slint::private_api::Callback<slint::cbindgen_private::EventResult(slint::private_api::KeyEvent)> root_1_key_pressed;
    slint::private_api::Callback<slint::cbindgen_private::EventResult(slint::private_api::KeyEvent)> root_1_key_released;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_1_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_1_layoutinfo_v;
    slint::private_api::Property<float> root_1_margin;
    slint::private_api::Property<float> root_1_placeholder_3_horizontal_stretch;
    slint::private_api::Property<float> root_1_placeholder_3_max_height;
    slint::private_api::Property<float> root_1_placeholder_3_max_width;
    slint::private_api::Property<float> root_1_placeholder_3_min_height;
    slint::private_api::Property<float> root_1_placeholder_3_min_width;
    slint::private_api::Property<float> root_1_placeholder_3_preferred_height;
    slint::private_api::Property<float> root_1_placeholder_3_preferred_width;
    slint::private_api::Property<float> root_1_placeholder_3_vertical_stretch;
    slint::private_api::Property<slint::Brush> root_1_placeholder_color;
    slint::private_api::Property<slint::SharedString> root_1_placeholder_text;
    slint::private_api::Property<slint::Brush> root_1_text_color;
    slint::private_api::Property<float> root_1_text_input_5_computed_x;
    slint::private_api::Property<float> root_1_text_input_5_preferred_height;
    slint::private_api::Property<float> root_1_text_input_5_preferred_width;
    slint::private_api::Property<float> root_1_text_input_5_x;
    slint::private_api::Property<float> root_1_width;
    slint::private_api::Property<float> root_1_x;
    slint::cbindgen_private::Empty root_1 = {};
    slint::cbindgen_private::Clip root_clip_2 = {};
    slint::cbindgen_private::ComplexText placeholder_3 = {};
    slint::cbindgen_private::ContextMenu contextmenuinternal_4 = {};
    slint::cbindgen_private::TextInput text_input_5 = {};
    auto fn_clear_focus () const -> void;
    auto fn_clear_selection () const -> void;
    auto fn_copy () const -> void;
    auto fn_cut () const -> void;
    auto fn_focus () const -> void;
    auto fn_paste () const -> void;
    auto fn_select_all () const -> void;
    auto fn_set_selection_offsets (int arg_0, int arg_1) const -> void;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
};

class LineEditClearIcon_root_11 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Callback<void()> root_11_clear;
    slint::private_api::Property<float> root_11_x;
    slint::cbindgen_private::ClippedImage root_11 = {};
    slint::cbindgen_private::TouchArea toucharea_12 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
};

class LineEditPasswordIcon_root_13 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<slint::Image> root_13_hide_password_image;
    slint::private_api::Property<bool> root_13_show_password;
    slint::private_api::Callback<void(bool)> root_13_show_password_changed;
    slint::private_api::Property<slint::Image> root_13_show_password_image;
    slint::private_api::Property<float> root_13_x;
    slint::cbindgen_private::ClippedImage root_13 = {};
    slint::cbindgen_private::TouchArea toucharea_14 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
};

class Component_lineeditclearicon_19 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class LineEdit_root_15 const> parent;
    LineEditClearIcon_root_11 lineeditclearicon_19;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class LineEdit_root_15 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class LineEdit_root_15 const * parent) -> slint::ComponentHandle<Component_lineeditclearicon_19>;
    ~Component_lineeditclearicon_19 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_lineeditclearicon_19>;
};

class Component_lineeditpasswordicon_21 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class LineEdit_root_15 const> parent;
    LineEditPasswordIcon_root_13 lineeditpasswordicon_21;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class LineEdit_root_15 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class LineEdit_root_15 const * parent) -> slint::ComponentHandle<Component_lineeditpasswordicon_21>;
    ~Component_lineeditpasswordicon_21 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_lineeditpasswordicon_21>;
};

class LineEdit_root_15 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Callback<void(slint::SharedString)> root_15_accessible_action_set_value;
    slint::private_api::Property<float> root_15_background_16_width;
    slint::private_api::Property<float> root_15_height;
    slint::private_api::Property<slint::SharedVector<float>> root_15_layout_17_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_15_layout_17_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_15_layout_17_layoutinfo_v;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_15_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_15_layoutinfo_v;
    slint::private_api::Property<int> root_15_state;
    slint::private_api::Property<float> root_15_width;
    slint::private_api::Property<float> root_15_x;
    slint::private_api::Property<float> root_15_y;
    LineEditBase_root_1 base_18;
    slint::cbindgen_private::Empty root_15 = {};
    slint::cbindgen_private::BasicBorderRectangle background_16 = {};
    slint::cbindgen_private::Rectangle focus_border_23 = {};
    slint::private_api::Conditional<class Component_lineeditclearicon_19> repeater_0;
    slint::private_api::Conditional<class Component_lineeditpasswordicon_21> repeater_1;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
};

class FocusBorder_root_24 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<float> root_24_height;
    slint::private_api::Property<float> root_24_width;
    slint::cbindgen_private::BasicBorderRectangle root_24 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_25 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
};

class Component_image_30 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Button_root_26 const> parent;
    slint::cbindgen_private::ImageItem image_30 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Button_root_26 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Button_root_26 const * parent) -> slint::ComponentHandle<Component_image_30>;
    ~Component_image_30 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_image_30>;
};

class Component_text_32 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Button_root_26 const> parent;
    slint::cbindgen_private::SimpleText text_32 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Button_root_26 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Button_root_26 const * parent) -> slint::ComponentHandle<Component_text_32>;
    ~Component_text_32 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_text_32>;
};

class Component_focusborder_36 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Button_root_26 const> parent;
    FocusBorder_root_24 focusborder_36;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Button_root_26 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Button_root_26 const * parent) -> slint::ComponentHandle<Component_focusborder_36>;
    ~Component_focusborder_36 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_focusborder_36>;
};

class Button_root_26 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Callback<void()> root_26_accessible_action_default;
    slint::private_api::Property<bool> root_26_checked;
    slint::private_api::Callback<void()> root_26_clicked;
    slint::private_api::Property<bool> root_26_has_focus;
    slint::private_api::Property<float> root_26_height;
    slint::private_api::Property<float> root_26_i_background_27_width;
    slint::private_api::Property<slint::SharedVector<float>> root_26_i_layout_29_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_26_i_layout_29_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_26_i_layout_29_layoutinfo_v;
    slint::private_api::Property<slint::Image> root_26_icon;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_26_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_26_layoutinfo_v;
    slint::private_api::Property<bool> root_26_pressed;
    slint::private_api::Property<int> root_26_state;
    slint::private_api::Property<slint::SharedString> root_26_text;
    slint::private_api::Property<slint::Brush> root_26_text_color;
    slint::private_api::Property<float> root_26_width;
    slint::private_api::Property<float> root_26_x;
    slint::private_api::Property<float> root_26_y;
    slint::cbindgen_private::Empty root_26 = {};
    slint::cbindgen_private::BasicBorderRectangle i_background_27 = {};
    slint::cbindgen_private::BasicBorderRectangle i_border_28 = {};
    slint::cbindgen_private::TouchArea i_touch_area_34 = {};
    slint::cbindgen_private::FocusScope i_focus_scope_35 = {};
    slint::private_api::Conditional<class Component_image_30> repeater_0;
    slint::private_api::Conditional<class Component_text_32> repeater_1;
    slint::private_api::Conditional<class Component_focusborder_36> repeater_2;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
};

class Component_text_44 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MenuItemBase_root_38 const> parent;
    slint::private_api::Property<float> text_44_min_height;
    slint::private_api::Property<float> text_44_min_width;
    slint::private_api::Property<float> text_44_preferred_height;
    slint::private_api::Property<float> text_44_preferred_width;
    slint::private_api::Property<float> text_44_x;
    slint::private_api::Property<float> text_44_y;
    slint::cbindgen_private::SimpleText text_44 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MenuItemBase_root_38 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MenuItemBase_root_38 const * parent) -> slint::ComponentHandle<Component_text_44>;
    ~Component_text_44 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_text_44>;
};

class Component_image_49 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MenuItemBase_root_38 const> parent;
    slint::cbindgen_private::ImageItem image_49 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MenuItemBase_root_38 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MenuItemBase_root_38 const * parent) -> slint::ComponentHandle<Component_image_49>;
    ~Component_image_49 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_image_49>;
};

class Component_rectangle_51 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MenuItemBase_root_38 const> parent;
    slint::cbindgen_private::Rectangle rectangle_51 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MenuItemBase_root_38 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MenuItemBase_root_38 const * parent) -> slint::ComponentHandle<Component_rectangle_51>;
    ~Component_rectangle_51 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_51>;
};

class MenuItemBase_root_38 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Callback<void(slint::private_api::MenuEntry, float)> root_38_activate;
    slint::private_api::Property<float> root_38_background_layer_39_height;
    slint::private_api::Property<float> root_38_background_layer_39_width;
    slint::private_api::Callback<void()> root_38_clear_current;
    slint::private_api::Property<slint::Brush> root_38_current_background;
    slint::private_api::Property<slint::Brush> root_38_current_foreground;
    slint::private_api::Property<slint::Brush> root_38_default_foreground;
    slint::private_api::Property<slint::private_api::MenuEntry> root_38_entry;
    slint::private_api::Property<float> root_38_height;
    slint::private_api::Property<float> root_38_horizontal_padding;
    slint::private_api::Property<float> root_38_icon_size;
    slint::private_api::Property<float> root_38_image_46_preferred_height;
    slint::private_api::Property<float> root_38_image_46_preferred_width;
    slint::private_api::Property<float> root_38_image_46_y;
    slint::private_api::Property<bool> root_38_is_current;
    slint::private_api::Property<slint::private_api::FontMetrics> root_38_label_48_font_metrics;
    slint::private_api::Property<slint::SharedVector<float>> root_38_layout_42_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_38_layout_42_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_38_layout_42_layoutinfo_v;
    slint::private_api::Property<float> root_38_layout_42_spacing;
    slint::private_api::Property<slint::Brush> root_38_separator_color;
    slint::private_api::Callback<void()> root_38_set_current;
    slint::private_api::Property<int> root_38_state;
    slint::private_api::Property<slint::Image> root_38_sub_menu_icon;
    slint::private_api::Property<slint::LogicalPosition> root_38_touch_area_41_absolute_position;
    slint::private_api::Property<float> root_38_touch_area_41_height;
    slint::private_api::Property<float> root_38_touch_area_41_width;
    slint::private_api::Property<float> root_38_width;
    slint::private_api::Property<float> root_38_x;
    slint::private_api::Property<float> root_38_y;
    slint::private_api::ChangeTracker change_tracker0;
    slint::cbindgen_private::Empty root_38 = {};
    slint::cbindgen_private::BasicBorderRectangle background_layer_39 = {};
    slint::cbindgen_private::Clip touch_area_visibility_40 = {};
    slint::cbindgen_private::TouchArea touch_area_41 = {};
    slint::cbindgen_private::Empty rectangle_43 = {};
    slint::cbindgen_private::ImageItem image_46 = {};
    slint::cbindgen_private::Opacity label_Opacity_47 = {};
    slint::cbindgen_private::SimpleText label_48 = {};
    slint::private_api::Conditional<class Component_text_44> repeater_0;
    slint::private_api::Conditional<class Component_image_49> repeater_1;
    slint::private_api::Conditional<class Component_rectangle_51> repeater_2;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
};

class MenuItem_root_53 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<slint::SharedVector<float>> root_53_empty_54_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_53_empty_54_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_53_empty_54_layoutinfo_v;
    slint::private_api::Property<float> root_53_height;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_53_layoutinfo_v;
    slint::private_api::Property<float> root_53_max_height;
    slint::private_api::Property<float> root_53_min_height;
    slint::private_api::Property<float> root_53_width;
    slint::private_api::Property<float> root_53_x;
    slint::private_api::Property<float> root_53_y;
    MenuItemBase_root_38 base_55;
    slint::cbindgen_private::Empty root_53 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
};

class FluentPalette_71 {
    public:
    slint::private_api::Property<slint::Brush> background;
    slint::private_api::Property<slint::cbindgen_private::ColorScheme> color_scheme;
    slint::private_api::Property<bool> dark_color_scheme;
    slint::private_api::Property<slint::Brush> foreground;
    slint::private_api::Property<slint::Brush> selection_foreground;
    FluentPalette_71 (const class SharedGlobals *globals);
    private:
    auto init () -> void;
    const class SharedGlobals* globals;
    friend class SharedGlobals;
};

class SharedGlobals {
    public:
    std::optional<slint::Window> m_window;
    slint::cbindgen_private::ItemTreeWeak root_weak;
    auto window () const -> slint::Window&{
        auto self = const_cast<SharedGlobals *>(this);
        if (!self->m_window.has_value()) {
           auto &window = self->m_window.emplace(slint::private_api::WindowAdapterRc());
           window.window_handle().set_component(self->root_weak);
        }
        return *self->m_window;
    }
    std::shared_ptr<FluentPalette_71> global_FluentPalette_71 = std::make_shared<FluentPalette_71>(this);
    SharedGlobals (){
        global_FluentPalette_71->init();
    }
};

class Component_menuitem_67 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class PopupMenuImpl_root_60 const> parent;
    slint::private_api::Property<slint::private_api::MenuEntry> model_data;
    slint::private_api::Property<int> model_index;
    slint::private_api::Property<slint::LogicalPosition> menuitem_67_absolute_position;
    slint::private_api::ChangeTracker change_tracker0;
    MenuItem_root_53 menuitem_67;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class PopupMenuImpl_root_60 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class PopupMenuImpl_root_60 const * parent) -> slint::ComponentHandle<Component_menuitem_67>;
    ~Component_menuitem_67 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const slint::private_api::MenuEntry &data) const -> void;
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_menuitem_67>;
};

class PopupMenuImpl_root_60 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<slint::LogicalPosition> root_60_absolute_position;
    slint::private_api::Callback<void(slint::private_api::MenuEntry)> root_60_activated;
    slint::private_api::Callback<void()> root_60_close;
    slint::private_api::Property<int> root_60_current_highlight;
    slint::private_api::Property<float> root_60_current_highlight_y_pos;
    slint::private_api::Property<int> root_60_current_open;
    slint::private_api::Property<std::shared_ptr<slint::Model<slint::private_api::MenuEntry>>> root_60_entries;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_60_frame_64_layoutinfo_h;
    slint::private_api::Property<slint::SharedVector<float>> root_60_layout_66_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_60_layout_66_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_60_layout_66_layoutinfo_v;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_60_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_60_layoutinfo_v;
    slint::private_api::Property<std::int64_t> root_60_optimized_open_sub_menu_after_timeout_61_interval;
    slint::private_api::Property<bool> root_60_optimized_open_sub_menu_after_timeout_61_running;
    slint::private_api::Callback<void()> root_60_optimized_open_sub_menu_after_timeout_61_triggered;
    slint::private_api::Callback<std::shared_ptr<slint::Model<slint::private_api::MenuEntry>>(slint::private_api::MenuEntry)> root_60_sub_menu;
    slint::private_api::Property<slint::LogicalPosition> root_60_sub_menu_69_absolute_position;
    slint::private_api::Property<std::shared_ptr<slint::Model<slint::private_api::MenuEntry>>> root_60_sub_menu_69_entries;
    slint::private_api::ChangeTracker change_tracker0;
    slint::private_api::ChangeTracker change_tracker1;
    slint::cbindgen_private::WindowItem root_60 = {};
    slint::cbindgen_private::FocusScope focus_scope_62 = {};
    slint::cbindgen_private::BoxShadow frame_shadow_63 = {};
    slint::cbindgen_private::BasicBorderRectangle frame_64 = {};
    slint::cbindgen_private::Clip frame_clip_65 = {};
    slint::cbindgen_private::ContextMenu sub_menu_69 = {};
    slint::private_api::Repeater<class Component_menuitem_67, slint::private_api::MenuEntry> repeater_0;
    slint::Timer timer0;
    auto update_timers () -> void;
    auto fn_activate (slint::private_api::MenuEntry arg_0, float arg_1, int arg_2) const -> void;
    auto fn_focus () const -> void;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (const SharedGlobals *globals) -> slint::ComponentHandle<PopupMenuImpl_root_60>;
    ~PopupMenuImpl_root_60 ();
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, PopupMenuImpl_root_60>;
};

class Recipe {
    SharedGlobals m_globals;
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    private:
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<int> root_56_counter;
    slint::private_api::Property<slint::SharedVector<float>> root_56_empty_57_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_56_empty_57_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_56_empty_57_layoutinfo_v;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_56_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_56_layoutinfo_v;
    slint::private_api::Callback<void(int, int)> root_56_on_clicked;
    LineEdit_root_15 lineedit1_58;
    Button_root_26 button_59;
    slint::cbindgen_private::WindowItem root_56 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create () -> slint::ComponentHandle<Recipe>;
    ~Recipe ();
    auto get_counter () const -> int;
    auto set_counter (const int &value) const -> void;
    auto invoke_on_clicked (int arg_0, int arg_1) const -> void;
    template<std::invocable<int, int> Functor> auto on_on_clicked (Functor && callback_handler) const;
    auto invoke_on_text (slint::SharedString arg_0) const -> void;
    template<std::invocable<slint::SharedString> Functor> auto on_on_text (Functor && callback_handler) const;
    auto show () -> void;
    auto hide () -> void;
    auto window () const -> slint::Window&;
    auto run () -> void;
    friend class FluentPalette_71;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Recipe>;
    friend class slint::private_api::WindowAdapterRc;
};

const uint8_t slint_embedded_resource_3[181] = { 0x3c
,0x73,0x76,0x67,0x20,0x78,0x6d,0x6c,0x6e,0x73,0x3d,0x22,0x68,0x74,0x74,0x70,0x3a
,0x2f,0x2f,0x77,0x77,0x77,0x2e,0x77,0x33,0x2e,0x6f,0x72,0x67,0x2f,0x32,0x30,0x30
,0x30,0x2f,0x73,0x76,0x67,0x22,0x20,0x68,0x65,0x69,0x67,0x68,0x74,0x3d,0x22,0x32
,0x34,0x70,0x78,0x22,0x20,0x76,0x69,0x65,0x77,0x42,0x6f,0x78,0x3d,0x22,0x30,0x20
,0x2d,0x39,0x36,0x30,0x20,0x39,0x36,0x30,0x20,0x39,0x36,0x30,0x22,0x20,0x77,0x69
,0x64,0x74,0x68,0x3d,0x22,0x32,0x34,0x70,0x78,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d
,0x22,0x23,0x65,0x38,0x65,0x61,0x65,0x64,0x22,0x3e,0xa,0x20,0x20,0x3c,0x70,0x61
,0x74,0x68,0x20,0x64,0x3d,0x22,0x6d,0x33,0x32,0x31,0x2d,0x38,0x30,0x2d,0x37,0x31
,0x2d,0x37,0x31,0x20,0x33,0x32,0x39,0x2d,0x33,0x32,0x39,0x2d,0x33,0x32,0x39,0x2d
,0x33,0x32,0x39,0x20,0x37,0x31,0x2d,0x37,0x31,0x20,0x34,0x30,0x30,0x20,0x34,0x30
,0x30,0x4c,0x33,0x32,0x31,0x2d,0x38,0x30,0x5a,0x22,0x2f,0x3e,0xa,0x3c,0x2f,0x73
,0x76,0x67,0x3e,0xa};

const uint8_t slint_embedded_resource_0[419] = { 0x3c
,0x73,0x76,0x67,0x20,0x77,0x69,0x64,0x74,0x68,0x3d,0x22,0x32,0x34,0x22,0x20,0x68
,0x65,0x69,0x67,0x68,0x74,0x3d,0x22,0x32,0x34,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d
,0x22,0x6e,0x6f,0x6e,0x65,0x22,0x20,0x76,0x69,0x65,0x77,0x42,0x6f,0x78,0x3d,0x22
,0x30,0x20,0x30,0x20,0x32,0x34,0x20,0x32,0x34,0x22,0x20,0x78,0x6d,0x6c,0x6e,0x73
,0x3d,0x22,0x68,0x74,0x74,0x70,0x3a,0x2f,0x2f,0x77,0x77,0x77,0x2e,0x77,0x33,0x2e
,0x6f,0x72,0x67,0x2f,0x32,0x30,0x30,0x30,0x2f,0x73,0x76,0x67,0x22,0x3e,0x3c,0x70
,0x61,0x74,0x68,0x20,0x64,0x3d,0x22,0x6d,0x34,0x2e,0x33,0x39,0x37,0x20,0x34,0x2e
,0x35,0x35,0x34,0x2e,0x30,0x37,0x33,0x2d,0x2e,0x30,0x38,0x34,0x61,0x2e,0x37,0x35
,0x2e,0x37,0x35,0x20,0x30,0x20,0x30,0x20,0x31,0x20,0x2e,0x39,0x37,0x36,0x2d,0x2e
,0x30,0x37,0x33,0x6c,0x2e,0x30,0x38,0x34,0x2e,0x30,0x37,0x33,0x4c,0x31,0x32,0x20
,0x31,0x30,0x2e,0x39,0x33,0x39,0x6c,0x36,0x2e,0x34,0x37,0x2d,0x36,0x2e,0x34,0x37
,0x61,0x2e,0x37,0x35,0x2e,0x37,0x35,0x20,0x30,0x20,0x31,0x20,0x31,0x20,0x31,0x2e
,0x30,0x36,0x20,0x31,0x2e,0x30,0x36,0x31,0x4c,0x31,0x33,0x2e,0x30,0x36,0x31,0x20
,0x31,0x32,0x6c,0x36,0x2e,0x34,0x37,0x20,0x36,0x2e,0x34,0x37,0x61,0x2e,0x37,0x35
,0x2e,0x37,0x35,0x20,0x30,0x20,0x30,0x20,0x31,0x20,0x2e,0x30,0x37,0x32,0x2e,0x39
,0x37,0x36,0x6c,0x2d,0x2e,0x30,0x37,0x33,0x2e,0x30,0x38,0x34,0x61,0x2e,0x37,0x35
,0x2e,0x37,0x35,0x20,0x30,0x20,0x30,0x20,0x31,0x2d,0x2e,0x39,0x37,0x36,0x2e,0x30
,0x37,0x33,0x6c,0x2d,0x2e,0x30,0x38,0x34,0x2d,0x2e,0x30,0x37,0x33,0x4c,0x31,0x32
,0x20,0x31,0x33,0x2e,0x30,0x36,0x31,0x6c,0x2d,0x36,0x2e,0x34,0x37,0x20,0x36,0x2e
,0x34,0x37,0x61,0x2e,0x37,0x35,0x2e,0x37,0x35,0x20,0x30,0x20,0x30,0x20,0x31,0x2d
,0x31,0x2e,0x30,0x36,0x2d,0x31,0x2e,0x30,0x36,0x31,0x4c,0x31,0x30,0x2e,0x39,0x33
,0x39,0x20,0x31,0x32,0x6c,0x2d,0x36,0x2e,0x34,0x37,0x2d,0x36,0x2e,0x34,0x37,0x61
,0x2e,0x37,0x35,0x2e,0x37,0x35,0x20,0x30,0x20,0x30,0x20,0x31,0x2d,0x2e,0x30,0x37
,0x32,0x2d,0x2e,0x39,0x37,0x36,0x6c,0x2e,0x30,0x37,0x33,0x2d,0x2e,0x30,0x38,0x34
,0x2d,0x2e,0x30,0x37,0x33,0x2e,0x30,0x38,0x34,0x5a,0x22,0x20,0x66,0x69,0x6c,0x6c
,0x3d,0x22,0x23,0x32,0x31,0x32,0x31,0x32,0x31,0x22,0x2f,0x3e,0x3c,0x2f,0x73,0x76
,0x67,0x3e};

const uint8_t slint_embedded_resource_1[670] = { 0x3c
,0x73,0x76,0x67,0x20,0x77,0x69,0x64,0x74,0x68,0x3d,0x22,0x32,0x34,0x22,0x20,0x68
,0x65,0x69,0x67,0x68,0x74,0x3d,0x22,0x32,0x34,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d
,0x22,0x6e,0x6f,0x6e,0x65,0x22,0x20,0x76,0x69,0x65,0x77,0x42,0x6f,0x78,0x3d,0x22
,0x30,0x20,0x30,0x20,0x32,0x34,0x20,0x32,0x34,0x22,0x20,0x78,0x6d,0x6c,0x6e,0x73
,0x3d,0x22,0x68,0x74,0x74,0x70,0x3a,0x2f,0x2f,0x77,0x77,0x77,0x2e,0x77,0x33,0x2e
,0x6f,0x72,0x67,0x2f,0x32,0x30,0x30,0x30,0x2f,0x73,0x76,0x67,0x22,0x3e,0x3c,0x70
,0x61,0x74,0x68,0x20,0x64,0x3d,0x22,0x4d,0x32,0x2e,0x32,0x32,0x20,0x32,0x2e,0x32
,0x32,0x61,0x2e,0x37,0x35,0x2e,0x37,0x35,0x20,0x30,0x20,0x30,0x20,0x30,0x2d,0x2e
,0x30,0x37,0x33,0x2e,0x39,0x37,0x36,0x6c,0x2e,0x30,0x37,0x33,0x2e,0x30,0x38,0x34
,0x20,0x34,0x2e,0x30,0x33,0x34,0x20,0x34,0x2e,0x30,0x33,0x35,0x61,0x39,0x2e,0x39
,0x38,0x36,0x20,0x39,0x2e,0x39,0x38,0x36,0x20,0x30,0x20,0x30,0x20,0x30,0x2d,0x33
,0x2e,0x39,0x35,0x35,0x20,0x35,0x2e,0x37,0x35,0x2e,0x37,0x35,0x2e,0x37,0x35,0x20
,0x30,0x20,0x30,0x20,0x30,0x20,0x31,0x2e,0x34,0x35,0x35,0x2e,0x33,0x36,0x34,0x20
,0x38,0x2e,0x34,0x39,0x20,0x38,0x2e,0x34,0x39,0x20,0x30,0x20,0x30,0x20,0x31,0x20
,0x33,0x2e,0x35,0x38,0x2d,0x35,0x2e,0x30,0x33,0x34,0x6c,0x31,0x2e,0x38,0x31,0x20
,0x31,0x2e,0x38,0x31,0x41,0x34,0x20,0x34,0x20,0x30,0x20,0x30,0x20,0x30,0x20,0x31
,0x34,0x2e,0x38,0x20,0x31,0x35,0x2e,0x38,0x36,0x6c,0x35,0x2e,0x39,0x31,0x39,0x20
,0x35,0x2e,0x39,0x32,0x61,0x2e,0x37,0x35,0x2e,0x37,0x35,0x20,0x30,0x20,0x30,0x20
,0x30,0x20,0x31,0x2e,0x31,0x33,0x33,0x2d,0x2e,0x39,0x37,0x37,0x6c,0x2d,0x2e,0x30
,0x37,0x33,0x2d,0x2e,0x30,0x38,0x34,0x2d,0x36,0x2e,0x31,0x31,0x33,0x2d,0x36,0x2e
,0x31,0x31,0x34,0x2e,0x30,0x30,0x31,0x2d,0x2e,0x30,0x30,0x32,0x2d,0x31,0x2e,0x32
,0x2d,0x31,0x2e,0x31,0x39,0x38,0x2d,0x32,0x2e,0x38,0x37,0x2d,0x32,0x2e,0x38,0x37
,0x68,0x2e,0x30,0x30,0x32,0x4c,0x38,0x2e,0x37,0x31,0x39,0x20,0x37,0x2e,0x36,0x35
,0x38,0x6c,0x2e,0x30,0x30,0x31,0x2d,0x2e,0x30,0x30,0x32,0x2d,0x31,0x2e,0x31,0x33
,0x33,0x2d,0x31,0x2e,0x31,0x33,0x4c,0x33,0x2e,0x32,0x38,0x20,0x32,0x2e,0x32,0x32
,0x61,0x2e,0x37,0x35,0x2e,0x37,0x35,0x20,0x30,0x20,0x30,0x20,0x30,0x2d,0x31,0x2e
,0x30,0x36,0x20,0x30,0x5a,0x6d,0x37,0x2e,0x39,0x38,0x34,0x20,0x39,0x2e,0x30,0x34
,0x35,0x20,0x33,0x2e,0x35,0x33,0x35,0x20,0x33,0x2e,0x35,0x33,0x36,0x61,0x32,0x2e
,0x35,0x20,0x32,0x2e,0x35,0x20,0x30,0x20,0x30,0x20,0x31,0x2d,0x33,0x2e,0x35,0x33
,0x35,0x2d,0x33,0x2e,0x35,0x33,0x35,0x5a,0x4d,0x31,0x32,0x20,0x35,0x2e,0x35,0x63
,0x2d,0x31,0x20,0x30,0x2d,0x31,0x2e,0x39,0x37,0x2e,0x31,0x34,0x38,0x2d,0x32,0x2e
,0x38,0x38,0x39,0x2e,0x34,0x32,0x35,0x6c,0x31,0x2e,0x32,0x33,0x37,0x20,0x31,0x2e
,0x32,0x33,0x36,0x61,0x38,0x2e,0x35,0x30,0x33,0x20,0x38,0x2e,0x35,0x30,0x33,0x20
,0x30,0x20,0x30,0x20,0x31,0x20,0x39,0x2e,0x38,0x39,0x39,0x20,0x36,0x2e,0x32,0x37
,0x32,0x2e,0x37,0x35,0x2e,0x37,0x35,0x20,0x30,0x20,0x30,0x20,0x30,0x20,0x31,0x2e
,0x34,0x35,0x35,0x2d,0x2e,0x33,0x36,0x33,0x41,0x31,0x30,0x2e,0x30,0x30,0x33,0x20
,0x31,0x30,0x2e,0x30,0x30,0x33,0x20,0x30,0x20,0x30,0x20,0x30,0x20,0x31,0x32,0x20
,0x35,0x2e,0x35,0x5a,0x6d,0x2e,0x31,0x39,0x35,0x20,0x33,0x2e,0x35,0x31,0x20,0x33
,0x2e,0x38,0x30,0x31,0x20,0x33,0x2e,0x38,0x61,0x34,0x2e,0x30,0x30,0x33,0x20,0x34
,0x2e,0x30,0x30,0x33,0x20,0x30,0x20,0x30,0x20,0x30,0x2d,0x33,0x2e,0x38,0x30,0x31
,0x2d,0x33,0x2e,0x38,0x5a,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d,0x22,0x23,0x32,0x31
,0x32,0x31,0x32,0x31,0x22,0x2f,0x3e,0x3c,0x2f,0x73,0x76,0x67,0x3e};

const uint8_t slint_embedded_resource_2[350] = { 0x3c
,0x73,0x76,0x67,0x20,0x77,0x69,0x64,0x74,0x68,0x3d,0x22,0x32,0x34,0x22,0x20,0x68
,0x65,0x69,0x67,0x68,0x74,0x3d,0x22,0x32,0x34,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d
,0x22,0x6e,0x6f,0x6e,0x65,0x22,0x20,0x76,0x69,0x65,0x77,0x42,0x6f,0x78,0x3d,0x22
,0x30,0x20,0x30,0x20,0x32,0x34,0x20,0x32,0x34,0x22,0x20,0x78,0x6d,0x6c,0x6e,0x73
,0x3d,0x22,0x68,0x74,0x74,0x70,0x3a,0x2f,0x2f,0x77,0x77,0x77,0x2e,0x77,0x33,0x2e
,0x6f,0x72,0x67,0x2f,0x32,0x30,0x30,0x30,0x2f,0x73,0x76,0x67,0x22,0x3e,0x3c,0x70
,0x61,0x74,0x68,0x20,0x64,0x3d,0x22,0x4d,0x31,0x32,0x20,0x39,0x2e,0x30,0x30,0x35
,0x61,0x34,0x20,0x34,0x20,0x30,0x20,0x31,0x20,0x31,0x20,0x30,0x20,0x38,0x20,0x34
,0x20,0x34,0x20,0x30,0x20,0x30,0x20,0x31,0x20,0x30,0x2d,0x38,0x5a,0x6d,0x30,0x20
,0x31,0x2e,0x35,0x61,0x32,0x2e,0x35,0x20,0x32,0x2e,0x35,0x20,0x30,0x20,0x31,0x20
,0x30,0x20,0x30,0x20,0x35,0x20,0x32,0x2e,0x35,0x20,0x32,0x2e,0x35,0x20,0x30,0x20
,0x30,0x20,0x30,0x20,0x30,0x2d,0x35,0x5a,0x4d,0x31,0x32,0x20,0x35,0x2e,0x35,0x63
,0x34,0x2e,0x36,0x31,0x33,0x20,0x30,0x20,0x38,0x2e,0x35,0x39,0x36,0x20,0x33,0x2e
,0x31,0x35,0x20,0x39,0x2e,0x37,0x30,0x31,0x20,0x37,0x2e,0x35,0x36,0x34,0x61,0x2e
,0x37,0x35,0x2e,0x37,0x35,0x20,0x30,0x20,0x31,0x20,0x31,0x2d,0x31,0x2e,0x34,0x35
,0x35,0x2e,0x33,0x36,0x35,0x20,0x38,0x2e,0x35,0x30,0x33,0x20,0x38,0x2e,0x35,0x30
,0x33,0x20,0x30,0x20,0x30,0x20,0x30,0x2d,0x31,0x36,0x2e,0x34,0x39,0x33,0x2e,0x30
,0x30,0x34,0x2e,0x37,0x35,0x2e,0x37,0x35,0x20,0x30,0x20,0x30,0x20,0x31,0x2d,0x31
,0x2e,0x34,0x35,0x35,0x2d,0x2e,0x33,0x36,0x33,0x41,0x31,0x30,0x2e,0x30,0x30,0x33
,0x20,0x31,0x30,0x2e,0x30,0x30,0x33,0x20,0x30,0x20,0x30,0x20,0x31,0x20,0x31,0x32
,0x20,0x35,0x2e,0x35,0x5a,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d,0x22,0x23,0x32,0x31
,0x32,0x31,0x32,0x31,0x22,0x2f,0x3e,0x3c,0x2f,0x73,0x76,0x67,0x3e};

inline const slint::private_api::ItemTreeVTable Component_empty_6::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_empty_6>, slint::private_api::dealloc };

inline auto Component_empty_6::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class LineEditBase_root_1 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const LineEditBase_root_1>(parent->self_weak.lock().value(), parent);
    self->menuitem_7.activated.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        slint_textinput_cut(&self->parent.lock().value()->text_input_5, &self->globals->window().window_handle().handle(), &self->parent.lock().value()->self_weak.lock()->into_dyn(), self->parent.lock().value()->tree_index_of_first_child + 4 - 1);
                    });
    self->menuitem_7.checkable.set(false);
    self->menuitem_7.checked.set(false);
    self->menuitem_7.enabled.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((! self->parent.lock().value()->text_input_5.read_only.get()) && self->parent.lock().value()->text_input_5.enabled.get());
                        });
    self->menuitem_7.title.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::translate(slint::SharedString(u8"Cut"),slint::SharedString(u8"LineEditBase"),slint::SharedString(u8""),slint::private_api::make_slice<slint::SharedString>(std::array<slint::SharedString, 0>{  }.data(), 0),1,slint::SharedString(u8""));
                        });
    self->menuitem_8.activated.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        slint_textinput_copy(&self->parent.lock().value()->text_input_5, &self->globals->window().window_handle().handle(), &self->parent.lock().value()->self_weak.lock()->into_dyn(), self->parent.lock().value()->tree_index_of_first_child + 4 - 1);
                    });
    self->menuitem_8.checkable.set(false);
    self->menuitem_8.checked.set(false);
    self->menuitem_8.enabled.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (! self->parent.lock().value()->text_input_5.text.get().empty());
                        });
    self->menuitem_8.title.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::translate(slint::SharedString(u8"Copy"),slint::SharedString(u8"LineEditBase"),slint::SharedString(u8""),slint::private_api::make_slice<slint::SharedString>(std::array<slint::SharedString, 0>{  }.data(), 0),1,slint::SharedString(u8""));
                        });
    self->menuitem_9.activated.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        slint_textinput_paste(&self->parent.lock().value()->text_input_5, &self->globals->window().window_handle().handle(), &self->parent.lock().value()->self_weak.lock()->into_dyn(), self->parent.lock().value()->tree_index_of_first_child + 4 - 1);
                    });
    self->menuitem_9.checkable.set(false);
    self->menuitem_9.checked.set(false);
    self->menuitem_9.enabled.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((! self->parent.lock().value()->text_input_5.read_only.get()) && self->parent.lock().value()->text_input_5.enabled.get());
                        });
    self->menuitem_9.title.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::translate(slint::SharedString(u8"Paste"),slint::SharedString(u8"LineEditBase"),slint::SharedString(u8""),slint::private_api::make_slice<slint::SharedString>(std::array<slint::SharedString, 0>{  }.data(), 0),1,slint::SharedString(u8""));
                        });
    self->menuitem_10.activated.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        slint_textinput_select_all(&self->parent.lock().value()->text_input_5, &self->globals->window().window_handle().handle(), &self->parent.lock().value()->self_weak.lock()->into_dyn(), self->parent.lock().value()->tree_index_of_first_child + 4 - 1);
                    });
    self->menuitem_10.checkable.set(false);
    self->menuitem_10.checked.set(false);
    self->menuitem_10.enabled.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (! self->parent.lock().value()->text_input_5.text.get().empty());
                        });
    self->menuitem_10.title.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::translate(slint::SharedString(u8"Select All"),slint::SharedString(u8"LineEditBase"),slint::SharedString(u8""),slint::private_api::make_slice<slint::SharedString>(std::array<slint::SharedString, 0>{  }.data(), 0),1,slint::SharedString(u8""));
                        });
    self->menuitem_7.checkable.set_constant();
    self->menuitem_7.icon.set_constant();
    self->menuitem_8.checkable.set_constant();
    self->menuitem_8.icon.set_constant();
    self->menuitem_9.checkable.set_constant();
    self->menuitem_9.icon.set_constant();
    self->menuitem_10.checkable.set_constant();
    self->menuitem_10.icon.set_constant();
}

inline auto Component_empty_6::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto Component_empty_6::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(EmptyVTable), const_cast<slint::cbindgen_private::Empty*>(&self->empty_6), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) : slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(EmptyVTable), const_cast<slint::cbindgen_private::Empty*>(&self->empty_6), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);
}

inline auto Component_empty_6::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_empty_6::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_empty_6::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

inline auto Component_empty_6::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto Component_empty_6::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_empty_6::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_empty_6::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_empty_6*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Component_empty_6*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_empty_6::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_empty_6::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Component_empty_6::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Component_empty_6::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_empty_6::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_empty_6*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, 0 };
}

inline auto Component_empty_6::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_empty_6::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component_empty_6::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(4, 1, 0, 0, false), 
slint::private_api::make_item_node(0, 5, 0, 1, false), 
slint::private_api::make_item_node(0, 5, 0, 2, false), 
slint::private_api::make_item_node(0, 5, 0, 3, false), 
slint::private_api::make_item_node(0, 5, 0, 4, false) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Component_empty_6::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(Component_empty_6, empty_6) }, 
{ SLINT_GET_ITEM_VTABLE(MenuItemVTable),  offsetof(Component_empty_6, menuitem_7) }, 
{ SLINT_GET_ITEM_VTABLE(MenuItemVTable),  offsetof(Component_empty_6, menuitem_8) }, 
{ SLINT_GET_ITEM_VTABLE(MenuItemVTable),  offsetof(Component_empty_6, menuitem_9) }, 
{ SLINT_GET_ITEM_VTABLE(MenuItemVTable),  offsetof(Component_empty_6, menuitem_10) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Component_empty_6::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_empty_6*>(component.instance)->layout_info(o);
}

inline auto Component_empty_6::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_empty_6*>(component.instance)->item_geometry(index);
}

inline auto Component_empty_6::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_empty_6*>(component.instance)->accessible_role(index);
}

inline auto Component_empty_6::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_empty_6*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_empty_6::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_empty_6*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_empty_6::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_empty_6*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_empty_6::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_empty_6::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_empty_6*>(component.instance)->globals->window().window_handle();
}

inline auto Component_empty_6::create (class LineEditBase_root_1 const * parent) -> slint::ComponentHandle<Component_empty_6>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_6>::make();
    auto self = const_cast<Component_empty_6 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_empty_6>{ self_rc };
}

inline Component_empty_6::~Component_empty_6 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto LineEditBase_root_1::fn_clear_focus () const -> void{
    [[maybe_unused]] auto self = this;
    self->globals->window().window_handle().set_focus_item(self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 4 - 1, false, slint::cbindgen_private::FocusReason::Programmatic);;
}

inline auto LineEditBase_root_1::fn_clear_selection () const -> void{
    [[maybe_unused]] auto self = this;
    slint_textinput_clear_selection(&self->text_input_5, &self->globals->window().window_handle().handle(), &self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 4 - 1);
}

inline auto LineEditBase_root_1::fn_copy () const -> void{
    [[maybe_unused]] auto self = this;
    slint_textinput_copy(&self->text_input_5, &self->globals->window().window_handle().handle(), &self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 4 - 1);
}

inline auto LineEditBase_root_1::fn_cut () const -> void{
    [[maybe_unused]] auto self = this;
    slint_textinput_cut(&self->text_input_5, &self->globals->window().window_handle().handle(), &self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 4 - 1);
}

inline auto LineEditBase_root_1::fn_focus () const -> void{
    [[maybe_unused]] auto self = this;
    self->globals->window().window_handle().set_focus_item(self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 4 - 1, true, slint::cbindgen_private::FocusReason::Programmatic);;
}

inline auto LineEditBase_root_1::fn_paste () const -> void{
    [[maybe_unused]] auto self = this;
    slint_textinput_paste(&self->text_input_5, &self->globals->window().window_handle().handle(), &self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 4 - 1);
}

inline auto LineEditBase_root_1::fn_select_all () const -> void{
    [[maybe_unused]] auto self = this;
    slint_textinput_select_all(&self->text_input_5, &self->globals->window().window_handle().handle(), &self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 4 - 1);
}

inline auto LineEditBase_root_1::fn_set_selection_offsets (int arg_0, int arg_1) const -> void{
    [[maybe_unused]] auto self = this;
    slint_textinput_set_selection_offsets(&self->text_input_5, &self->globals->window().window_handle().handle(), &self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 4 - 1, static_cast<int>(arg_0), static_cast<int>(arg_1));
}

inline auto LineEditBase_root_1::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->root_1_has_focus.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->text_input_5.has_focus.get();
                        });
    self->root_1_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto layout_info_0 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_0.max, layout_info_0.max_percent, 1, layout_info_0.min_percent, layout_info_0.preferred, layout_info_0.stretch); }() + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->root_1_placeholder_3_max_width.get(), 100, self->root_1_placeholder_3_min_width.get(), 0, self->root_1_placeholder_3_preferred_width.get(), self->root_1_placeholder_3_horizontal_stretch.get()));
                        });
    self->root_1_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto layout_info_1 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_1.max, layout_info_1.max_percent, self->root_1_text_input_5_preferred_height.get(), layout_info_1.min_percent, layout_info_1.preferred, layout_info_1.stretch); }() + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->root_1_placeholder_3_max_height.get(), 100, self->root_1_placeholder_3_min_height.get(), 0, self->root_1_placeholder_3_preferred_height.get(), self->root_1_placeholder_3_vertical_stretch.get()));
                        });
    self->root_1_placeholder_3_horizontal_stretch.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->placeholder_3), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 2 - 1).stretch;
                        });
    self->root_1_placeholder_3_max_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->placeholder_3), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 2 - 1).max;
                        });
    self->root_1_placeholder_3_max_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->placeholder_3), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 2 - 1).max;
                        });
    self->root_1_placeholder_3_min_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->placeholder_3), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 2 - 1).min;
                        });
    self->root_1_placeholder_3_min_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->placeholder_3), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 2 - 1).min;
                        });
    self->root_1_placeholder_3_preferred_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->placeholder_3), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 2 - 1).preferred;
                        });
    self->root_1_placeholder_3_preferred_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->placeholder_3), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 2 - 1).preferred;
                        });
    self->root_1_placeholder_3_vertical_stretch.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->placeholder_3), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 2 - 1).stretch;
                        });
    self->root_1_text_input_5_preferred_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(TextInputVTable), const_cast<slint::cbindgen_private::TextInput*>(&self->text_input_5), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 4 - 1).preferred;
                        });
    self->root_1_text_input_5_preferred_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(TextInputVTable), const_cast<slint::cbindgen_private::TextInput*>(&self->text_input_5), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 4 - 1).preferred;
                        });
    self->root_1_text_input_5_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::min<float>(0, std::max<float>(((self->root_1_width.get() -(float) self->text_input_5.width.get()) -(float) 1), self->root_1_text_input_5_computed_x.get()));
                        });
    self->root_clip_2.clip.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return true;
                        });
    self->placeholder_3.color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_1_placeholder_color.get();
                        });
    self->placeholder_3.font_family.set(slint::SharedString(u8""));
    self->placeholder_3.font_italic.set(false);
    self->placeholder_3.font_size.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->text_input_5.font_size.get();
                        });
    self->placeholder_3.font_weight.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->text_input_5.font_weight.get();
                        });
    self->placeholder_3.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (1 * self->root_1_height.get());
                        });
    self->placeholder_3.horizontal_alignment.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->text_input_5.horizontal_alignment.get();
                        });
    self->placeholder_3.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> slint::SharedString { if ((self->text_input_5.text.get() == slint::SharedString(u8"")) && (self->text_input_5.preedit_text.get() == slint::SharedString(u8""))) { return self->root_1_placeholder_text.get(); } else { return slint::SharedString(u8""); }}();
                        });
    self->placeholder_3.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->placeholder_3.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (1 * self->root_1_width.get());
                        });
    self->contextmenuinternal_4.enabled.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->text_input_5.enabled.get();
                        });
    self->contextmenuinternal_4.show.set_handler(
                    [this]([[maybe_unused]] slint::LogicalPosition arg_0) {
                        [[maybe_unused]] auto self = this;
                        {
                    auto item_tree = Component_empty_6::create(self);
                    auto item_tree_dyn = item_tree.into_dyn();
                    auto menu_wrapper = slint::private_api::create_menu_wrapper(item_tree_dyn);
                    self->globals->window().window_handle().close_popup(self->contextmenuinternal_4.popup_id);
                    self->contextmenuinternal_4.popup_id = self->globals->window().window_handle().template show_popup_menu<PopupMenuImpl_root_60>(self->globals, arg_0, { self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 3 - 1 }, [self, &menu_wrapper](auto popup_menu) {
                        auto parent_weak = self->self_weak;
                        auto self_ = self;
                        auto self = popup_menu;
                        slint::private_api::setup_popup_menu_from_menu_item_tree(menu_wrapper, self->root_60_entries, self->root_60_sub_menu, self->root_60_activated);
                        self->root_60_close.set_handler([parent_weak,self = self_] { if(auto lock = parent_weak.lock()) { self->globals->window().window_handle().close_popup(self->contextmenuinternal_4.popup_id); } });
                    }, menu_wrapper);
                };
                    });
    self->text_input_5.accepted.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        self->root_1_accepted.call(self->text_input_5.text.get());
                    });
    self->text_input_5.color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_1_text_color.get();
                        });
    self->text_input_5.cursor_position_changed.set_handler(
                    [this]([[maybe_unused]] slint::LogicalPosition arg_0) {
                        [[maybe_unused]] auto self = this;
                        [&]() -> void { if ((arg_0.x + self->root_1_text_input_5_computed_x.get()) < self->root_1_margin.get()) { self->root_1_text_input_5_computed_x.set(((- arg_0.x) + self->root_1_margin.get())); } else { [&]() -> void { if ((arg_0.x + self->root_1_text_input_5_computed_x.get()) > ((self->root_1_width.get() -(float) self->root_1_margin.get()) -(float) 1)) { self->root_1_text_input_5_computed_x.set((((self->root_1_width.get() -(float) arg_0.x) -(float) self->root_1_margin.get()) -(float) 1)); } else { ; }}(); }}();
                    });
    self->text_input_5.edited.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        self->root_1_edited.call(self->text_input_5.text.get());
                    });
    self->text_input_5.enabled.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return true;
                        });
    self->text_input_5.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (1 * self->root_1_height.get());
                        });
    self->text_input_5.key_pressed.set_handler(
                    [this]([[maybe_unused]] slint::private_api::KeyEvent arg_0) {
                        [[maybe_unused]] auto self = this;
                        return self->root_1_key_pressed.call(arg_0);
                    });
    self->text_input_5.key_released.set_handler(
                    [this]([[maybe_unused]] slint::private_api::KeyEvent arg_0) {
                        [[maybe_unused]] auto self = this;
                        return self->root_1_key_released.call(arg_0);
                    });
    self->text_input_5.read_only.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return false;
                        });
    self->text_input_5.selection_background_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush(slint::Color::from_argb_encoded(+4.278221012e9)).color();
                        });
    self->text_input_5.selection_foreground_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->globals->global_FluentPalette_71->selection_foreground.get().color();
                        });
    self->text_input_5.single_line.set(true);
    self->text_input_5.text_cursor_width.set(1);
    self->text_input_5.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->text_input_5.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>((self->root_1_width.get() -(float) 1), self->root_1_text_input_5_preferred_width.get());
                        });
    self->root_clip_2.border_bottom_left_radius.set_constant();
    self->root_clip_2.border_bottom_right_radius.set_constant();
    self->root_clip_2.border_top_left_radius.set_constant();
    self->root_clip_2.border_top_right_radius.set_constant();
    self->root_clip_2.border_width.set_constant();
    self->placeholder_3.font_family.set_constant();
    self->placeholder_3.font_italic.set_constant();
    self->placeholder_3.letter_spacing.set_constant();
    self->placeholder_3.overflow.set_constant();
    self->placeholder_3.stroke.set_constant();
    self->placeholder_3.stroke_style.set_constant();
    self->placeholder_3.stroke_width.set_constant();
    self->placeholder_3.vertical_alignment.set_constant();
    self->placeholder_3.wrap.set_constant();
    self->text_input_5.font_family.set_constant();
    self->text_input_5.font_italic.set_constant();
    self->text_input_5.letter_spacing.set_constant();
    self->text_input_5.page_height.set_constant();
    self->text_input_5.single_line.set_constant();
    self->text_input_5.text_cursor_width.set_constant();
    self->text_input_5.vertical_alignment.set_constant();
    self->text_input_5.wrap.set_constant();
}

inline auto LineEditBase_root_1::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto LineEditBase_root_1::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = self->root_1_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, 1, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }() : [&]{ [[maybe_unused]] auto layout_info = self->root_1_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, self->root_1_text_input_5_preferred_height.get(), layout_info.min_percent, layout_info.preferred, layout_info.stretch); }();
}

inline auto LineEditBase_root_1::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_1_height.get()), float(self->root_1_width.get()), float(self->root_1_x.get()), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_1_height.get()), float(self->root_1_width.get()), float(0), float(0)));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float((1 * self->root_1_height.get())), float((1 * self->root_1_width.get())), float(0), float(0)));
        case 3: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_1_height.get()), float(self->root_1_width.get()), float(0), float(0)));
        case 4: return slint::private_api::convert_anonymous_rect(std::make_tuple(float((1 * self->root_1_height.get())), float(self->text_input_5.width.get()), float(self->root_1_text_input_5_x.get()), float(0)));
    }
    return {};
}

inline auto LineEditBase_root_1::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto LineEditBase_root_1::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

inline auto LineEditBase_root_1::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto LineEditBase_root_1::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto LineEditBase_root_1::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto LineEditClearIcon_root_11::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->root_11.source_clip_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->root_11.source.get().size().height -(float) static_cast<int>(0));
                        });
    self->root_11.source_clip_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->root_11.source.get().size().width -(float) static_cast<int>(0));
                        });
    self->root_11.vertical_alignment.set(slint::cbindgen_private::ImageVerticalAlignment::Center);
    self->toucharea_12.clicked.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        self->root_11_clear.call();
                    });
    self->toucharea_12.enabled.set(true);
    self->root_11.horizontal_alignment.set_constant();
    self->root_11.horizontal_tiling.set_constant();
    self->root_11.image_rendering.set_constant();
    self->root_11.source_clip_x.set_constant();
    self->root_11.source_clip_y.set_constant();
    self->root_11.vertical_alignment.set_constant();
    self->root_11.vertical_tiling.set_constant();
    self->toucharea_12.enabled.set_constant();
    self->toucharea_12.mouse_cursor.set_constant();
}

inline auto LineEditClearIcon_root_11::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto LineEditClearIcon_root_11::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ClippedImageVTable), const_cast<slint::cbindgen_private::ClippedImage*>(&self->root_11), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) : slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ClippedImageVTable), const_cast<slint::cbindgen_private::ClippedImage*>(&self->root_11), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);
}

inline auto LineEditClearIcon_root_11::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_11.height.get()), float(self->root_11.width.get()), float(self->root_11_x.get()), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_11.height.get()), float(self->root_11.width.get()), float(0), float(0)));
    }
    return {};
}

inline auto LineEditClearIcon_root_11::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::cbindgen_private::AccessibleRole::Image;
    }
    return {};
}

inline auto LineEditClearIcon_root_11::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

inline auto LineEditClearIcon_root_11::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto LineEditClearIcon_root_11::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto LineEditClearIcon_root_11::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto LineEditPasswordIcon_root_13::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->root_13.source.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> slint::Image { if (self->root_13_show_password.get()) { return self->root_13_hide_password_image.get(); } else { return self->root_13_show_password_image.get(); }}();
                        });
    self->root_13.source_clip_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->root_13.source.get().size().height -(float) static_cast<int>(0));
                        });
    self->root_13.source_clip_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->root_13.source.get().size().width -(float) static_cast<int>(0));
                        });
    self->root_13.vertical_alignment.set(slint::cbindgen_private::ImageVerticalAlignment::Center);
    self->toucharea_14.clicked.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        self->root_13_show_password_changed.call((! self->root_13_show_password.get()));
                    });
    self->toucharea_14.enabled.set(true);
    self->root_13.horizontal_alignment.set_constant();
    self->root_13.horizontal_tiling.set_constant();
    self->root_13.image_rendering.set_constant();
    self->root_13.source_clip_x.set_constant();
    self->root_13.source_clip_y.set_constant();
    self->root_13.vertical_alignment.set_constant();
    self->root_13.vertical_tiling.set_constant();
    self->toucharea_14.enabled.set_constant();
    self->toucharea_14.mouse_cursor.set_constant();
}

inline auto LineEditPasswordIcon_root_13::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto LineEditPasswordIcon_root_13::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ClippedImageVTable), const_cast<slint::cbindgen_private::ClippedImage*>(&self->root_13), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) : slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ClippedImageVTable), const_cast<slint::cbindgen_private::ClippedImage*>(&self->root_13), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);
}

inline auto LineEditPasswordIcon_root_13::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_13.height.get()), float(self->root_13.width.get()), float(self->root_13_x.get()), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_13.height.get()), float(self->root_13.width.get()), float(0), float(0)));
    }
    return {};
}

inline auto LineEditPasswordIcon_root_13::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::cbindgen_private::AccessibleRole::Image;
    }
    return {};
}

inline auto LineEditPasswordIcon_root_13::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

inline auto LineEditPasswordIcon_root_13::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto LineEditPasswordIcon_root_13::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto LineEditPasswordIcon_root_13::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline const slint::private_api::ItemTreeVTable Component_lineeditclearicon_19::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_lineeditclearicon_19>, slint::private_api::dealloc };

inline auto Component_lineeditclearicon_19::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class LineEdit_root_15 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const LineEdit_root_15>(parent->self_weak.lock().value(), parent);
    this->lineeditclearicon_19.init(globals, self_weak.into_dyn(), tree_index, tree_index_of_first_child + 1 - 1);
    self->lineeditclearicon_19.root_11_clear.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        [&]{ self->parent.lock().value()->base_18.text_input_5.text.set(slint::SharedString(u8""));self->parent.lock().value()->base_18.root_1_edited.call(slint::SharedString(u8""));self->parent.lock().value()->base_18.fn_focus(); }();
                    });
    self->lineeditclearicon_19.root_11.colorize.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->parent.lock().value()->base_18.root_1_text_color.get();
                        });
    self->lineeditclearicon_19.root_11.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->parent.lock().value()->root_15_height.get();
                        });
    self->lineeditclearicon_19.root_11.image_fit.set(slint::cbindgen_private::ImageFit::Contain);
    self->lineeditclearicon_19.root_11.source.set(slint::private_api::load_image_from_embedded_data(slint_embedded_resource_0, "svg"));
    self->lineeditclearicon_19.root_11.width.set(16);
    self->lineeditclearicon_19.root_11_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::layout_cache_access(self->parent.lock().value()->root_15_layout_17_layout_cache.get(), 2, 0);
                        });
    self->lineeditclearicon_19.root_11.horizontal_alignment.set_constant();
    self->lineeditclearicon_19.root_11.horizontal_tiling.set_constant();
    self->lineeditclearicon_19.root_11.image_fit.set_constant();
    self->lineeditclearicon_19.root_11.image_rendering.set_constant();
    self->lineeditclearicon_19.root_11.source.set_constant();
    self->lineeditclearicon_19.root_11.source_clip_x.set_constant();
    self->lineeditclearicon_19.root_11.source_clip_y.set_constant();
    self->lineeditclearicon_19.root_11.vertical_alignment.set_constant();
    self->lineeditclearicon_19.root_11.vertical_tiling.set_constant();
    self->lineeditclearicon_19.root_11.width.set_constant();
}

inline auto Component_lineeditclearicon_19::user_init () -> void{
    [[maybe_unused]] auto self = this;
    this->lineeditclearicon_19.user_init();
}

inline auto Component_lineeditclearicon_19::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ClippedImageVTable), const_cast<slint::cbindgen_private::ClippedImage*>(&self->lineeditclearicon_19.root_11), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->lineeditclearicon_19.self_weak.lock()->into_dyn(), self->lineeditclearicon_19.tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(16, layout_info.max_percent, 16, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }() : slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ClippedImageVTable), const_cast<slint::cbindgen_private::ClippedImage*>(&self->lineeditclearicon_19.root_11), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->lineeditclearicon_19.self_weak.lock()->into_dyn(), self->lineeditclearicon_19.tree_index);
}

inline auto Component_lineeditclearicon_19::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->parent.lock().value()->root_15_height.get()), float(16), float(slint::private_api::layout_cache_access(self->parent.lock().value()->root_15_layout_17_layout_cache.get(), 2, 0)), float(0)));
    }
    if (index == 0) {
        return self->lineeditclearicon_19.item_geometry(0);
    } else if (index >= 1 && index < 2) {
        return self->lineeditclearicon_19.item_geometry(index - 0);
    } else return {};
}

inline auto Component_lineeditclearicon_19::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::cbindgen_private::AccessibleRole::Image;
    }
    if (index == 0) {
        return self->lineeditclearicon_19.accessible_role(0);
    } else if (index >= 1 && index < 2) {
        return self->lineeditclearicon_19.accessible_role(index - 0);
    } else return {};
}

inline auto Component_lineeditclearicon_19::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    if (index == 0) {
        return self->lineeditclearicon_19.accessible_string_property(0, what);
    } else if (index >= 1 && index < 2) {
        return self->lineeditclearicon_19.accessible_string_property(index - 0, what);
    } else return {};
}

inline auto Component_lineeditclearicon_19::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    if (index == 0) {
        return self->lineeditclearicon_19.accessibility_action(0, action);
    } else if (index >= 1 && index < 2) {
        return self->lineeditclearicon_19.accessibility_action(index - 0, action);
    } else return ;
}

inline auto Component_lineeditclearicon_19::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 0) {
        return self->lineeditclearicon_19.supported_accessibility_actions(0);
    } else if (index >= 1 && index < 2) {
        return self->lineeditclearicon_19.supported_accessibility_actions(index - 0);
    } else return {};
}

inline auto Component_lineeditclearicon_19::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 0) {
        return self->lineeditclearicon_19.element_infos(0);
    } else if (index >= 1 && index < 2) {
        return self->lineeditclearicon_19.element_infos(index - 0);
    } else return {};
}

inline auto Component_lineeditclearicon_19::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_lineeditclearicon_19*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Component_lineeditclearicon_19*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_lineeditclearicon_19::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_lineeditclearicon_19::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Component_lineeditclearicon_19::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Component_lineeditclearicon_19::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_lineeditclearicon_19::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_lineeditclearicon_19*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 2 };
}

inline auto Component_lineeditclearicon_19::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_lineeditclearicon_19::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component_lineeditclearicon_19::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(1, 1, 0, 0, true), 
slint::private_api::make_item_node(0, 2, 0, 1, false) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Component_lineeditclearicon_19::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(ClippedImageVTable), offsetof(Component_lineeditclearicon_19, lineeditclearicon_19) +  offsetof(LineEditClearIcon_root_11, root_11) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable), offsetof(Component_lineeditclearicon_19, lineeditclearicon_19) +  offsetof(LineEditClearIcon_root_11, toucharea_12) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Component_lineeditclearicon_19::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_lineeditclearicon_19*>(component.instance)->layout_info(o);
}

inline auto Component_lineeditclearicon_19::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_lineeditclearicon_19*>(component.instance)->item_geometry(index);
}

inline auto Component_lineeditclearicon_19::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_lineeditclearicon_19*>(component.instance)->accessible_role(index);
}

inline auto Component_lineeditclearicon_19::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_lineeditclearicon_19*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_lineeditclearicon_19::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_lineeditclearicon_19*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_lineeditclearicon_19::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_lineeditclearicon_19*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_lineeditclearicon_19::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_lineeditclearicon_19::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_lineeditclearicon_19*>(component.instance)->globals->window().window_handle();
}

inline auto Component_lineeditclearicon_19::create (class LineEdit_root_15 const * parent) -> slint::ComponentHandle<Component_lineeditclearicon_19>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_lineeditclearicon_19>::make();
    auto self = const_cast<Component_lineeditclearicon_19 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_lineeditclearicon_19>{ self_rc };
}

inline Component_lineeditclearicon_19::~Component_lineeditclearicon_19 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_lineeditclearicon_19::init () -> void{
    user_init();
}

inline auto Component_lineeditclearicon_19::box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline const slint::private_api::ItemTreeVTable Component_lineeditpasswordicon_21::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_lineeditpasswordicon_21>, slint::private_api::dealloc };

inline auto Component_lineeditpasswordicon_21::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class LineEdit_root_15 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const LineEdit_root_15>(parent->self_weak.lock().value(), parent);
    this->lineeditpasswordicon_21.init(globals, self_weak.into_dyn(), tree_index, tree_index_of_first_child + 1 - 1);
    self->lineeditpasswordicon_21.root_13.colorize.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->parent.lock().value()->base_18.root_1_text_color.get();
                        });
    self->lineeditpasswordicon_21.root_13.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->parent.lock().value()->root_15_height.get();
                        });
    self->lineeditpasswordicon_21.root_13_hide_password_image.set(slint::private_api::load_image_from_embedded_data(slint_embedded_resource_1, "svg"));
    self->lineeditpasswordicon_21.root_13.image_fit.set(slint::cbindgen_private::ImageFit::Contain);
    self->lineeditpasswordicon_21.root_13_show_password.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->parent.lock().value()->base_18.text_input_5.input_type.get() != slint::cbindgen_private::InputType::Password);
                        });
    self->lineeditpasswordicon_21.root_13_show_password_changed.set_handler(
                    [this]([[maybe_unused]] bool arg_0) {
                        [[maybe_unused]] auto self = this;
                        [&]{ self->parent.lock().value()->base_18.text_input_5.input_type.set([&]() -> slint::cbindgen_private::InputType { if (arg_0) { return slint::cbindgen_private::InputType::Text; } else { return slint::cbindgen_private::InputType::Text; }}());self->parent.lock().value()->base_18.fn_focus(); }();
                    });
    self->lineeditpasswordicon_21.root_13_show_password_image.set(slint::private_api::load_image_from_embedded_data(slint_embedded_resource_2, "svg"));
    self->lineeditpasswordicon_21.root_13.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->lineeditpasswordicon_21.root_13.source.get().size().width * 1);
                        });
    self->lineeditpasswordicon_21.root_13_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::layout_cache_access(self->parent.lock().value()->root_15_layout_17_layout_cache.get(), 4, 0);
                        });
    self->lineeditpasswordicon_21.root_13_hide_password_image.set_constant();
    self->lineeditpasswordicon_21.root_13.horizontal_alignment.set_constant();
    self->lineeditpasswordicon_21.root_13.horizontal_tiling.set_constant();
    self->lineeditpasswordicon_21.root_13.image_fit.set_constant();
    self->lineeditpasswordicon_21.root_13.image_rendering.set_constant();
    self->lineeditpasswordicon_21.root_13_show_password_image.set_constant();
    self->lineeditpasswordicon_21.root_13.source_clip_x.set_constant();
    self->lineeditpasswordicon_21.root_13.source_clip_y.set_constant();
    self->lineeditpasswordicon_21.root_13.vertical_alignment.set_constant();
    self->lineeditpasswordicon_21.root_13.vertical_tiling.set_constant();
}

inline auto Component_lineeditpasswordicon_21::user_init () -> void{
    [[maybe_unused]] auto self = this;
    this->lineeditpasswordicon_21.user_init();
}

inline auto Component_lineeditpasswordicon_21::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ClippedImageVTable), const_cast<slint::cbindgen_private::ClippedImage*>(&self->lineeditpasswordicon_21.root_13), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->lineeditpasswordicon_21.self_weak.lock()->into_dyn(), self->lineeditpasswordicon_21.tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }((self->lineeditpasswordicon_21.root_13.source.get().size().width * 1), layout_info.max_percent, (self->lineeditpasswordicon_21.root_13.source.get().size().width * 1), layout_info.min_percent, layout_info.preferred, layout_info.stretch); }() : slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ClippedImageVTable), const_cast<slint::cbindgen_private::ClippedImage*>(&self->lineeditpasswordicon_21.root_13), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->lineeditpasswordicon_21.self_weak.lock()->into_dyn(), self->lineeditpasswordicon_21.tree_index);
}

inline auto Component_lineeditpasswordicon_21::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->parent.lock().value()->root_15_height.get()), float((self->lineeditpasswordicon_21.root_13.source.get().size().width * 1)), float(slint::private_api::layout_cache_access(self->parent.lock().value()->root_15_layout_17_layout_cache.get(), 4, 0)), float(0)));
    }
    if (index == 0) {
        return self->lineeditpasswordicon_21.item_geometry(0);
    } else if (index >= 1 && index < 2) {
        return self->lineeditpasswordicon_21.item_geometry(index - 0);
    } else return {};
}

inline auto Component_lineeditpasswordicon_21::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::cbindgen_private::AccessibleRole::Image;
    }
    if (index == 0) {
        return self->lineeditpasswordicon_21.accessible_role(0);
    } else if (index >= 1 && index < 2) {
        return self->lineeditpasswordicon_21.accessible_role(index - 0);
    } else return {};
}

inline auto Component_lineeditpasswordicon_21::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    if (index == 0) {
        return self->lineeditpasswordicon_21.accessible_string_property(0, what);
    } else if (index >= 1 && index < 2) {
        return self->lineeditpasswordicon_21.accessible_string_property(index - 0, what);
    } else return {};
}

inline auto Component_lineeditpasswordicon_21::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    if (index == 0) {
        return self->lineeditpasswordicon_21.accessibility_action(0, action);
    } else if (index >= 1 && index < 2) {
        return self->lineeditpasswordicon_21.accessibility_action(index - 0, action);
    } else return ;
}

inline auto Component_lineeditpasswordicon_21::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 0) {
        return self->lineeditpasswordicon_21.supported_accessibility_actions(0);
    } else if (index >= 1 && index < 2) {
        return self->lineeditpasswordicon_21.supported_accessibility_actions(index - 0);
    } else return {};
}

inline auto Component_lineeditpasswordicon_21::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 0) {
        return self->lineeditpasswordicon_21.element_infos(0);
    } else if (index >= 1 && index < 2) {
        return self->lineeditpasswordicon_21.element_infos(index - 0);
    } else return {};
}

inline auto Component_lineeditpasswordicon_21::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_lineeditpasswordicon_21*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Component_lineeditpasswordicon_21*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_lineeditpasswordicon_21::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_lineeditpasswordicon_21::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Component_lineeditpasswordicon_21::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Component_lineeditpasswordicon_21::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_lineeditpasswordicon_21::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_lineeditpasswordicon_21*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 3 };
}

inline auto Component_lineeditpasswordicon_21::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_lineeditpasswordicon_21::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component_lineeditpasswordicon_21::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(1, 1, 0, 0, true), 
slint::private_api::make_item_node(0, 2, 0, 1, false) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Component_lineeditpasswordicon_21::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(ClippedImageVTable), offsetof(Component_lineeditpasswordicon_21, lineeditpasswordicon_21) +  offsetof(LineEditPasswordIcon_root_13, root_13) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable), offsetof(Component_lineeditpasswordicon_21, lineeditpasswordicon_21) +  offsetof(LineEditPasswordIcon_root_13, toucharea_14) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Component_lineeditpasswordicon_21::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_lineeditpasswordicon_21*>(component.instance)->layout_info(o);
}

inline auto Component_lineeditpasswordicon_21::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_lineeditpasswordicon_21*>(component.instance)->item_geometry(index);
}

inline auto Component_lineeditpasswordicon_21::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_lineeditpasswordicon_21*>(component.instance)->accessible_role(index);
}

inline auto Component_lineeditpasswordicon_21::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_lineeditpasswordicon_21*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_lineeditpasswordicon_21::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_lineeditpasswordicon_21*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_lineeditpasswordicon_21::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_lineeditpasswordicon_21*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_lineeditpasswordicon_21::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_lineeditpasswordicon_21::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_lineeditpasswordicon_21*>(component.instance)->globals->window().window_handle();
}

inline auto Component_lineeditpasswordicon_21::create (class LineEdit_root_15 const * parent) -> slint::ComponentHandle<Component_lineeditpasswordicon_21>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_lineeditpasswordicon_21>::make();
    auto self = const_cast<Component_lineeditpasswordicon_21 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_lineeditpasswordicon_21>{ self_rc };
}

inline Component_lineeditpasswordicon_21::~Component_lineeditpasswordicon_21 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_lineeditpasswordicon_21::init () -> void{
    user_init();
}

inline auto Component_lineeditpasswordicon_21::box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline auto LineEdit_root_15::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    this->base_18.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 2 - 1, tree_index_of_first_child + 6 - 1);
    self->root_15_accessible_action_set_value.set_handler(
                    [this]([[maybe_unused]] slint::SharedString arg_0) {
                        [[maybe_unused]] auto self = this;
                        [&]{ self->base_18.text_input_5.text.set(arg_0);self->base_18.root_1_edited.call(arg_0); }();
                    });
    self->root_15_background_16_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_15_width.get();
                        });
    self->root_15_layout_17_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ std::array<int, 4> repeated_indices_array; std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;cells_vector.push_back({ [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->base_18.root_1_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, 1, layout_info.min_percent, layout_info.preferred, 1); }()) });self->repeater_0.ensure_updated(self);repeated_indices_array[0] = cells_vector.size();repeated_indices_array[1] = self->repeater_0.len();self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Horizontal)); });self->repeater_1.ensure_updated(self);repeated_indices_array[2] = cells_vector.size();repeated_indices_array[3] = self->repeater_1.len();self->repeater_1.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Horizontal)); });slint::cbindgen_private::Slice<int> repeated_indices = slint::private_api::make_slice(std::span(repeated_indices_array)); slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, cells, [&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(12, 12), self->root_15_background_16_width.get(), 0),repeated_indices); }();
                        });
    self->root_15_layout_17_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{  std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;cells_vector.push_back({ [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->base_18.root_1_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, 1, layout_info.min_percent, layout_info.preferred, 1); }()) });self->repeater_0.ensure_updated(self);self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Horizontal)); });self->repeater_1.ensure_updated(self);self->repeater_1.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Horizontal)); }); slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::box_layout_info(cells,0,[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(12, 12),slint::cbindgen_private::LayoutAlignment::Stretch); }();
                        });
    self->root_15_layout_17_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{  std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;cells_vector.push_back({ [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->base_18.root_1_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, self->base_18.root_1_text_input_5_preferred_height.get(), layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) });self->repeater_0.ensure_updated(self);self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Vertical)); });self->repeater_1.ensure_updated(self);self->repeater_1.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Vertical)); }); slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::box_layout_info_ortho(cells,[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0)); }();
                        });
    self->root_15_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto layout_info_2 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_2.max, layout_info_2.max_percent, std::max<float>(160, self->root_15_layout_17_layoutinfo_h.get().min), layout_info_2.min_percent, layout_info_2.preferred, 1); }() + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->root_15_layout_17_layoutinfo_h.get()));
                        });
    self->root_15_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto layout_info_3 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_3.max, layout_info_3.max_percent, std::max<float>(32, self->root_15_layout_17_layoutinfo_v.get().min), layout_info_3.min_percent, layout_info_3.preferred, 0); }() + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->root_15_layout_17_layoutinfo_v.get()));
                        });
    self->root_15_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (! self->base_18.text_input_5.enabled.get()) { return 1; } else { return [&]() -> float { if (self->base_18.root_1_has_focus.get()) { return 2; } else { return 0; }}(); }}();
                        });
    self->background_16.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_15_state = self->root_15_state.get();;return [&]() -> slint::Brush { if (std::abs(float(tmp_root_15_state - 1)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(184549375); } else { return slint::Color::from_argb_encoded(+1.308228089e9); }}()); } else { return [&]() -> slint::Brush { if (std::abs(float(tmp_root_15_state - 2)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+3.005095454e9); } else { return slint::Color::from_argb_encoded(+4.294967295e9); }}()); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(268435455); } else { return slint::Color::from_argb_encoded(+3.019898879e9); }}()); }}(); }}(); }();
                        });
    self->background_16.border_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_15_state = self->root_15_state.get();;return [&]() -> slint::Brush { if (std::abs(float(tmp_root_15_state - 1)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(352321535); } else { return slint::Color::from_argb_encoded(+1.92937984e9); }}()); } else { return [&]() -> slint::Brush { if (std::abs(float(tmp_root_15_state - 2)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(352321535); } else { return slint::Color::from_argb_encoded(+1.92937984e9); }}()); } else { return [&]() -> slint::Brush { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return [&] { const slint::private_api::GradientStop stops[] = { slint::private_api::GradientStop{ slint::Color::from_argb_encoded(352321535), float(0.9998), }, slint::private_api::GradientStop{ slint::Color::from_argb_encoded(+2.332033023e9), float(1), }, slint::private_api::GradientStop{ slint::Color::from_argb_encoded(+2.332033023e9), float(1), } }; return slint::Brush(slint::private_api::LinearGradientBrush(180, stops, 3)); }(); } else { return [&] { const slint::private_api::GradientStop stops[] = { slint::private_api::GradientStop{ slint::Color::from_argb_encoded(251658240), float(0.9999), }, slint::private_api::GradientStop{ slint::Color::from_argb_encoded(+1.92937984e9), float(1), }, slint::private_api::GradientStop{ slint::Color::from_argb_encoded(+1.92937984e9), float(1), } }; return slint::Brush(slint::private_api::LinearGradientBrush(180, stops, 3)); }(); }}(); }}(); }}(); }();
                        });
    self->background_16.border_radius.set(4);
    self->background_16.border_width.set(1);
    self->base_18.text_input_5.font_size.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (1.0766 * slint::private_api::get_resolved_default_font_size(*this));
                        });
    self->base_18.text_input_5.font_weight.set(static_cast<int>(400));
    self->base_18.root_1_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_15_height.get();
                        });
    self->base_18.text_input_5.input_type.set(slint::cbindgen_private::InputType::Text);
    self->base_18.root_1_margin.set(24);
    self->base_18.root_1_placeholder_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_15_state = self->root_15_state.get();;return [&]() -> slint::Brush { if (std::abs(float(tmp_root_15_state - 1)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+1.593835519e9); } else { return slint::Color::from_argb_encoded(+1.577058304e9); }}()); } else { return [&]() -> slint::Brush { if (std::abs(float(tmp_root_15_state - 2)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+2.332033023e9); } else { return slint::Color::from_argb_encoded(+1.92937984e9); }}()); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+3.388997631e9); } else { return slint::Color::from_argb_encoded(+2.566914048e9); }}()); }}(); }}(); }();
                        });
    self->base_18.text_input_5.selection_background_color.set(slint::Brush(slint::Color::from_argb_encoded(+4.278221012e9)).color());
    self->base_18.text_input_5.selection_foreground_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> slint::Color { if (std::abs(float(self->root_15_state.get() - 1)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+2.281701375e9); } else { return slint::Color::from_argb_encoded(+4.294967295e9); }}()).color(); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.27819008e9); } else { return slint::Color::from_argb_encoded(+4.294967295e9); }}()).color(); }}();
                        });
    self->base_18.root_1_text_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> slint::Brush { if (std::abs(float(self->root_15_state.get() - 1)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+1.593835519e9); } else { return slint::Color::from_argb_encoded(+1.577058304e9); }}()); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.294967295e9); } else { return slint::Color::from_argb_encoded(+3.85875968e9); }}()); }}();
                        });
    self->base_18.root_1_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_15_layout_17_layout_cache.get()[1];
                        });
    self->base_18.root_1_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_15_layout_17_layout_cache.get()[0];
                        });
    self->focus_border_23.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> slint::Brush { if (std::abs(float(self->root_15_state.get() - 2)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.284534271e9); } else { return slint::Color::from_argb_encoded(+4.278214584e9); }}()); } else { return slint::Brush(slint::Color::from_argb_encoded(0)); }}();
                        });
    self->background_16.border_radius.set_constant();
    self->background_16.border_width.set_constant();
    self->base_18.root_1_margin.set_constant();
    self->repeater_0.set_model_binding([self] { (void)self; return ((((! self->base_18.text_input_5.text.get().empty()) && self->base_18.text_input_5.enabled.get()) && (! self->base_18.text_input_5.read_only.get())) && self->base_18.root_1_has_focus.get()); });
    self->repeater_1.set_model_binding([self] { (void)self; return false; });
}

inline auto LineEdit_root_15::user_init () -> void{
    [[maybe_unused]] auto self = this;
    this->base_18.user_init();
}

inline auto LineEdit_root_15::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = self->root_15_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(160, self->root_15_layout_17_layoutinfo_h.get().min), layout_info.min_percent, layout_info.preferred, 1); }() : [&]{ [[maybe_unused]] auto layout_info = self->root_15_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->root_15_layout_17_layoutinfo_v.get().min), layout_info.min_percent, layout_info.preferred, 0); }();
}

inline auto LineEdit_root_15::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_15_height.get()), float(self->root_15_width.get()), float(self->root_15_x.get()), float(self->root_15_y.get())));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_15_height.get()), float(self->root_15_width.get()), float(0), float(0)));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_15_height.get()), float(self->root_15_layout_17_layout_cache.get()[1]), float(self->root_15_layout_17_layout_cache.get()[0]), float(0)));
        case 5: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(2), float((self->root_15_width.get() -(float) 8)), float(4), float((self->root_15_height.get() -(float) 2))));
    }
    if (index == 2) {
        return self->base_18.item_geometry(0);
    } else if (index >= 6 && index < 10) {
        return self->base_18.item_geometry(index - 5);
    } else return {};
}

inline auto LineEdit_root_15::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::cbindgen_private::AccessibleRole::TextInput;
    }
    if (index == 2) {
        return self->base_18.accessible_role(0);
    } else if (index >= 6 && index < 10) {
        return self->base_18.accessible_role(index - 5);
    } else return {};
}

inline auto LineEdit_root_15::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Enabled): return [&]() -> slint::SharedString { if (self->base_18.text_input_5.enabled.get()) { return slint::SharedString(u8"true"); } else { return slint::SharedString(u8"false"); }}();
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::PlaceholderText): return self->base_18.root_1_placeholder_text.get();
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::ReadOnly): return [&]() -> slint::SharedString { if (self->base_18.text_input_5.read_only.get()) { return slint::SharedString(u8"true"); } else { return slint::SharedString(u8"false"); }}();
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Value): return self->base_18.text_input_5.text.get();
    }
    if (index == 2) {
        return self->base_18.accessible_string_property(0, what);
    } else if (index >= 6 && index < 10) {
        return self->base_18.accessible_string_property(index - 5, what);
    } else return {};
}

inline auto LineEdit_root_15::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibilityAction::Tag::SetValue): { auto arg_0 = action.set_value._0; return self->root_15_accessible_action_set_value.call(arg_0); }
    }
    if (index == 2) {
        return self->base_18.accessibility_action(0, action);
    } else if (index >= 6 && index < 10) {
        return self->base_18.accessibility_action(index - 5, action);
    } else return ;
}

inline auto LineEdit_root_15::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::cbindgen_private::SupportedAccessibilityAction_SetValue;
    }
    if (index == 2) {
        return self->base_18.supported_accessibility_actions(0);
    } else if (index >= 6 && index < 10) {
        return self->base_18.supported_accessibility_actions(index - 5);
    } else return {};
}

inline auto LineEdit_root_15::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 2) {
        return self->base_18.element_infos(0);
    } else if (index >= 6 && index < 10) {
        return self->base_18.element_infos(index - 5);
    } else return {};
}

inline auto LineEdit_root_15::visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t{
        auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                return self->repeater_0.visit(order, visitor);
            }
        case 1: {
                self->repeater_1.ensure_updated(self);
                return self->repeater_1.visit(order, visitor);
            } };
        std::abort();
}

inline auto LineEdit_root_15::subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                return self->repeater_0.index_range();
            }
        case 1: {
                self->repeater_1.ensure_updated(self);
                return self->repeater_1.index_range();
            } };
        std::abort();
}

inline auto LineEdit_root_15::subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                *result = self->repeater_0.instance_at(subtree_index);
                return;
            }
        case 1: {
                self->repeater_1.ensure_updated(self);
                *result = self->repeater_1.instance_at(subtree_index);
                return;
            } };
        std::abort();
}

inline auto FocusBorder_root_24::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->root_24.border_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.294967295e9); } else { return slint::Color::from_argb_encoded(+3.85875968e9); }}());
                        });
    self->root_24.border_width.set(2);
    self->rectangle_25.border_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+3.003121664e9); } else { return slint::Color::from_argb_encoded(+4.294967295e9); }}());
                        });
    self->rectangle_25.border_radius.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->root_24.border_radius.get() -(float) 2);
                        });
    self->rectangle_25.border_width.set(1);
    self->root_24.background.set_constant();
    self->root_24.border_width.set_constant();
    self->rectangle_25.background.set_constant();
    self->rectangle_25.border_width.set_constant();
}

inline auto FocusBorder_root_24::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto FocusBorder_root_24::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), const_cast<slint::cbindgen_private::BasicBorderRectangle*>(&self->root_24), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) : slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), const_cast<slint::cbindgen_private::BasicBorderRectangle*>(&self->root_24), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);
}

inline auto FocusBorder_root_24::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_24_height.get()), float(self->root_24_width.get()), float(0), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float((self->root_24_height.get() -(float) 4)), float((self->root_24_width.get() -(float) 4)), float(2), float(2)));
    }
    return {};
}

inline auto FocusBorder_root_24::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto FocusBorder_root_24::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

inline auto FocusBorder_root_24::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto FocusBorder_root_24::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto FocusBorder_root_24::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline const slint::private_api::ItemTreeVTable Component_image_30::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_image_30>, slint::private_api::dealloc };

inline auto Component_image_30::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Button_root_26 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const Button_root_26>(parent->self_weak.lock().value(), parent);
    slint::private_api::Property<slint::Image>::link_two_way(&self->image_30.source, &self->parent.lock().value()->root_26_icon);
    self->image_30.colorize.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush(slint::Color::from_argb_encoded(0));
                        });
    self->image_30.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->parent.lock().value()->root_26_height.get() -(float) 5) -(float) 5);
                        });
    self->image_30.image_fit.set(slint::cbindgen_private::ImageFit::Contain);
    self->image_30.width.set(20);
    self->image_30.image_fit.set_constant();
    self->image_30.image_rendering.set_constant();
    self->image_30.source.set_constant();
    self->image_30.width.set_constant();
}

inline auto Component_image_30::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto Component_image_30::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->image_30), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(20, layout_info.max_percent, 20, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }() : [&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->image_30), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, 20, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }();
}

inline auto Component_image_30::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(((self->parent.lock().value()->root_26_height.get() -(float) 5) -(float) 5)), float(20), float(slint::private_api::layout_cache_access(self->parent.lock().value()->root_26_i_layout_29_layout_cache.get(), 0, 0)), float(5)));
    }
    return {};
}

inline auto Component_image_30::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::cbindgen_private::AccessibleRole::Image;
    }
    return {};
}

inline auto Component_image_30::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

inline auto Component_image_30::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto Component_image_30::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_image_30::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_image_30::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_image_30*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Component_image_30*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_image_30::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_image_30::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Component_image_30::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Component_image_30::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_image_30::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_image_30*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 5 };
}

inline auto Component_image_30::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_image_30::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component_image_30::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(0, 1, 0, 0, true) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Component_image_30::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(ImageItemVTable),  offsetof(Component_image_30, image_30) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Component_image_30::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_image_30*>(component.instance)->layout_info(o);
}

inline auto Component_image_30::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_image_30*>(component.instance)->item_geometry(index);
}

inline auto Component_image_30::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_image_30*>(component.instance)->accessible_role(index);
}

inline auto Component_image_30::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_image_30*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_image_30::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_image_30*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_image_30::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_image_30*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_image_30::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_image_30::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_image_30*>(component.instance)->globals->window().window_handle();
}

inline auto Component_image_30::create (class Button_root_26 const * parent) -> slint::ComponentHandle<Component_image_30>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_image_30>::make();
    auto self = const_cast<Component_image_30 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_image_30>{ self_rc };
}

inline Component_image_30::~Component_image_30 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_image_30::init () -> void{
    user_init();
}

inline auto Component_image_30::box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline const slint::private_api::ItemTreeVTable Component_text_32::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_text_32>, slint::private_api::dealloc };

inline auto Component_text_32::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Button_root_26 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const Button_root_26>(parent->self_weak.lock().value(), parent);
    self->text_32.color.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->parent.lock().value()->root_26_text_color.get();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), 1));
    self->text_32.font_size.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (1.0766 * slint::private_api::get_resolved_default_font_size(*this));
                        });
    self->text_32.font_weight.set(static_cast<int>(400));
    self->text_32.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->parent.lock().value()->root_26_height.get() -(float) 5) -(float) 5);
                        });
    self->text_32.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Center);
    self->text_32.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->parent.lock().value()->root_26_text.get();
                        });
    self->text_32.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->text_32.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::layout_cache_access(self->parent.lock().value()->root_26_i_layout_29_layout_cache.get(), 3, 0);
                        });
    self->text_32.font_weight.set_constant();
    self->text_32.horizontal_alignment.set_constant();
    self->text_32.vertical_alignment.set_constant();
}

inline auto Component_text_32::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto Component_text_32::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_32), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) : slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_32), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);
}

inline auto Component_text_32::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(((self->parent.lock().value()->root_26_height.get() -(float) 5) -(float) 5)), float(slint::private_api::layout_cache_access(self->parent.lock().value()->root_26_i_layout_29_layout_cache.get(), 3, 0)), float(slint::private_api::layout_cache_access(self->parent.lock().value()->root_26_i_layout_29_layout_cache.get(), 2, 0)), float(5)));
    }
    return {};
}

inline auto Component_text_32::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_text_32::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

inline auto Component_text_32::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto Component_text_32::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_text_32::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_text_32::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_text_32*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Component_text_32*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_text_32::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_text_32::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Component_text_32::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Component_text_32::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_text_32::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_text_32*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 6 };
}

inline auto Component_text_32::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_text_32::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component_text_32::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(0, 1, 0, 0, false) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Component_text_32::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(Component_text_32, text_32) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Component_text_32::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_text_32*>(component.instance)->layout_info(o);
}

inline auto Component_text_32::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_text_32*>(component.instance)->item_geometry(index);
}

inline auto Component_text_32::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_text_32*>(component.instance)->accessible_role(index);
}

inline auto Component_text_32::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_text_32*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_text_32::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_text_32*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_text_32::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_text_32*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_text_32::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_text_32::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_text_32*>(component.instance)->globals->window().window_handle();
}

inline auto Component_text_32::create (class Button_root_26 const * parent) -> slint::ComponentHandle<Component_text_32>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_text_32>::make();
    auto self = const_cast<Component_text_32 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_text_32>{ self_rc };
}

inline Component_text_32::~Component_text_32 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_text_32::init () -> void{
    user_init();
}

inline auto Component_text_32::box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline const slint::private_api::ItemTreeVTable Component_focusborder_36::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_focusborder_36>, slint::private_api::dealloc };

inline auto Component_focusborder_36::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Button_root_26 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const Button_root_26>(parent->self_weak.lock().value(), parent);
    this->focusborder_36.init(globals, self_weak.into_dyn(), tree_index, tree_index_of_first_child + 1 - 1);
    self->focusborder_36.root_24.border_radius.set(4);
    self->focusborder_36.root_24_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->parent.lock().value()->root_26_height.get();
                        });
    self->focusborder_36.root_24_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->parent.lock().value()->root_26_width.get();
                        });
    self->focusborder_36.root_24.background.set_constant();
    self->focusborder_36.root_24.border_radius.set_constant();
    self->focusborder_36.root_24.border_width.set_constant();
}

inline auto Component_focusborder_36::user_init () -> void{
    [[maybe_unused]] auto self = this;
    this->focusborder_36.user_init();
}

inline auto Component_focusborder_36::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), const_cast<slint::cbindgen_private::BasicBorderRectangle*>(&self->focusborder_36.root_24), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->focusborder_36.self_weak.lock()->into_dyn(), self->focusborder_36.tree_index) : slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), const_cast<slint::cbindgen_private::BasicBorderRectangle*>(&self->focusborder_36.root_24), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->focusborder_36.self_weak.lock()->into_dyn(), self->focusborder_36.tree_index);
}

inline auto Component_focusborder_36::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->parent.lock().value()->root_26_height.get()), float(self->parent.lock().value()->root_26_width.get()), float(0), float(0)));
    }
    if (index == 0) {
        return self->focusborder_36.item_geometry(0);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_36.item_geometry(index - 0);
    } else return {};
}

inline auto Component_focusborder_36::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 0) {
        return self->focusborder_36.accessible_role(0);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_36.accessible_role(index - 0);
    } else return {};
}

inline auto Component_focusborder_36::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    if (index == 0) {
        return self->focusborder_36.accessible_string_property(0, what);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_36.accessible_string_property(index - 0, what);
    } else return {};
}

inline auto Component_focusborder_36::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    if (index == 0) {
        return self->focusborder_36.accessibility_action(0, action);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_36.accessibility_action(index - 0, action);
    } else return ;
}

inline auto Component_focusborder_36::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 0) {
        return self->focusborder_36.supported_accessibility_actions(0);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_36.supported_accessibility_actions(index - 0);
    } else return {};
}

inline auto Component_focusborder_36::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 0) {
        return self->focusborder_36.element_infos(0);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_36.element_infos(index - 0);
    } else return {};
}

inline auto Component_focusborder_36::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_focusborder_36*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Component_focusborder_36*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_focusborder_36::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_focusborder_36::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Component_focusborder_36::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Component_focusborder_36::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_focusborder_36::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_focusborder_36*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 3 };
}

inline auto Component_focusborder_36::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_focusborder_36::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component_focusborder_36::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(1, 1, 0, 0, false), 
slint::private_api::make_item_node(0, 2, 0, 1, false) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Component_focusborder_36::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(Component_focusborder_36, focusborder_36) +  offsetof(FocusBorder_root_24, root_24) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(Component_focusborder_36, focusborder_36) +  offsetof(FocusBorder_root_24, rectangle_25) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Component_focusborder_36::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_focusborder_36*>(component.instance)->layout_info(o);
}

inline auto Component_focusborder_36::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_focusborder_36*>(component.instance)->item_geometry(index);
}

inline auto Component_focusborder_36::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_focusborder_36*>(component.instance)->accessible_role(index);
}

inline auto Component_focusborder_36::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_focusborder_36*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_focusborder_36::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_focusborder_36*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_focusborder_36::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_focusborder_36*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_focusborder_36::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_focusborder_36::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_focusborder_36*>(component.instance)->globals->window().window_handle();
}

inline auto Component_focusborder_36::create (class Button_root_26 const * parent) -> slint::ComponentHandle<Component_focusborder_36>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_focusborder_36>::make();
    auto self = const_cast<Component_focusborder_36 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_focusborder_36>{ self_rc };
}

inline Component_focusborder_36::~Component_focusborder_36 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_focusborder_36::init () -> void{
    user_init();
}

inline auto Component_focusborder_36::box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline auto Button_root_26::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    slint::private_api::Property<bool>::link_two_way(&self->i_touch_area_34.enabled, &self->i_focus_scope_35.enabled);
    self->root_26_accessible_action_default.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        self->i_touch_area_34.clicked.call();
                    });
    self->root_26_has_focus.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->i_focus_scope_35.has_focus.get();
                        });
    self->root_26_i_background_27_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_26_width.get();
                        });
    self->root_26_i_layout_29_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ std::array<int, 4> repeated_indices_array; std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;self->repeater_0.ensure_updated(self);repeated_indices_array[0] = cells_vector.size();repeated_indices_array[1] = self->repeater_0.len();self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Horizontal)); });self->repeater_1.ensure_updated(self);repeated_indices_array[2] = cells_vector.size();repeated_indices_array[3] = self->repeater_1.len();self->repeater_1.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Horizontal)); });slint::cbindgen_private::Slice<int> repeated_indices = slint::private_api::make_slice(std::span(repeated_indices_array)); slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Center, cells, [&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(12, 12), self->root_26_i_background_27_width.get(), 4),repeated_indices); }();
                        });
    self->root_26_i_layout_29_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{  std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;self->repeater_0.ensure_updated(self);self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Horizontal)); });self->repeater_1.ensure_updated(self);self->repeater_1.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Horizontal)); }); slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::box_layout_info(cells,4,[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(12, 12),slint::cbindgen_private::LayoutAlignment::Center); }();
                        });
    self->root_26_i_layout_29_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{  std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;self->repeater_0.ensure_updated(self);self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Vertical)); });self->repeater_1.ensure_updated(self);self->repeater_1.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Vertical)); }); slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::box_layout_info_ortho(cells,[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(5, 5)); }();
                        });
    self->root_26_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto layout_info_4 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_4.max, layout_info_4.max_percent, std::max<float>(32, self->root_26_i_layout_29_layoutinfo_h.get().min), layout_info_4.min_percent, layout_info_4.preferred, 0); }() + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->root_26_i_layout_29_layoutinfo_h.get()));
                        });
    self->root_26_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto layout_info_5 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_5.max, layout_info_5.max_percent, std::max<float>(32, self->root_26_i_layout_29_layoutinfo_v.get().min), layout_info_5.min_percent, layout_info_5.preferred, 0); }() + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->root_26_i_layout_29_layoutinfo_v.get()));
                        });
    self->root_26_pressed.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->i_focus_scope_35.enabled.get() && self->i_touch_area_34.pressed.get());
                        });
    self->root_26_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (! self->i_focus_scope_35.enabled.get()) { return 1; } else { return [&]() -> float { if (self->root_26_pressed.get()) { return 2; } else { return [&]() -> float { if (self->i_touch_area_34.has_hover.get()) { return 3; } else { return [&]() -> float { if (self->root_26_checked.get()) { return 4; } else { return 0; }}(); }}(); }}(); }}();
                        });
    self->root_26_text_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_26_state = self->root_26_state.get();;return [&]() -> slint::Brush { if (std::abs(float(tmp_root_26_state - 1)) < std::numeric_limits<float>::epsilon()) { return [&]() -> slint::Brush { if (self->root_26_checked.get()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+2.281701375e9); } else { return slint::Color::from_argb_encoded(+4.294967295e9); }}()); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+1.593835519e9); } else { return slint::Color::from_argb_encoded(+1.577058304e9); }}()); }}(); } else { return [&]() -> slint::Brush { if (std::abs(float(tmp_root_26_state - 2)) < std::numeric_limits<float>::epsilon()) { return [&]() -> slint::Brush { if (self->root_26_checked.get()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+2.147483648e9); } else { return slint::Color::from_argb_encoded(+3.019898879e9); }}()); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+3.388997631e9); } else { return slint::Color::from_argb_encoded(+2.566914048e9); }}()); }}(); } else { return [&]() -> slint::Brush { if (std::abs(float(tmp_root_26_state - 4)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.27819008e9); } else { return slint::Color::from_argb_encoded(+4.294967295e9); }}()); } else { return [&]() -> slint::Brush { if (self->root_26_checked.get()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.27819008e9); } else { return slint::Color::from_argb_encoded(+4.294967295e9); }}()); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.294967295e9); } else { return slint::Color::from_argb_encoded(+3.85875968e9); }}()); }}(); }}(); }}(); }}(); }();
                        });
    self->i_background_27.background.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_26_state = self->root_26_state.get();;return [&]() -> slint::Brush { if (std::abs(float(tmp_root_26_state - 1)) < std::numeric_limits<float>::epsilon()) { return [&]() -> slint::Brush { if (self->root_26_checked.get()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(704643071); } else { return slint::Color::from_argb_encoded(939524096); }}()); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(184549375); } else { return slint::Color::from_argb_encoded(+1.308228089e9); }}()); }}(); } else { return [&]() -> slint::Brush { if (std::abs(float(tmp_root_26_state - 2)) < std::numeric_limits<float>::epsilon()) { return [&]() -> slint::Brush { if (self->root_26_checked.get()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+3.428896255e9); } else { return slint::Color::from_argb_encoded(+3.422576568e9); }}()); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(150994943); } else { return slint::Color::from_argb_encoded(+1.308228089e9); }}()); }}(); } else { return [&]() -> slint::Brush { if (std::abs(float(tmp_root_26_state - 3)) < std::numeric_limits<float>::epsilon()) { return [&]() -> slint::Brush { if (self->root_26_checked.get()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+3.865103871e9); } else { return slint::Color::from_argb_encoded(+3.858784184e9); }}()); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(352321535); } else { return slint::Color::from_argb_encoded(+2.163866105e9); }}()); }}(); } else { return [&]() -> slint::Brush { if (std::abs(float(tmp_root_26_state - 4)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.284534271e9); } else { return slint::Color::from_argb_encoded(+4.278214584e9); }}()); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(268435455); } else { return slint::Color::from_argb_encoded(+3.019898879e9); }}()); }}(); }}(); }}(); }}(); }();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), 1));
    self->i_background_27.border_radius.set(4);
    self->i_border_28.border_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_26_state = self->root_26_state.get();;return [&]() -> slint::Brush { if (std::abs(float(tmp_root_26_state - 1)) < std::numeric_limits<float>::epsilon()) { return [&]() -> slint::Brush { if (self->root_26_checked.get()) { return slint::Brush(slint::Color::from_argb_encoded(0)); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(352321535); } else { return slint::Color::from_argb_encoded(+1.92937984e9); }}()); }}(); } else { return [&]() -> slint::Brush { if (std::abs(float(tmp_root_26_state - 2)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(352321535); } else { return slint::Color::from_argb_encoded(+1.92937984e9); }}()); } else { return [&]() -> slint::Brush { if (std::abs(float(tmp_root_26_state - 4)) < std::numeric_limits<float>::epsilon()) { return [&]() -> slint::Brush { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return [&] { const slint::private_api::GradientStop stops[] = { slint::private_api::GradientStop{ slint::Color::from_argb_encoded(352321535), float(0.9067000000000001), }, slint::private_api::GradientStop{ slint::Color::from_argb_encoded(603979776), float(1), } }; return slint::Brush(slint::private_api::LinearGradientBrush(180, stops, 2)); }(); } else { return [&] { const slint::private_api::GradientStop stops[] = { slint::private_api::GradientStop{ slint::Color::from_argb_encoded(352321535), float(0.9067000000000001), }, slint::private_api::GradientStop{ slint::Color::from_argb_encoded(+1.711276032e9), float(1), } }; return slint::Brush(slint::private_api::LinearGradientBrush(180, stops, 2)); }(); }}(); } else { return [&]() -> slint::Brush { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return [&] { const slint::private_api::GradientStop stops[] = { slint::private_api::GradientStop{ slint::Color::from_argb_encoded(402653183), float(0), }, slint::private_api::GradientStop{ slint::Color::from_argb_encoded(301989888), float(0.0833), } }; return slint::Brush(slint::private_api::LinearGradientBrush(180, stops, 2)); }(); } else { return [&] { const slint::private_api::GradientStop stops[] = { slint::private_api::GradientStop{ slint::Color::from_argb_encoded(251658240), float(0.9058), }, slint::private_api::GradientStop{ slint::Color::from_argb_encoded(687865856), float(1), } }; return slint::Brush(slint::private_api::LinearGradientBrush(180, stops, 2)); }(); }}(); }}(); }}(); }}(); }();
                        });
    self->i_border_28.border_radius.set(4);
    self->i_border_28.border_width.set(1);
    self->i_touch_area_34.clicked.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        [&]{ [&]() -> void { if (false) { self->root_26_checked.set((! self->root_26_checked.get())); } else { ; }}();self->root_26_clicked.call(); }();
                    });
    self->i_focus_scope_35.enabled.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return true;
                        });
    self->i_focus_scope_35.focus_on_click.set(true);
    self->i_focus_scope_35.focus_on_tab_navigation.set(true);
    self->i_focus_scope_35.key_pressed.set_handler(
                    [this]([[maybe_unused]] slint::private_api::KeyEvent arg_0) {
                        [[maybe_unused]] auto self = this;
                        return [&]() -> slint::cbindgen_private::EventResult { if (! ((arg_0.text == slint::SharedString(u8" ")) || (arg_0.text == slint::SharedString(u8"\n")))) { return slint::cbindgen_private::EventResult::Reject; } else { return [&]{ self->i_touch_area_34.clicked.call();return slint::cbindgen_private::EventResult::Accept; }(); }}();
                    });
    self->root_26_icon.set_constant();
    self->i_background_27.border_color.set_constant();
    self->i_background_27.border_radius.set_constant();
    self->i_background_27.border_width.set_constant();
    self->i_border_28.background.set_constant();
    self->i_border_28.border_radius.set_constant();
    self->i_border_28.border_width.set_constant();
    self->i_touch_area_34.mouse_cursor.set_constant();
    self->i_focus_scope_35.focus_on_click.set_constant();
    self->i_focus_scope_35.focus_on_tab_navigation.set_constant();
    self->repeater_0.set_model_binding([self] { (void)self; return ((slint::Image().size().width > 0) && (slint::Image().size().height > 0)); });
    self->repeater_1.set_model_binding([self] { (void)self; return (self->root_26_text.get() != slint::SharedString(u8"")); });
    self->repeater_2.set_model_binding([self] { (void)self; return (self->root_26_has_focus.get() && self->i_focus_scope_35.enabled.get()); });
}

inline auto Button_root_26::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto Button_root_26::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = self->root_26_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->root_26_i_layout_29_layoutinfo_h.get().min), layout_info.min_percent, layout_info.preferred, 0); }() : [&]{ [[maybe_unused]] auto layout_info = self->root_26_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->root_26_i_layout_29_layoutinfo_v.get().min), layout_info.min_percent, layout_info.preferred, 0); }();
}

inline auto Button_root_26::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_26_height.get()), float(self->root_26_width.get()), float(self->root_26_x.get()), float(self->root_26_y.get())));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_26_height.get()), float(self->root_26_width.get()), float(0), float(0)));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_26_height.get()), float(self->root_26_width.get()), float(0), float(0)));
        case 3: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_26_height.get()), float(0), float(0), float(0)));
        case 5: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_26_height.get()), float(self->root_26_width.get()), float(0), float(0)));
    }
    return {};
}

inline auto Button_root_26::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::cbindgen_private::AccessibleRole::Button;
    }
    return {};
}

inline auto Button_root_26::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Checkable): return [&]() -> slint::SharedString { if (false) { return slint::SharedString(u8"true"); } else { return slint::SharedString(u8"false"); }}();
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Checked): return [&]() -> slint::SharedString { if (self->root_26_checked.get()) { return slint::SharedString(u8"true"); } else { return slint::SharedString(u8"false"); }}();
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Enabled): return [&]() -> slint::SharedString { if (self->i_focus_scope_35.enabled.get()) { return slint::SharedString(u8"true"); } else { return slint::SharedString(u8"false"); }}();
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->root_26_text.get();
    }
    return {};
}

inline auto Button_root_26::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibilityAction::Tag::Default): return self->root_26_accessible_action_default.call();
    }
    return ;
}

inline auto Button_root_26::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::cbindgen_private::SupportedAccessibilityAction_Default;
    }
    return {};
}

inline auto Button_root_26::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Button_root_26::visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t{
        auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                return self->repeater_0.visit(order, visitor);
            }
        case 1: {
                self->repeater_1.ensure_updated(self);
                return self->repeater_1.visit(order, visitor);
            }
        case 2: {
                self->repeater_2.ensure_updated(self);
                return self->repeater_2.visit(order, visitor);
            } };
        std::abort();
}

inline auto Button_root_26::subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                return self->repeater_0.index_range();
            }
        case 1: {
                self->repeater_1.ensure_updated(self);
                return self->repeater_1.index_range();
            }
        case 2: {
                self->repeater_2.ensure_updated(self);
                return self->repeater_2.index_range();
            } };
        std::abort();
}

inline auto Button_root_26::subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                *result = self->repeater_0.instance_at(subtree_index);
                return;
            }
        case 1: {
                self->repeater_1.ensure_updated(self);
                *result = self->repeater_1.instance_at(subtree_index);
                return;
            }
        case 2: {
                self->repeater_2.ensure_updated(self);
                *result = self->repeater_2.instance_at(subtree_index);
                return;
            } };
        std::abort();
}

inline const slint::private_api::ItemTreeVTable Component_text_44::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_text_44>, slint::private_api::dealloc };

inline auto Component_text_44::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MenuItemBase_root_38 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const MenuItemBase_root_38>(parent->self_weak.lock().value(), parent);
    self->text_44.color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->globals->global_FluentPalette_71->foreground.get();
                        });
    self->text_44.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->text_44_preferred_height.get(), self->text_44_min_height.get());
                        });
    self->text_44_min_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_44), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index).min;
                        });
    self->text_44_min_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_44), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index).min;
                        });
    self->text_44_preferred_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_44), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index).preferred;
                        });
    self->text_44_preferred_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_44), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index).preferred;
                        });
    self->text_44.text.set(slint::SharedString(u8"\U00002713"));
    self->text_44.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->text_44_preferred_width.get(), self->text_44_min_width.get());
                        });
    self->text_44_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->parent.lock().value()->root_38_icon_size.get() -(float) self->text_44.width.get()) /(float) 2);
                        });
    self->text_44_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((((self->parent.lock().value()->root_38_height.get() -(float) 0) -(float) 0) -(float) self->text_44.height.get()) /(float) 2);
                        });
    self->text_44.font_size.set_constant();
    self->text_44.font_weight.set_constant();
    self->text_44.horizontal_alignment.set_constant();
    self->text_44.text.set_constant();
    self->text_44.vertical_alignment.set_constant();
}

inline auto Component_text_44::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto Component_text_44::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_44), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) : slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_44), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);
}

inline auto Component_text_44::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->text_44.height.get()), float(self->text_44.width.get()), float(self->text_44_x.get()), float(self->text_44_y.get())));
    }
    return {};
}

inline auto Component_text_44::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::cbindgen_private::AccessibleRole::Text;
    }
    return {};
}

inline auto Component_text_44::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"\U00002713");
    }
    return {};
}

inline auto Component_text_44::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto Component_text_44::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_text_44::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_text_44::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_text_44*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Component_text_44*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_text_44::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_text_44::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Component_text_44::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Component_text_44::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_text_44::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_text_44*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 7 };
}

inline auto Component_text_44::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_text_44::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component_text_44::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(0, 1, 0, 0, true) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Component_text_44::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(Component_text_44, text_44) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Component_text_44::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_text_44*>(component.instance)->layout_info(o);
}

inline auto Component_text_44::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_text_44*>(component.instance)->item_geometry(index);
}

inline auto Component_text_44::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_text_44*>(component.instance)->accessible_role(index);
}

inline auto Component_text_44::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_text_44*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_text_44::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_text_44*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_text_44::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_text_44*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_text_44::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_text_44::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_text_44*>(component.instance)->globals->window().window_handle();
}

inline auto Component_text_44::create (class MenuItemBase_root_38 const * parent) -> slint::ComponentHandle<Component_text_44>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_text_44>::make();
    auto self = const_cast<Component_text_44 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_text_44>{ self_rc };
}

inline Component_text_44::~Component_text_44 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_text_44::init () -> void{
    user_init();
}

inline auto Component_text_44::box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline const slint::private_api::ItemTreeVTable Component_image_49::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_image_49>, slint::private_api::dealloc };

inline auto Component_image_49::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MenuItemBase_root_38 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const MenuItemBase_root_38>(parent->self_weak.lock().value(), parent);
    self->image_49.colorize.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->parent.lock().value()->label_48.color.get();
                        });
    self->image_49.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->parent.lock().value()->root_38_background_layer_39_height.get() -(float) 0) -(float) 0);
                        });
    self->image_49.image_fit.set(slint::cbindgen_private::ImageFit::Contain);
    self->image_49.source.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->parent.lock().value()->root_38_sub_menu_icon.get();
                        });
    self->image_49.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->parent.lock().value()->root_38_icon_size.get();
                        });
    self->image_49.image_fit.set_constant();
    self->image_49.image_rendering.set_constant();
}

inline auto Component_image_49::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto Component_image_49::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->image_49), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->parent.lock().value()->root_38_icon_size.get(), layout_info.max_percent, self->parent.lock().value()->root_38_icon_size.get(), layout_info.min_percent, layout_info.preferred, layout_info.stretch); }() : slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->image_49), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);
}

inline auto Component_image_49::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(((self->parent.lock().value()->root_38_height.get() -(float) 0) -(float) 0)), float(self->parent.lock().value()->root_38_icon_size.get()), float(slint::private_api::layout_cache_access(self->parent.lock().value()->root_38_layout_42_layout_cache.get(), 4, 0)), float(0)));
    }
    return {};
}

inline auto Component_image_49::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_image_49::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

inline auto Component_image_49::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto Component_image_49::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_image_49::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_image_49::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_image_49*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Component_image_49*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_image_49::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_image_49::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Component_image_49::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Component_image_49::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_image_49::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_image_49*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 6 };
}

inline auto Component_image_49::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_image_49::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component_image_49::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(0, 1, 0, 0, false) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Component_image_49::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(ImageItemVTable),  offsetof(Component_image_49, image_49) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Component_image_49::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_image_49*>(component.instance)->layout_info(o);
}

inline auto Component_image_49::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_image_49*>(component.instance)->item_geometry(index);
}

inline auto Component_image_49::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_image_49*>(component.instance)->accessible_role(index);
}

inline auto Component_image_49::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_image_49*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_image_49::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_image_49*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_image_49::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_image_49*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_image_49::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_image_49::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_image_49*>(component.instance)->globals->window().window_handle();
}

inline auto Component_image_49::create (class MenuItemBase_root_38 const * parent) -> slint::ComponentHandle<Component_image_49>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_image_49>::make();
    auto self = const_cast<Component_image_49 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_image_49>{ self_rc };
}

inline Component_image_49::~Component_image_49 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_image_49::init () -> void{
    user_init();
}

inline auto Component_image_49::box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline const slint::private_api::ItemTreeVTable Component_rectangle_51::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_rectangle_51>, slint::private_api::dealloc };

inline auto Component_rectangle_51::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MenuItemBase_root_38 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const MenuItemBase_root_38>(parent->self_weak.lock().value(), parent);
    self->rectangle_51.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->parent.lock().value()->root_38_separator_color.get();
                        });
}

inline auto Component_rectangle_51::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto Component_rectangle_51::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(RectangleVTable), const_cast<slint::cbindgen_private::Rectangle*>(&self->rectangle_51), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) : slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(RectangleVTable), const_cast<slint::cbindgen_private::Rectangle*>(&self->rectangle_51), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);
}

inline auto Component_rectangle_51::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(1), float(self->parent.lock().value()->root_38_width.get()), float(0), float(((self->parent.lock().value()->root_38_height.get() -(float) 1) /(float) 2))));
    }
    return {};
}

inline auto Component_rectangle_51::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_rectangle_51::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

inline auto Component_rectangle_51::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto Component_rectangle_51::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_rectangle_51::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_rectangle_51::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_rectangle_51*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Component_rectangle_51*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_rectangle_51::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_rectangle_51::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Component_rectangle_51::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Component_rectangle_51::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_rectangle_51::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_rectangle_51*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 2 };
}

inline auto Component_rectangle_51::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_rectangle_51::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component_rectangle_51::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(0, 1, 0, 0, false) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Component_rectangle_51::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(RectangleVTable),  offsetof(Component_rectangle_51, rectangle_51) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Component_rectangle_51::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_rectangle_51*>(component.instance)->layout_info(o);
}

inline auto Component_rectangle_51::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_rectangle_51*>(component.instance)->item_geometry(index);
}

inline auto Component_rectangle_51::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_rectangle_51*>(component.instance)->accessible_role(index);
}

inline auto Component_rectangle_51::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_rectangle_51*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_rectangle_51::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_rectangle_51*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_rectangle_51::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_rectangle_51*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_rectangle_51::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_rectangle_51::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_rectangle_51*>(component.instance)->globals->window().window_handle();
}

inline auto Component_rectangle_51::create (class MenuItemBase_root_38 const * parent) -> slint::ComponentHandle<Component_rectangle_51>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_51>::make();
    auto self = const_cast<Component_rectangle_51 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_rectangle_51>{ self_rc };
}

inline Component_rectangle_51::~Component_rectangle_51 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_rectangle_51::init () -> void{
    user_init();
}

inline auto Component_rectangle_51::box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline auto MenuItemBase_root_38::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->root_38_background_layer_39_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_38_height.get();
                        });
    self->root_38_background_layer_39_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_38_width.get();
                        });
    self->root_38_image_46_preferred_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->image_46), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 9 - 1).preferred;
                        });
    self->root_38_image_46_preferred_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->image_46), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 9 - 1).preferred;
                        });
    self->root_38_image_46_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((((self->root_38_touch_area_41_height.get() -(float) 0) -(float) 0) -(float) [&]{ [[maybe_unused]] auto tmp_root_38_label_48_font_metrics = self->root_38_label_48_font_metrics.get();;return (tmp_root_38_label_48_font_metrics.ascent -(float) tmp_root_38_label_48_font_metrics.descent); }()) /(float) 2);
                        });
    self->root_38_label_48_font_metrics.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint_cpp_text_item_fontmetrics(&self->globals->window().window_handle().handle(), &self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 10 - 1);
                        });
    self->root_38_layout_42_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ std::array<int, 2> repeated_indices_array; std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;cells_vector.push_back({ [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->root_38_image_46_preferred_width.get(), 0));;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->root_38_icon_size.get(), layout_info.max_percent, self->root_38_icon_size.get(), layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) });cells_vector.push_back({ [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->label_48), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 10 - 1)) });self->repeater_1.ensure_updated(self);repeated_indices_array[0] = cells_vector.size();repeated_indices_array[1] = self->repeater_1.len();self->repeater_1.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Horizontal)); });slint::cbindgen_private::Slice<int> repeated_indices = slint::private_api::make_slice(std::span(repeated_indices_array)); slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, cells, [&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(self->root_38_horizontal_padding.get(), self->root_38_horizontal_padding.get()), self->root_38_touch_area_41_width.get(), self->root_38_layout_42_spacing.get()),repeated_indices); }();
                        });
    self->root_38_layout_42_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{  std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;cells_vector.push_back({ [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->root_38_image_46_preferred_width.get(), 0));;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->root_38_icon_size.get(), layout_info.max_percent, self->root_38_icon_size.get(), layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) });cells_vector.push_back({ [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->label_48), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 10 - 1)) });self->repeater_1.ensure_updated(self);self->repeater_1.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Horizontal)); }); slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::box_layout_info(cells,self->root_38_layout_42_spacing.get(),[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(self->root_38_horizontal_padding.get(), self->root_38_horizontal_padding.get()),slint::cbindgen_private::LayoutAlignment::Stretch); }();
                        });
    self->root_38_layout_42_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{  std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;cells_vector.push_back({ [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->root_38_image_46_preferred_height.get(), 0))) });cells_vector.push_back({ [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->label_48), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 10 - 1)) });self->repeater_1.ensure_updated(self);self->repeater_1.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Vertical)); }); slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::box_layout_info_ortho(cells,[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0)); }();
                        });
    self->root_38_layout_42_spacing.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return 10;
                        });
    self->root_38_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (self->root_38_is_current.get()) { return 1; } else { return [&]() -> float { if (! self->root_38_entry.get().enabled) { return 2; } else { return 0; }}(); }}();
                        });
    self->root_38_touch_area_41_absolute_position.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto parent_position = slint::LogicalPosition(slint::cbindgen_private::slint_item_absolute_position(&self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 4 - 1));;return [&](const auto &a_0, const auto &a_1){ slint::LogicalPosition o{}; o.x = a_0; o.y = a_1; return o; }((parent_position.x + 0), (parent_position.y + 0)); }();
                        });
    self->root_38_touch_area_41_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_38_height.get();
                        });
    self->root_38_touch_area_41_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_38_width.get();
                        });
    self->background_layer_39.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> slint::Brush { if (std::abs(float(self->root_38_state.get() - 1)) < std::numeric_limits<float>::epsilon()) { return self->root_38_current_background.get(); } else { return slint::Brush(slint::Color::from_argb_encoded(0)); }}();
                        });
    self->touch_area_visibility_40.clip.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (! (! self->root_38_entry.get().is_separator));
                        });
    self->touch_area_41.enabled.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_38_entry.get().enabled;
                        });
    self->touch_area_41.pointer_event.set_handler(
                    [this]([[maybe_unused]] slint::private_api::PointerEvent arg_0) {
                        [[maybe_unused]] auto self = this;
                        [&]() -> void { if ((arg_0.kind == slint::cbindgen_private::PointerEventKind::Move) && (! self->root_38_is_current.get())) { self->root_38_set_current.call(); } else { [&]() -> void { if (((arg_0.kind == slint::cbindgen_private::PointerEventKind::Down) && self->root_38_entry.get().has_sub_menu) && self->root_38_entry.get().enabled) { self->root_38_activate.call(self->root_38_entry.get(),self->root_38_touch_area_41_absolute_position.get().y); } else { [&]() -> void { if ((((((arg_0.kind == slint::cbindgen_private::PointerEventKind::Up) && (self->touch_area_41.mouse_y.get() > 0)) && (self->touch_area_41.mouse_y.get() < self->root_38_height.get())) && (self->touch_area_41.mouse_x.get() > 0)) && (self->touch_area_41.mouse_x.get() < self->root_38_width.get())) && self->root_38_entry.get().enabled) { self->root_38_activate.call(self->root_38_entry.get(),self->root_38_touch_area_41_absolute_position.get().y); } else { ; }}(); }}(); }}();
                    });
    self->image_46.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_38_label_48_font_metrics = self->root_38_label_48_font_metrics.get();;return (tmp_root_38_label_48_font_metrics.ascent -(float) tmp_root_38_label_48_font_metrics.descent); }();
                        });
    self->image_46.image_fit.set(slint::cbindgen_private::ImageFit::Contain);
    self->image_46.source.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_38_entry.get().icon;
                        });
    self->image_46.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (1 * self->root_38_icon_size.get());
                        });
    self->label_Opacity_47.opacity.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (std::abs(float(self->root_38_state.get() - 2)) < std::numeric_limits<float>::epsilon()) { return 0.5; } else { return 1; }}();
                        });
    self->label_48.color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> slint::Brush { if (std::abs(float(self->root_38_state.get() - 1)) < std::numeric_limits<float>::epsilon()) { return self->root_38_current_foreground.get(); } else { return self->root_38_default_foreground.get(); }}();
                        });
    self->label_48.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->root_38_background_layer_39_height.get() -(float) 0) -(float) 0);
                        });
    self->label_48.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_38_entry.get().title;
                        });
    self->label_48.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->label_48.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_38_layout_42_layout_cache.get()[3];
                        });
    self->background_layer_39.border_color.set_constant();
    self->background_layer_39.border_width.set_constant();
    self->touch_area_visibility_40.border_bottom_left_radius.set_constant();
    self->touch_area_visibility_40.border_bottom_right_radius.set_constant();
    self->touch_area_visibility_40.border_top_left_radius.set_constant();
    self->touch_area_visibility_40.border_top_right_radius.set_constant();
    self->touch_area_visibility_40.border_width.set_constant();
    self->touch_area_41.mouse_cursor.set_constant();
    self->image_46.colorize.set_constant();
    self->image_46.image_fit.set_constant();
    self->image_46.image_rendering.set_constant();
    self->label_48.horizontal_alignment.set_constant();
    self->label_48.vertical_alignment.set_constant();
    self->repeater_0.set_model_binding([self] { (void)self; return self->root_38_entry.get().checked; });
    self->repeater_1.set_model_binding([self] { (void)self; return self->root_38_entry.get().has_sub_menu; });
    self->repeater_2.set_model_binding([self] { (void)self; return self->root_38_entry.get().is_separator; });
}

inline auto MenuItemBase_root_38::user_init () -> void{
    [[maybe_unused]] auto self = this;
    self->change_tracker0.init(self, [](auto self) { return self->touch_area_41.has_hover.get(); }, []([[maybe_unused]] auto self, auto) { [&]() -> void { if ((! self->touch_area_41.has_hover.get()) && self->root_38_is_current.get()) { self->root_38_clear_current.call(); } else { ; }}(); });
}

inline auto MenuItemBase_root_38::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->root_38_layout_42_layoutinfo_h.get()))) : ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->root_38_layout_42_layoutinfo_v.get())));
}

inline auto MenuItemBase_root_38::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_38_height.get()), float(self->root_38_width.get()), float(self->root_38_x.get()), float(self->root_38_y.get())));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_38_height.get()), float(self->root_38_width.get()), float(0), float(0)));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(0), float(0), float(0), float(0)));
        case 4: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_38_height.get()), float(self->root_38_width.get()), float(0), float(0)));
        case 5: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(((self->root_38_height.get() -(float) 0) -(float) 0)), float(self->root_38_icon_size.get()), float(self->root_38_layout_42_layout_cache.get()[0]), float(0)));
        case 6: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(((self->root_38_height.get() -(float) 0) -(float) 0)), float(self->root_38_layout_42_layout_cache.get()[3]), float(self->root_38_layout_42_layout_cache.get()[2]), float(0)));
        case 9: return slint::private_api::convert_anonymous_rect(std::make_tuple(float([&]{ [[maybe_unused]] auto tmp_root_38_label_48_font_metrics = self->root_38_label_48_font_metrics.get();;return (tmp_root_38_label_48_font_metrics.ascent -(float) tmp_root_38_label_48_font_metrics.descent); }()), float((1 * self->root_38_icon_size.get())), float(0), float(self->root_38_image_46_y.get())));
        case 10: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(((self->root_38_height.get() -(float) 0) -(float) 0)), float(self->root_38_layout_42_layout_cache.get()[3]), float(0), float(0)));
    }
    return {};
}

inline auto MenuItemBase_root_38::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 10: return slint::cbindgen_private::AccessibleRole::Text;
    }
    return {};
}

inline auto MenuItemBase_root_38::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (10 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->root_38_entry.get().title;
    }
    return {};
}

inline auto MenuItemBase_root_38::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto MenuItemBase_root_38::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto MenuItemBase_root_38::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto MenuItemBase_root_38::visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t{
        auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                return self->repeater_0.visit(order, visitor);
            }
        case 1: {
                self->repeater_1.ensure_updated(self);
                return self->repeater_1.visit(order, visitor);
            }
        case 2: {
                self->repeater_2.ensure_updated(self);
                return self->repeater_2.visit(order, visitor);
            } };
        std::abort();
}

inline auto MenuItemBase_root_38::subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                return self->repeater_0.index_range();
            }
        case 1: {
                self->repeater_1.ensure_updated(self);
                return self->repeater_1.index_range();
            }
        case 2: {
                self->repeater_2.ensure_updated(self);
                return self->repeater_2.index_range();
            } };
        std::abort();
}

inline auto MenuItemBase_root_38::subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                *result = self->repeater_0.instance_at(subtree_index);
                return;
            }
        case 1: {
                self->repeater_1.ensure_updated(self);
                *result = self->repeater_1.instance_at(subtree_index);
                return;
            }
        case 2: {
                self->repeater_2.ensure_updated(self);
                *result = self->repeater_2.instance_at(subtree_index);
                return;
            } };
        std::abort();
}

inline auto MenuItem_root_53::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    this->base_55.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 1 - 1, tree_index_of_first_child + 2 - 1);
    self->root_53_empty_54_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::BoxLayoutCellData>(std::array<slint::cbindgen_private::BoxLayoutCellData, 1>{ slint::cbindgen_private::BoxLayoutCellData ( [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->base_55.root_38_layout_42_layoutinfo_h.get())))) ) }.data(), 1), [&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(5, 5), self->root_53_width.get(), 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->root_53_empty_54_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::BoxLayoutCellData>(std::array<slint::cbindgen_private::BoxLayoutCellData, 1>{ slint::cbindgen_private::BoxLayoutCellData ( [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->base_55.root_38_layout_42_layoutinfo_h.get())))) ) }.data(), 1),0,[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(5, 5),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->root_53_empty_54_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::BoxLayoutCellData>(std::array<slint::cbindgen_private::BoxLayoutCellData, 1>{ slint::cbindgen_private::BoxLayoutCellData ( [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->base_55.root_38_layout_42_layoutinfo_v.get())))) ) }.data(), 1),[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(5, 5));
                        });
    self->root_53_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_base_55_entry = self->base_55.root_38_entry.get();;return ([&]{ [[maybe_unused]] auto layout_info_6 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }([&]() -> float { if (tmp_base_55_entry.is_separator) { return 1; } else { return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->base_55.root_38_layout_42_layoutinfo_v.get()))).max; }}(), layout_info_6.max_percent, [&]() -> float { if (tmp_base_55_entry.is_separator) { return 1; } else { return std::max<float>(40, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->base_55.root_38_layout_42_layoutinfo_v.get()))).min); }}(), layout_info_6.min_percent, layout_info_6.preferred, layout_info_6.stretch); }() + self->root_53_empty_54_layoutinfo_v.get()); }();
                        });
    self->root_53_max_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (self->base_55.root_38_entry.get().is_separator) { return 1; } else { return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->base_55.root_38_layout_42_layoutinfo_v.get()))).max; }}();
                        });
    self->root_53_min_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (self->base_55.root_38_entry.get().is_separator) { return 1; } else { return std::max<float>(40, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->base_55.root_38_layout_42_layoutinfo_v.get()))).min); }}();
                        });
    self->base_55.background_layer_39.border_radius.set(4);
    self->base_55.root_38_current_background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(268435455); } else { return slint::Color::from_argb_encoded(167772160); }}());
                        });
    self->base_55.root_38_current_foreground.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.294967295e9); } else { return slint::Color::from_argb_encoded(+3.85875968e9); }}());
                        });
    self->base_55.root_38_default_foreground.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.294967295e9); } else { return slint::Color::from_argb_encoded(+3.85875968e9); }}());
                        });
    self->base_55.label_48.font_size.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (1.0766 * slint::private_api::get_resolved_default_font_size(*this));
                        });
    self->base_55.label_48.font_weight.set(static_cast<int>(400));
    self->base_55.root_38_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->root_53_height.get() -(float) 5) -(float) 5);
                        });
    self->base_55.root_38_horizontal_padding.set(11);
    self->base_55.root_38_icon_size.set(12);
    self->base_55.root_38_separator_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(352321535); } else { return slint::Color::from_argb_encoded(+1.92937984e9); }}());
                        });
    self->base_55.root_38_layout_42_spacing.set(8);
    self->base_55.root_38_sub_menu_icon.set(slint::private_api::load_image_from_embedded_data(slint_embedded_resource_3, "svg"));
    self->base_55.root_38_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_53_empty_54_layout_cache.get()[1];
                        });
    self->base_55.root_38_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_53_empty_54_layout_cache.get()[0];
                        });
    self->base_55.root_38_y.set(5);
    self->base_55.root_38_horizontal_padding.set_constant();
    self->base_55.root_38_icon_size.set_constant();
    self->base_55.root_38_sub_menu_icon.set_constant();
    self->base_55.root_38_y.set_constant();
}

inline auto MenuItem_root_53::user_init () -> void{
    [[maybe_unused]] auto self = this;
    this->base_55.user_init();
}

inline auto MenuItem_root_53::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->root_53_empty_54_layoutinfo_h.get()) : [&]{ [[maybe_unused]] auto layout_info = self->root_53_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->root_53_max_height.get(), layout_info.max_percent, self->root_53_min_height.get(), layout_info.min_percent, layout_info.preferred, layout_info.stretch); }();
}

inline auto MenuItem_root_53::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_53_height.get()), float(self->root_53_width.get()), float(self->root_53_x.get()), float(self->root_53_y.get())));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(((self->root_53_height.get() -(float) 5) -(float) 5)), float(self->root_53_empty_54_layout_cache.get()[1]), float(self->root_53_empty_54_layout_cache.get()[0]), float(5)));
    }
    if (index == 1) {
        return self->base_55.item_geometry(0);
    } else if (index >= 2 && index < 12) {
        return self->base_55.item_geometry(index - 1);
    } else return {};
}

inline auto MenuItem_root_53::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 1) {
        return self->base_55.accessible_role(0);
    } else if (index >= 2 && index < 12) {
        return self->base_55.accessible_role(index - 1);
    } else return {};
}

inline auto MenuItem_root_53::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    if (index == 1) {
        return self->base_55.accessible_string_property(0, what);
    } else if (index >= 2 && index < 12) {
        return self->base_55.accessible_string_property(index - 1, what);
    } else return {};
}

inline auto MenuItem_root_53::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    if (index == 1) {
        return self->base_55.accessibility_action(0, action);
    } else if (index >= 2 && index < 12) {
        return self->base_55.accessibility_action(index - 1, action);
    } else return ;
}

inline auto MenuItem_root_53::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 1) {
        return self->base_55.supported_accessibility_actions(0);
    } else if (index >= 2 && index < 12) {
        return self->base_55.supported_accessibility_actions(index - 1);
    } else return {};
}

inline auto MenuItem_root_53::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 1) {
        return self->base_55.element_infos(0);
    } else if (index >= 2 && index < 12) {
        return self->base_55.element_infos(index - 1);
    } else return {};
}

inline auto MenuItem_root_53::visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t{
        auto self = this;
        switch(dyn_index) { 
        case 0: case 1: case 2:  {
                        return self->base_55.visit_dynamic_children(dyn_index - 0, order, visitor);
                    } };
        std::abort();
}

inline auto MenuItem_root_53::subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: case 1: case 2:  {
                        return self->base_55.subtree_range(dyn_index - 0);
                    } };
        std::abort();
}

inline auto MenuItem_root_53::subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: case 1: case 2:  {
                        self->base_55.subtree_component(dyn_index - 0, subtree_index, result);
                        return;
                    } };
        std::abort();
}

inline FluentPalette_71::FluentPalette_71 (const class SharedGlobals *globals)
 : globals(globals)
{
}

inline auto FluentPalette_71::init () -> void{
    (void)this->globals;
    this->background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush([&]() -> slint::Color { if (this->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.280032284e9); } else { return slint::Color::from_argb_encoded(+4.29463833e9); }}());
                        });
    this->color_scheme.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return this->globals->window().window_handle().color_scheme();
                        });
    this->dark_color_scheme.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_FluentPalette_71_color_scheme = this->globals->global_FluentPalette_71->color_scheme.get();;return [&]() -> bool { if (! (tmp_FluentPalette_71_color_scheme == slint::cbindgen_private::ColorScheme::Unknown)) { return (tmp_FluentPalette_71_color_scheme == slint::cbindgen_private::ColorScheme::Dark); } else { return (this->globals->window().window_handle().color_scheme() == slint::cbindgen_private::ColorScheme::Dark); }}(); }();
                        });
    this->foreground.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush([&]() -> slint::Color { if (this->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.294967295e9); } else { return slint::Color::from_argb_encoded(+3.85875968e9); }}());
                        });
    this->selection_foreground.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush([&]() -> slint::Color { if (this->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.27819008e9); } else { return slint::Color::from_argb_encoded(+4.294967295e9); }}());
                        });
}

inline const slint::private_api::ItemTreeVTable Component_menuitem_67::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_menuitem_67>, slint::private_api::dealloc };

inline auto Component_menuitem_67::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class PopupMenuImpl_root_60 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const PopupMenuImpl_root_60>(parent->self_weak.lock().value(), parent);
    this->menuitem_67.init(globals, self_weak.into_dyn(), tree_index, tree_index_of_first_child + 1 - 1);
    self->menuitem_67_absolute_position.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto parent_position = slint::LogicalPosition(slint::cbindgen_private::slint_item_absolute_position(&self->menuitem_67.self_weak.lock()->into_dyn(), self->menuitem_67.tree_index));;return [&](const auto &a_0, const auto &a_1){ slint::LogicalPosition o{}; o.x = a_0; o.y = a_1; return o; }((parent_position.x + 1), (parent_position.y + self->menuitem_67.root_53_y.get())); }();
                        });
    self->menuitem_67.base_55.root_38_activate.set_handler(
                    [this]([[maybe_unused]] slint::private_api::MenuEntry arg_0, [[maybe_unused]] float arg_1) {
                        [[maybe_unused]] auto self = this;
                        self->parent.lock().value()->fn_activate(arg_0,arg_1,self->model_index.get());
                    });
    self->menuitem_67.base_55.root_38_clear_current.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        self->parent.lock().value()->root_60_current_highlight.set(static_cast<int>((- 1)));
                    });
    self->menuitem_67.base_55.root_38_entry.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->model_data.get();
                        });
    self->menuitem_67.root_53_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::layout_cache_access(self->parent.lock().value()->root_60_layout_66_layout_cache.get(), 1, self->model_index.get());
                        });
    self->menuitem_67.base_55.root_38_is_current.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->parent.lock().value()->root_60_current_highlight.get() - self->model_index.get())) < std::numeric_limits<float>::epsilon());
                        });
    self->menuitem_67.base_55.root_38_set_current.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        [&]{ self->globals->window().window_handle().set_focus_item(self->parent.lock().value()->self_weak.lock()->into_dyn(), self->parent.lock().value()->tree_index_of_first_child + 1 - 1, true, slint::cbindgen_private::FocusReason::Programmatic);;self->parent.lock().value()->root_60_current_highlight.set(self->model_index.get());self->parent.lock().value()->root_60_optimized_open_sub_menu_after_timeout_61_running.set(true); }();
                    });
    self->menuitem_67.root_53_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->parent.lock().value()->root_60.width.get() -(float) 1) -(float) 1);
                        });
    self->menuitem_67.root_53_x.set(1);
    self->menuitem_67.root_53_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::layout_cache_access(self->parent.lock().value()->root_60_layout_66_layout_cache.get(), 0, self->model_index.get());
                        });
    self->menuitem_67.root_53_x.set_constant();
}

inline auto Component_menuitem_67::user_init () -> void{
    [[maybe_unused]] auto self = this;
    this->menuitem_67.user_init();
    self->change_tracker0.init(self, [](auto self) { return self->menuitem_67.base_55.root_38_is_current.get(); }, []([[maybe_unused]] auto self, auto) { [&]() -> void { if (self->menuitem_67.base_55.root_38_is_current.get()) { self->parent.lock().value()->root_60_current_highlight_y_pos.set((self->menuitem_67_absolute_position.get().y -(float) self->parent.lock().value()->root_60_absolute_position.get().y)); } else { ; }}(); });
}

inline auto Component_menuitem_67::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->menuitem_67.root_53_empty_54_layoutinfo_h.get()) : [&]{ [[maybe_unused]] auto layout_info = self->menuitem_67.root_53_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->menuitem_67.root_53_max_height.get(), layout_info.max_percent, self->menuitem_67.root_53_min_height.get(), layout_info.min_percent, layout_info.preferred, layout_info.stretch); }();
}

inline auto Component_menuitem_67::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->menuitem_67.root_53_height.get()), float(((self->parent.lock().value()->root_60.width.get() -(float) 1) -(float) 1)), float(1), float(self->menuitem_67.root_53_y.get())));
    }
    if (index == 0) {
        return self->menuitem_67.item_geometry(0);
    } else if (index >= 1 && index < 12) {
        return self->menuitem_67.item_geometry(index - 0);
    } else return {};
}

inline auto Component_menuitem_67::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 0) {
        return self->menuitem_67.accessible_role(0);
    } else if (index >= 1 && index < 12) {
        return self->menuitem_67.accessible_role(index - 0);
    } else return {};
}

inline auto Component_menuitem_67::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    if (index == 0) {
        return self->menuitem_67.accessible_string_property(0, what);
    } else if (index >= 1 && index < 12) {
        return self->menuitem_67.accessible_string_property(index - 0, what);
    } else return {};
}

inline auto Component_menuitem_67::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    if (index == 0) {
        return self->menuitem_67.accessibility_action(0, action);
    } else if (index >= 1 && index < 12) {
        return self->menuitem_67.accessibility_action(index - 0, action);
    } else return ;
}

inline auto Component_menuitem_67::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 0) {
        return self->menuitem_67.supported_accessibility_actions(0);
    } else if (index >= 1 && index < 12) {
        return self->menuitem_67.supported_accessibility_actions(index - 0);
    } else return {};
}

inline auto Component_menuitem_67::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 0) {
        return self->menuitem_67.element_infos(0);
    } else if (index >= 1 && index < 12) {
        return self->menuitem_67.element_infos(index - 0);
    } else return {};
}

inline auto Component_menuitem_67::visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t{
        auto self = this;
        switch(dyn_index) { 
        case 0: case 1: case 2:  {
                        return self->menuitem_67.visit_dynamic_children(dyn_index - 0, order, visitor);
                    } };
        std::abort();
}

inline auto Component_menuitem_67::subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: case 1: case 2:  {
                        return self->menuitem_67.subtree_range(dyn_index - 0);
                    } };
        std::abort();
}

inline auto Component_menuitem_67::subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: case 1: case 2:  {
                        self->menuitem_67.subtree_component(dyn_index - 0, subtree_index, result);
                        return;
                    } };
        std::abort();
}

inline auto Component_menuitem_67::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_menuitem_67*>(base);
        return self->visit_dynamic_children(dyn_index, order, visitor);
    };
    auto self_rc = reinterpret_cast<const Component_menuitem_67*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_menuitem_67::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_menuitem_67::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
    auto self = reinterpret_cast<const Component_menuitem_67*>(component.instance);
    return self->subtree_range(dyn_index);
}

inline auto Component_menuitem_67::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
    auto self = reinterpret_cast<const Component_menuitem_67*>(component.instance);
    self->subtree_component(dyn_index, subtree_index, result);
}

inline auto Component_menuitem_67::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_menuitem_67::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_menuitem_67*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 5 };
}

inline auto Component_menuitem_67::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_menuitem_67::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    auto self = reinterpret_cast<const Component_menuitem_67*>(component.instance);
    return self->model_index.get();
}

inline auto Component_menuitem_67::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(1, 1, 0, 0, false), 
slint::private_api::make_item_node(1, 2, 0, 1, false), 
slint::private_api::make_item_node(2, 3, 1, 2, false), 
slint::private_api::make_item_node(1, 5, 2, 3, false), 
slint::private_api::make_dyn_node(2, 2), 
slint::private_api::make_item_node(3, 6, 3, 4, false), 
slint::private_api::make_item_node(2, 9, 5, 5, false), 
slint::private_api::make_item_node(1, 11, 5, 6, false), 
slint::private_api::make_dyn_node(1, 5), 
slint::private_api::make_dyn_node(0, 6), 
slint::private_api::make_item_node(0, 11, 6, 7, false), 
slint::private_api::make_item_node(0, 12, 7, 8, true) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Component_menuitem_67::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(EmptyVTable), offsetof(Component_menuitem_67, menuitem_67) +  offsetof(MenuItem_root_53, root_53) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable), offsetof(Component_menuitem_67, menuitem_67) + offsetof(MenuItem_root_53, base_55) +  offsetof(MenuItemBase_root_38, root_38) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(Component_menuitem_67, menuitem_67) + offsetof(MenuItem_root_53, base_55) +  offsetof(MenuItemBase_root_38, background_layer_39) }, 
{ SLINT_GET_ITEM_VTABLE(ClipVTable), offsetof(Component_menuitem_67, menuitem_67) + offsetof(MenuItem_root_53, base_55) +  offsetof(MenuItemBase_root_38, touch_area_visibility_40) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable), offsetof(Component_menuitem_67, menuitem_67) + offsetof(MenuItem_root_53, base_55) +  offsetof(MenuItemBase_root_38, touch_area_41) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable), offsetof(Component_menuitem_67, menuitem_67) + offsetof(MenuItem_root_53, base_55) +  offsetof(MenuItemBase_root_38, rectangle_43) }, 
{ SLINT_GET_ITEM_VTABLE(OpacityVTable), offsetof(Component_menuitem_67, menuitem_67) + offsetof(MenuItem_root_53, base_55) +  offsetof(MenuItemBase_root_38, label_Opacity_47) }, 
{ SLINT_GET_ITEM_VTABLE(ImageItemVTable), offsetof(Component_menuitem_67, menuitem_67) + offsetof(MenuItem_root_53, base_55) +  offsetof(MenuItemBase_root_38, image_46) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable), offsetof(Component_menuitem_67, menuitem_67) + offsetof(MenuItem_root_53, base_55) +  offsetof(MenuItemBase_root_38, label_48) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Component_menuitem_67::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_menuitem_67*>(component.instance)->layout_info(o);
}

inline auto Component_menuitem_67::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_menuitem_67*>(component.instance)->item_geometry(index);
}

inline auto Component_menuitem_67::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_menuitem_67*>(component.instance)->accessible_role(index);
}

inline auto Component_menuitem_67::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_menuitem_67*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_menuitem_67::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_menuitem_67*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_menuitem_67::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_menuitem_67*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_menuitem_67::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_menuitem_67::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_menuitem_67*>(component.instance)->globals->window().window_handle();
}

inline auto Component_menuitem_67::create (class PopupMenuImpl_root_60 const * parent) -> slint::ComponentHandle<Component_menuitem_67>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_menuitem_67>::make();
    auto self = const_cast<Component_menuitem_67 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_menuitem_67>{ self_rc };
}

inline Component_menuitem_67::~Component_menuitem_67 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_menuitem_67::update_data ([[maybe_unused]] int i, [[maybe_unused]] const slint::private_api::MenuEntry &data) const -> void{
    [[maybe_unused]] auto self = this;
    self->model_index.set(i);
    self->model_data.set(data);
}

inline auto Component_menuitem_67::init () -> void{
    user_init();
}

inline auto Component_menuitem_67::box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline const slint::private_api::ItemTreeVTable PopupMenuImpl_root_60::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<PopupMenuImpl_root_60>, slint::private_api::dealloc };

inline auto PopupMenuImpl_root_60::update_timers () -> void{
    auto self = this;
    if (self->root_60_optimized_open_sub_menu_after_timeout_61_running.get()) {
       auto interval = std::chrono::milliseconds(self->root_60_optimized_open_sub_menu_after_timeout_61_interval.get());
       if (!self->timer0.running() || self->timer0.interval() != interval)
           self->timer0.start(slint::TimerMode::Repeated, interval, [self] { self->root_60_optimized_open_sub_menu_after_timeout_61_triggered.call(); });
    } else { self->timer0.stop(); }
}

inline auto PopupMenuImpl_root_60::fn_activate (slint::private_api::MenuEntry arg_0, float arg_1, int arg_2) const -> void{
    [[maybe_unused]] auto self = this;
    [&]{ self->root_60_optimized_open_sub_menu_after_timeout_61_running.set(false);[&]() -> void { if (arg_0.has_sub_menu) { [&]() -> void { if ((std::abs(float(self->root_60_current_open.get() - arg_2)) >= std::numeric_limits<float>::epsilon()) || (! slint_contextmenu_is_open(&self->sub_menu_69, &self->globals->window().window_handle().handle(), &self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 2 - 1))) { [&]{ self->root_60_current_open.set(arg_2);self->root_60_sub_menu_69_entries.set(self->root_60_sub_menu.call(arg_0));self->sub_menu_69.show.call([&](const auto &a_0, const auto &a_1){ slint::LogicalPosition o{}; o.x = a_0; o.y = a_1; return o; }(self->root_60.width.get(), (arg_1 -(float) self->root_60_sub_menu_69_absolute_position.get().y))); }(); } else { ; }}(); } else { [&]{ self->root_60_current_open.set(static_cast<int>(-1));self->root_60_activated.call(arg_0);self->root_60_close.call(); }(); }}(); }();
}

inline auto PopupMenuImpl_root_60::fn_focus () const -> void{
    [[maybe_unused]] auto self = this;
    self->globals->window().window_handle().set_focus_item(self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 1 - 1, true, slint::cbindgen_private::FocusReason::Programmatic);;
}

inline auto PopupMenuImpl_root_60::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->root_60_absolute_position.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto parent_position = slint::LogicalPosition(slint::cbindgen_private::slint_item_absolute_position(&self->self_weak.lock()->into_dyn(), self->tree_index));;return [&](const auto &a_0, const auto &a_1){ slint::LogicalPosition o{}; o.x = a_0; o.y = a_1; return o; }((parent_position.x + 0), (parent_position.y + 0)); }();
                        });
    self->root_60.background.set(slint::Brush(slint::Color::from_argb_encoded(0)));
    self->root_60_current_highlight.set(static_cast<int>(-1));
    self->root_60_current_open.set(static_cast<int>(-1));
    self->root_60_entries.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::make_shared<slint::private_api::ArrayModel<0,slint::private_api::MenuEntry>>();
                        });
    self->root_60_frame_64_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto layout_info_7 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_7.max, layout_info_7.max_percent, std::max<float>(280, self->root_60_layout_66_layoutinfo_h.get().min), layout_info_7.min_percent, layout_info_7.preferred, layout_info_7.stretch); }() + self->root_60_layout_66_layoutinfo_h.get());
                        });
    self->root_60_layout_66_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ std::array<int, 2> repeated_indices_array; std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;self->repeater_0.ensure_updated(self);repeated_indices_array[0] = cells_vector.size();repeated_indices_array[1] = self->repeater_0.len();self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Vertical)); });slint::cbindgen_private::Slice<int> repeated_indices = slint::private_api::make_slice(std::span(repeated_indices_array)); slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, cells, [&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(1, 1), self->root_60.height.get(), 0),repeated_indices); }();
                        });
    self->root_60_layout_66_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{  std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;self->repeater_0.ensure_updated(self);self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Horizontal)); }); slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::box_layout_info_ortho(cells,[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(1, 1)); }();
                        });
    self->root_60_layout_66_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{  std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;self->repeater_0.ensure_updated(self);self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Vertical)); }); slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::box_layout_info(cells,0,[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(1, 1),slint::cbindgen_private::LayoutAlignment::Stretch); }();
                        });
    self->root_60_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(WindowItemVTable), const_cast<slint::cbindgen_private::WindowItem*>(&self->root_60), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->root_60_frame_64_layoutinfo_h.get()));
                        });
    self->root_60_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(WindowItemVTable), const_cast<slint::cbindgen_private::WindowItem*>(&self->root_60), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->root_60_layout_66_layoutinfo_v.get())));
                        });
    self->root_60_optimized_open_sub_menu_after_timeout_61_interval.set(500);
    self->root_60_optimized_open_sub_menu_after_timeout_61_running.set(false);
    self->root_60_optimized_open_sub_menu_after_timeout_61_triggered.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        [&]{ self->root_60_optimized_open_sub_menu_after_timeout_61_running.set(false);[&]() -> void { if (self->root_60_current_highlight.get() >= 0) { [&]() -> void { if (slint::private_api::access_array_index(self->root_60_entries.get(), self->root_60_current_highlight.get()).has_sub_menu) { self->fn_activate(slint::private_api::access_array_index(self->root_60_entries.get(), self->root_60_current_highlight.get()),self->root_60_current_highlight_y_pos.get(),self->root_60_current_highlight.get()); } else { [&]{ self->root_60_current_open.set(static_cast<int>((- 1)));slint_contextmenu_close(&self->sub_menu_69, &self->globals->window().window_handle().handle(), &self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 2 - 1); }(); }}(); } else { ; }}(); }();
                    });
    self->root_60_sub_menu_69_absolute_position.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto parent_position = slint::LogicalPosition(slint::cbindgen_private::slint_item_absolute_position(&self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 2 - 1));;return [&](const auto &a_0, const auto &a_1){ slint::LogicalPosition o{}; o.x = a_0; o.y = a_1; return o; }((parent_position.x + 0), (parent_position.y + 0)); }();
                        });
    self->root_60.title.set(slint::SharedString(u8"Slint Window"));
    self->focus_scope_62.enabled.set(true);
    self->focus_scope_62.focus_on_click.set(true);
    self->focus_scope_62.focus_on_tab_navigation.set(true);
    self->focus_scope_62.key_pressed.set_handler(
                    [this]([[maybe_unused]] slint::private_api::KeyEvent arg_0) {
                        [[maybe_unused]] auto self = this;
                        return [&]{ [[maybe_unused]] auto returned_expression0 = [&]{ self->root_60_optimized_open_sub_menu_after_timeout_61_running.set(false);[[maybe_unused]] auto return_check_merge0 = [&]() -> std::tuple<bool, slint::cbindgen_private::EventResult> { if (arg_0.text == slint::SharedString(u8"\U0000f700")) { return std::make_tuple(false, [&]{ [&]() -> void { if (self->root_60_current_highlight.get() < 1) { self->root_60_current_highlight.set(static_cast<int>((slint::private_api::model_length(self->root_60_entries.get()) -(float) 1))); } else { [&]() -> void { if (slint::private_api::access_array_index(self->root_60_entries.get(), static_cast<int>((self->root_60_current_highlight.get() -(float) 1))).is_separator) { self->root_60_current_highlight.set((self->root_60_current_highlight.get() -(float) static_cast<int>(2))); } else { self->root_60_current_highlight.set((self->root_60_current_highlight.get() -(float) static_cast<int>(1))); }}(); }}();return slint::cbindgen_private::EventResult::Accept; }()); } else { return [&]() -> std::tuple<bool, slint::cbindgen_private::EventResult> { if (arg_0.text == slint::SharedString(u8"\U0000f701")) { return std::make_tuple(false, [&]{ [&]() -> void { if (self->root_60_current_highlight.get() >= (slint::private_api::model_length(self->root_60_entries.get()) -(float) 1)) { self->root_60_current_highlight.set(static_cast<int>(0)); } else { [&]() -> void { if (slint::private_api::access_array_index(self->root_60_entries.get(), static_cast<int>((self->root_60_current_highlight.get() + 1))).is_separator) { self->root_60_current_highlight.set((self->root_60_current_highlight.get() + static_cast<int>(2))); } else { self->root_60_current_highlight.set((self->root_60_current_highlight.get() + static_cast<int>(1))); }}(); }}();return slint::cbindgen_private::EventResult::Accept; }()); } else { return [&]() -> std::tuple<bool, slint::cbindgen_private::EventResult> { if (arg_0.text == slint::SharedString(u8"\n")) { return std::make_tuple(false, [&]{ [&]() -> void { if (((self->root_60_current_highlight.get() >= 0) && (self->root_60_current_highlight.get() < slint::private_api::model_length(self->root_60_entries.get()))) && slint::private_api::access_array_index(self->root_60_entries.get(), self->root_60_current_highlight.get()).enabled) { self->fn_activate(slint::private_api::access_array_index(self->root_60_entries.get(), self->root_60_current_highlight.get()),self->root_60_current_highlight_y_pos.get(),self->root_60_current_highlight.get()); } else { ; }}();return slint::cbindgen_private::EventResult::Accept; }()); } else { return [&]() -> std::tuple<bool, slint::cbindgen_private::EventResult> { if (! (arg_0.text == slint::SharedString(u8"\U0000f703"))) { return [&]{ [&]() -> void { if (arg_0.text == slint::SharedString(u8"\U0000f702")) { self->root_60_close.call(); } else { ; }}();return std::make_tuple(true, slint::cbindgen_private::EventResult::Reject); }(); } else { return std::make_tuple(false, [&]{ [&]() -> void { if ((((self->root_60_current_highlight.get() >= 0) && (self->root_60_current_highlight.get() < slint::private_api::model_length(self->root_60_entries.get()))) && slint::private_api::access_array_index(self->root_60_entries.get(), self->root_60_current_highlight.get()).has_sub_menu) && slint::private_api::access_array_index(self->root_60_entries.get(), self->root_60_current_highlight.get()).enabled) { self->fn_activate(slint::private_api::access_array_index(self->root_60_entries.get(), self->root_60_current_highlight.get()),self->root_60_current_highlight_y_pos.get(),self->root_60_current_highlight.get()); } else { ; }}();return slint::cbindgen_private::EventResult::Accept; }()); }}(); }}(); }}(); }}();;return [&]() -> std::tuple<slint::cbindgen_private::EventResult, bool, slint::cbindgen_private::EventResult> { if (std::get<0>(return_check_merge0)) { return std::make_tuple(slint::cbindgen_private::EventResult::Reject, true, slint::cbindgen_private::EventResult::Reject); } else { return std::make_tuple(slint::cbindgen_private::EventResult::Reject, false, std::get<1>(return_check_merge0)); }}(); }();;return [&]() -> slint::cbindgen_private::EventResult { if (std::get<1>(returned_expression0)) { return std::get<0>(returned_expression0); } else { return std::get<2>(returned_expression0); }}(); }();
                    });
    self->frame_shadow_63.blur.set(16);
    self->frame_shadow_63.border_radius.set(7);
    self->frame_shadow_63.color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+1.107296256e9); } else { return slint::Color::from_argb_encoded(603979776); }}()).color();
                        });
    self->frame_shadow_63.offset_y.set(8);
    self->frame_64.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.280032284e9); } else { return slint::Color::from_argb_encoded(+4.29463833e9); }}());
                        });
    self->frame_64.border_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_71->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(352321535); } else { return slint::Color::from_argb_encoded(+1.92937984e9); }}());
                        });
    self->frame_64.border_radius.set(7);
    self->frame_64.border_width.set(1);
    self->frame_clip_65.border_bottom_left_radius.set(7);
    self->frame_clip_65.border_bottom_right_radius.set(7);
    self->frame_clip_65.border_top_left_radius.set(7);
    self->frame_clip_65.border_top_right_radius.set(7);
    self->frame_clip_65.border_width.set(1);
    self->frame_clip_65.clip.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return true;
                        });
    self->sub_menu_69.activated.set_handler(
                    [this]([[maybe_unused]] slint::private_api::MenuEntry arg_0) {
                        [[maybe_unused]] auto self = this;
                        [&]{ self->root_60_current_open.set(static_cast<int>((- 1)));self->root_60_activated.call(arg_0);self->root_60_close.call(); }();
                    });
    self->sub_menu_69.enabled.set(true);
    self->sub_menu_69.show.set_handler(
                    [this]([[maybe_unused]] slint::LogicalPosition arg_0) {
                        [[maybe_unused]] auto self = this;
                        
                    self->globals->window().window_handle().close_popup(self->sub_menu_69.popup_id);
                    self->sub_menu_69.popup_id = self->globals->window().window_handle().template show_popup_menu<PopupMenuImpl_root_60>(self->globals, arg_0, { self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 2 - 1 }, [self](auto popup_menu) {
                        auto parent_weak = self->self_weak;
                        auto self_ = self;
                        auto entries = self->root_60_sub_menu_69_entries.get();
                        const slint::cbindgen_private::ContextMenu *context_menu = &(self->sub_menu_69);
                        auto self = popup_menu;
                        self->root_60_entries.set(std::move(entries));
                        self->root_60_sub_menu.set_handler(
                        [context_menu, parent_weak](const auto &entry) {
                            if(auto lock = parent_weak.lock()) {
                                return context_menu->sub_menu.call(entry);
                            } else {
                                return std::shared_ptr<slint::Model<slint::cbindgen_private::MenuEntry>>();
                            }
                        });
                        self->root_60_activated.set_handler(
                        [context_menu, parent_weak](const auto &entry) {
                            if(auto lock = parent_weak.lock()) {
                                return context_menu->activated.call(entry);
                            } else {
                                return ;
                            }
                        });
                        self->root_60_close.set_handler([parent_weak,self = self_] { if(auto lock = parent_weak.lock()) { self->globals->window().window_handle().close_popup(self->sub_menu_69.popup_id); } });
                    });;
                    });
    self->sub_menu_69.sub_menu.set_handler(
                    [this]([[maybe_unused]] slint::private_api::MenuEntry arg_0) {
                        [[maybe_unused]] auto self = this;
                        return self->root_60_sub_menu.call(arg_0);
                    });
    self->root_60.always_on_top.set_constant();
    self->root_60.background.set_constant();
    self->root_60.default_font_family.set_constant();
    self->root_60.default_font_size.set_constant();
    self->root_60.default_font_weight.set_constant();
    self->root_60.icon.set_constant();
    self->root_60.no_frame.set_constant();
    self->root_60_optimized_open_sub_menu_after_timeout_61_interval.set_constant();
    self->root_60.resize_border_width.set_constant();
    self->root_60.title.set_constant();
    self->focus_scope_62.enabled.set_constant();
    self->focus_scope_62.focus_on_click.set_constant();
    self->focus_scope_62.focus_on_tab_navigation.set_constant();
    self->frame_shadow_63.blur.set_constant();
    self->frame_shadow_63.border_radius.set_constant();
    self->frame_shadow_63.offset_x.set_constant();
    self->frame_shadow_63.offset_y.set_constant();
    self->frame_64.border_radius.set_constant();
    self->frame_64.border_width.set_constant();
    self->frame_clip_65.border_bottom_left_radius.set_constant();
    self->frame_clip_65.border_bottom_right_radius.set_constant();
    self->frame_clip_65.border_top_left_radius.set_constant();
    self->frame_clip_65.border_top_right_radius.set_constant();
    self->frame_clip_65.border_width.set_constant();
    self->sub_menu_69.enabled.set_constant();
    self->repeater_0.set_model_binding([self] { (void)self; return self->root_60_entries.get(); });
}

inline auto PopupMenuImpl_root_60::user_init () -> void{
    [[maybe_unused]] auto self = this;
    self->fn_focus();
    ;
    self->change_tracker0.init(self, [](auto self) { return self->root_60_optimized_open_sub_menu_after_timeout_61_interval.get(); }, []([[maybe_unused]] auto self, auto) { self->update_timers(); });
    self->change_tracker1.init(self, [](auto self) { return self->root_60_optimized_open_sub_menu_after_timeout_61_running.get(); }, []([[maybe_unused]] auto self, auto) { self->update_timers(); });
    self->update_timers();
}

inline auto PopupMenuImpl_root_60::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? self->root_60_layoutinfo_h.get() : self->root_60_layoutinfo_v.get();
}

inline auto PopupMenuImpl_root_60::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_60.height.get()), float(self->root_60.width.get()), float(0), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_60.height.get()), float(self->root_60.width.get()), float(0), float(0)));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(0), float(0), float(0), float(0)));
        case 3: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_60.height.get()), float(self->root_60.width.get()), float(0), float(0)));
        case 4: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_60.height.get()), float(self->root_60.width.get()), float(0), float(0)));
        case 5: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_60.height.get()), float(self->root_60.width.get()), float(0), float(0)));
    }
    return {};
}

inline auto PopupMenuImpl_root_60::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto PopupMenuImpl_root_60::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

inline auto PopupMenuImpl_root_60::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto PopupMenuImpl_root_60::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto PopupMenuImpl_root_60::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto PopupMenuImpl_root_60::visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t{
        auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                return self->repeater_0.visit(order, visitor);
            } };
        std::abort();
}

inline auto PopupMenuImpl_root_60::subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                return self->repeater_0.index_range();
            } };
        std::abort();
}

inline auto PopupMenuImpl_root_60::subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                *result = self->repeater_0.instance_at(subtree_index);
                return;
            } };
        std::abort();
}

inline auto PopupMenuImpl_root_60::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const PopupMenuImpl_root_60*>(base);
        return self->visit_dynamic_children(dyn_index, order, visitor);
    };
    auto self_rc = reinterpret_cast<const PopupMenuImpl_root_60*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto PopupMenuImpl_root_60::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto PopupMenuImpl_root_60::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
    auto self = reinterpret_cast<const PopupMenuImpl_root_60*>(component.instance);
    return self->subtree_range(dyn_index);
}

inline auto PopupMenuImpl_root_60::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
    auto self = reinterpret_cast<const PopupMenuImpl_root_60*>(component.instance);
    self->subtree_component(dyn_index, subtree_index, result);
}

inline auto PopupMenuImpl_root_60::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto PopupMenuImpl_root_60::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
}

inline auto PopupMenuImpl_root_60::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto PopupMenuImpl_root_60::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto PopupMenuImpl_root_60::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(2, 1, 0, 0, false), 
slint::private_api::make_item_node(2, 3, 0, 1, false), 
slint::private_api::make_item_node(0, 7, 0, 2, false), 
slint::private_api::make_item_node(0, 5, 1, 3, false), 
slint::private_api::make_item_node(1, 5, 1, 4, false), 
slint::private_api::make_item_node(1, 6, 4, 5, false), 
slint::private_api::make_dyn_node(0, 5) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto PopupMenuImpl_root_60::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(WindowItemVTable),  offsetof(PopupMenuImpl_root_60, root_60) }, 
{ SLINT_GET_ITEM_VTABLE(FocusScopeVTable),  offsetof(PopupMenuImpl_root_60, focus_scope_62) }, 
{ SLINT_GET_ITEM_VTABLE(ContextMenuVTable),  offsetof(PopupMenuImpl_root_60, sub_menu_69) }, 
{ SLINT_GET_ITEM_VTABLE(BoxShadowVTable),  offsetof(PopupMenuImpl_root_60, frame_shadow_63) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(PopupMenuImpl_root_60, frame_64) }, 
{ SLINT_GET_ITEM_VTABLE(ClipVTable),  offsetof(PopupMenuImpl_root_60, frame_clip_65) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto PopupMenuImpl_root_60::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const PopupMenuImpl_root_60*>(component.instance)->layout_info(o);
}

inline auto PopupMenuImpl_root_60::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const PopupMenuImpl_root_60*>(component.instance)->item_geometry(index);
}

inline auto PopupMenuImpl_root_60::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const PopupMenuImpl_root_60*>(component.instance)->accessible_role(index);
}

inline auto PopupMenuImpl_root_60::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const PopupMenuImpl_root_60*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto PopupMenuImpl_root_60::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const PopupMenuImpl_root_60*>(component.instance)->accessibility_action(index, *action);
}

inline auto PopupMenuImpl_root_60::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const PopupMenuImpl_root_60*>(component.instance)->supported_accessibility_actions(index);
}

inline auto PopupMenuImpl_root_60::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto PopupMenuImpl_root_60::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const PopupMenuImpl_root_60*>(component.instance)->globals->window().window_handle();
}

inline auto PopupMenuImpl_root_60::create (const SharedGlobals *globals) -> slint::ComponentHandle<PopupMenuImpl_root_60>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, PopupMenuImpl_root_60>::make();
    auto self = const_cast<PopupMenuImpl_root_60 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    self->globals = globals;
    slint::private_api::register_item_tree(&self_rc.into_dyn(), self->globals->m_window);
    self->init(self->globals, self->self_weak, 0, 1 );
    return slint::ComponentHandle<PopupMenuImpl_root_60>{ self_rc };
}

inline PopupMenuImpl_root_60::~PopupMenuImpl_root_60 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline const slint::private_api::ItemTreeVTable Recipe::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Recipe>, slint::private_api::dealloc };

inline auto Recipe::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    this->lineedit1_58.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 1 - 1, tree_index_of_first_child + 3 - 1);
    this->button_59.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 2 - 1, tree_index_of_first_child + 12 - 1);
    self->root_56.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->globals->global_FluentPalette_71->background.get();
                        });
    self->root_56_counter.set(static_cast<int>(0));
    self->root_56_empty_57_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::BoxLayoutCellData>(std::array<slint::cbindgen_private::BoxLayoutCellData, 2>{ slint::cbindgen_private::BoxLayoutCellData ( [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->lineedit1_58.root_15_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->lineedit1_58.root_15_layout_17_layoutinfo_v.get().min), layout_info.min_percent, layout_info.preferred, 0); }()) ), slint::cbindgen_private::BoxLayoutCellData ( [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->button_59.root_26_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->button_59.root_26_i_layout_29_layoutinfo_v.get().min), layout_info.min_percent, layout_info.preferred, 0); }()) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8), self->root_56.height.get(), 8),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->root_56_empty_57_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::BoxLayoutCellData>(std::array<slint::cbindgen_private::BoxLayoutCellData, 2>{ slint::cbindgen_private::BoxLayoutCellData ( [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->lineedit1_58.root_15_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(160, self->lineedit1_58.root_15_layout_17_layoutinfo_h.get().min), layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::BoxLayoutCellData ( [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->button_59.root_26_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->button_59.root_26_i_layout_29_layoutinfo_h.get().min), layout_info.min_percent, layout_info.preferred, 0); }()) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8));
                        });
    self->root_56_empty_57_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::BoxLayoutCellData>(std::array<slint::cbindgen_private::BoxLayoutCellData, 2>{ slint::cbindgen_private::BoxLayoutCellData ( [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->lineedit1_58.root_15_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->lineedit1_58.root_15_layout_17_layoutinfo_v.get().min), layout_info.min_percent, layout_info.preferred, 0); }()) ), slint::cbindgen_private::BoxLayoutCellData ( [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->button_59.root_26_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->button_59.root_26_i_layout_29_layoutinfo_v.get().min), layout_info.min_percent, layout_info.preferred, 0); }()) ) }.data(), 2),8,[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->root_56_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(WindowItemVTable), const_cast<slint::cbindgen_private::WindowItem*>(&self->root_56), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) + self->root_56_empty_57_layoutinfo_h.get());
                        });
    self->root_56_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(WindowItemVTable), const_cast<slint::cbindgen_private::WindowItem*>(&self->root_56), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) + self->root_56_empty_57_layoutinfo_v.get());
                        });
    self->root_56.title.set(slint::SharedString(u8"Slint Window"));
    self->lineedit1_58.root_15_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_56_empty_57_layout_cache.get()[1];
                        });
    self->lineedit1_58.base_18.root_1_placeholder_text.set(slint::SharedString(u8"Enter text here"));
    self->lineedit1_58.root_15_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->root_56.width.get() -(float) 8) -(float) 8);
                        });
    self->lineedit1_58.root_15_x.set(8);
    self->lineedit1_58.root_15_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_56_empty_57_layout_cache.get()[0];
                        });
    self->button_59.root_26_clicked.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        [&]{ self->root_56_counter.set((self->root_56_counter.get() + static_cast<int>(1)));self->root_56_on_clicked.call(self->root_56_counter.get(),static_cast<int>((100 -(float) self->root_56_counter.get()))); }();
                    });
    self->button_59.root_26_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_56_empty_57_layout_cache.get()[3];
                        });
    self->button_59.root_26_text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((slint::SharedString(u8"Button, pressed ") + slint::SharedString::from_number(self->root_56_counter.get())) + slint::SharedString(u8" times"));
                        });
    self->button_59.root_26_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->root_56.width.get() -(float) 8) -(float) 8);
                        });
    self->button_59.root_26_x.set(8);
    self->button_59.root_26_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_56_empty_57_layout_cache.get()[2];
                        });
    self->root_56.always_on_top.set_constant();
    self->root_56.default_font_family.set_constant();
    self->root_56.default_font_size.set_constant();
    self->root_56.default_font_weight.set_constant();
    self->root_56.icon.set_constant();
    self->root_56.no_frame.set_constant();
    self->root_56.resize_border_width.set_constant();
    self->root_56.title.set_constant();
    self->lineedit1_58.root_15_x.set_constant();
    self->button_59.root_26_icon.set_constant();
    self->button_59.root_26_x.set_constant();
}

inline auto Recipe::user_init () -> void{
    [[maybe_unused]] auto self = this;
    this->lineedit1_58.user_init();
    this->button_59.user_init();
    ;
}

inline auto Recipe::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? self->root_56_layoutinfo_h.get() : self->root_56_layoutinfo_v.get();
}

inline auto Recipe::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_56.height.get()), float(self->root_56.width.get()), float(0), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_56_empty_57_layout_cache.get()[1]), float(((self->root_56.width.get() -(float) 8) -(float) 8)), float(8), float(self->root_56_empty_57_layout_cache.get()[0])));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_56_empty_57_layout_cache.get()[3]), float(((self->root_56.width.get() -(float) 8) -(float) 8)), float(8), float(self->root_56_empty_57_layout_cache.get()[2])));
    }
    if (index == 1) {
        return self->lineedit1_58.item_geometry(0);
    } else if (index >= 3 && index < 12) {
        return self->lineedit1_58.item_geometry(index - 2);
    } else if (index == 2) {
        return self->button_59.item_geometry(0);
    } else if (index >= 12 && index < 19) {
        return self->button_59.item_geometry(index - 11);
    } else return {};
}

inline auto Recipe::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 1: return slint::cbindgen_private::AccessibleRole::TextInput;
        case 2: return slint::cbindgen_private::AccessibleRole::Button;
    }
    if (index == 1) {
        return self->lineedit1_58.accessible_role(0);
    } else if (index >= 3 && index < 12) {
        return self->lineedit1_58.accessible_role(index - 2);
    } else if (index == 2) {
        return self->button_59.accessible_role(0);
    } else if (index >= 12 && index < 19) {
        return self->button_59.accessible_role(index - 11);
    } else return {};
}

inline auto Recipe::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (1 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Enabled): return [&]() -> slint::SharedString { if (self->lineedit1_58.base_18.text_input_5.enabled.get()) { return slint::SharedString(u8"true"); } else { return slint::SharedString(u8"false"); }}();
        case (1 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::PlaceholderText): return self->lineedit1_58.base_18.root_1_placeholder_text.get();
        case (1 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::ReadOnly): return [&]() -> slint::SharedString { if (self->lineedit1_58.base_18.text_input_5.read_only.get()) { return slint::SharedString(u8"true"); } else { return slint::SharedString(u8"false"); }}();
        case (1 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Value): return self->lineedit1_58.base_18.text_input_5.text.get();
        case (2 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Checkable): return [&]() -> slint::SharedString { if (false) { return slint::SharedString(u8"true"); } else { return slint::SharedString(u8"false"); }}();
        case (2 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Checked): return [&]() -> slint::SharedString { if (self->button_59.root_26_checked.get()) { return slint::SharedString(u8"true"); } else { return slint::SharedString(u8"false"); }}();
        case (2 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Enabled): return [&]() -> slint::SharedString { if (self->button_59.i_focus_scope_35.enabled.get()) { return slint::SharedString(u8"true"); } else { return slint::SharedString(u8"false"); }}();
        case (2 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->button_59.root_26_text.get();
    }
    if (index == 1) {
        return self->lineedit1_58.accessible_string_property(0, what);
    } else if (index >= 3 && index < 12) {
        return self->lineedit1_58.accessible_string_property(index - 2, what);
    } else if (index == 2) {
        return self->button_59.accessible_string_property(0, what);
    } else if (index >= 12 && index < 19) {
        return self->button_59.accessible_string_property(index - 11, what);
    } else return {};
}

inline auto Recipe::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
        case (1 << 8) | uintptr_t(slint::cbindgen_private::AccessibilityAction::Tag::SetValue): { auto arg_0 = action.set_value._0; return self->lineedit1_58.root_15_accessible_action_set_value.call(arg_0); }
        case (2 << 8) | uintptr_t(slint::cbindgen_private::AccessibilityAction::Tag::Default): return self->button_59.root_26_accessible_action_default.call();
    }
    if (index == 1) {
        return self->lineedit1_58.accessibility_action(0, action);
    } else if (index >= 3 && index < 12) {
        return self->lineedit1_58.accessibility_action(index - 2, action);
    } else if (index == 2) {
        return self->button_59.accessibility_action(0, action);
    } else if (index >= 12 && index < 19) {
        return self->button_59.accessibility_action(index - 11, action);
    } else return ;
}

inline auto Recipe::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 1: return slint::cbindgen_private::SupportedAccessibilityAction_SetValue;
        case 2: return slint::cbindgen_private::SupportedAccessibilityAction_Default;
    }
    if (index == 1) {
        return self->lineedit1_58.supported_accessibility_actions(0);
    } else if (index >= 3 && index < 12) {
        return self->lineedit1_58.supported_accessibility_actions(index - 2);
    } else if (index == 2) {
        return self->button_59.supported_accessibility_actions(0);
    } else if (index >= 12 && index < 19) {
        return self->button_59.supported_accessibility_actions(index - 11);
    } else return {};
}

inline auto Recipe::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 1) {
        return self->lineedit1_58.element_infos(0);
    } else if (index >= 3 && index < 12) {
        return self->lineedit1_58.element_infos(index - 2);
    } else if (index == 2) {
        return self->button_59.element_infos(0);
    } else if (index >= 12 && index < 19) {
        return self->button_59.element_infos(index - 11);
    } else return {};
}

inline auto Recipe::visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t{
        auto self = this;
        switch(dyn_index) { 
        case 0: case 1:  {
                        return self->lineedit1_58.visit_dynamic_children(dyn_index - 0, order, visitor);
                    }
        case 2: case 3: case 4:  {
                        return self->button_59.visit_dynamic_children(dyn_index - 2, order, visitor);
                    } };
        std::abort();
}

inline auto Recipe::subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: case 1:  {
                        return self->lineedit1_58.subtree_range(dyn_index - 0);
                    }
        case 2: case 3: case 4:  {
                        return self->button_59.subtree_range(dyn_index - 2);
                    } };
        std::abort();
}

inline auto Recipe::subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: case 1:  {
                        self->lineedit1_58.subtree_component(dyn_index - 0, subtree_index, result);
                        return;
                    }
        case 2: case 3: case 4:  {
                        self->button_59.subtree_component(dyn_index - 2, subtree_index, result);
                        return;
                    } };
        std::abort();
}

inline auto Recipe::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Recipe*>(base);
        return self->visit_dynamic_children(dyn_index, order, visitor);
    };
    auto self_rc = reinterpret_cast<const Recipe*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Recipe::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Recipe::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
    auto self = reinterpret_cast<const Recipe*>(component.instance);
    return self->subtree_range(dyn_index);
}

inline auto Recipe::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
    auto self = reinterpret_cast<const Recipe*>(component.instance);
    self->subtree_component(dyn_index, subtree_index, result);
}

inline auto Recipe::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Recipe::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
}

inline auto Recipe::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Recipe::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Recipe::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(2, 1, 0, 0, false), 
slint::private_api::make_item_node(1, 3, 0, 1, true), 
slint::private_api::make_item_node(4, 12, 0, 2, true), 
slint::private_api::make_item_node(4, 4, 1, 3, false), 
slint::private_api::make_item_node(1, 8, 3, 4, false), 
slint::private_api::make_dyn_node(0, 3), 
slint::private_api::make_dyn_node(1, 3), 
slint::private_api::make_item_node(0, 12, 3, 5, false), 
slint::private_api::make_item_node(2, 9, 4, 6, false), 
slint::private_api::make_item_node(0, 11, 8, 7, false), 
slint::private_api::make_item_node(1, 11, 8, 8, false), 
slint::private_api::make_item_node(0, 12, 10, 9, false), 
slint::private_api::make_item_node(3, 16, 2, 10, false), 
slint::private_api::make_item_node(0, 19, 2, 11, false), 
slint::private_api::make_item_node(0, 19, 2, 12, false), 
slint::private_api::make_dyn_node(4, 2), 
slint::private_api::make_item_node(0, 19, 12, 13, false), 
slint::private_api::make_dyn_node(2, 12), 
slint::private_api::make_dyn_node(3, 12) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Recipe::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(WindowItemVTable),  offsetof(Recipe, root_56) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable), offsetof(Recipe, lineedit1_58) +  offsetof(LineEdit_root_15, root_15) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable), offsetof(Recipe, button_59) +  offsetof(Button_root_26, root_26) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(Recipe, lineedit1_58) +  offsetof(LineEdit_root_15, background_16) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable), offsetof(Recipe, lineedit1_58) + offsetof(LineEdit_root_15, base_18) +  offsetof(LineEditBase_root_1, root_1) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable), offsetof(Recipe, lineedit1_58) +  offsetof(LineEdit_root_15, focus_border_23) }, 
{ SLINT_GET_ITEM_VTABLE(ClipVTable), offsetof(Recipe, lineedit1_58) + offsetof(LineEdit_root_15, base_18) +  offsetof(LineEditBase_root_1, root_clip_2) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable), offsetof(Recipe, lineedit1_58) + offsetof(LineEdit_root_15, base_18) +  offsetof(LineEditBase_root_1, placeholder_3) }, 
{ SLINT_GET_ITEM_VTABLE(ContextMenuVTable), offsetof(Recipe, lineedit1_58) + offsetof(LineEdit_root_15, base_18) +  offsetof(LineEditBase_root_1, contextmenuinternal_4) }, 
{ SLINT_GET_ITEM_VTABLE(TextInputVTable), offsetof(Recipe, lineedit1_58) + offsetof(LineEdit_root_15, base_18) +  offsetof(LineEditBase_root_1, text_input_5) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(Recipe, button_59) +  offsetof(Button_root_26, i_background_27) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable), offsetof(Recipe, button_59) +  offsetof(Button_root_26, i_touch_area_34) }, 
{ SLINT_GET_ITEM_VTABLE(FocusScopeVTable), offsetof(Recipe, button_59) +  offsetof(Button_root_26, i_focus_scope_35) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(Recipe, button_59) +  offsetof(Button_root_26, i_border_28) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Recipe::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Recipe*>(component.instance)->layout_info(o);
}

inline auto Recipe::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Recipe*>(component.instance)->item_geometry(index);
}

inline auto Recipe::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Recipe*>(component.instance)->accessible_role(index);
}

inline auto Recipe::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Recipe*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Recipe::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Recipe*>(component.instance)->accessibility_action(index, *action);
}

inline auto Recipe::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Recipe*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Recipe::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Recipe::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Recipe*>(component.instance)->globals->window().window_handle();
}

inline auto Recipe::create () -> slint::ComponentHandle<Recipe>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Recipe>::make();
    auto self = const_cast<Recipe *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::cbindgen_private::slint_ensure_backend();
    self->globals = &self->m_globals;
    self->m_globals.root_weak = self->self_weak;
    slint::private_api::register_item_tree(&self_rc.into_dyn(), self->globals->m_window);
    self->init(self->globals, self->self_weak, 0, 1 );
    self->user_init();
    self->window();
    return slint::ComponentHandle<Recipe>{ self_rc };
}

inline Recipe::~Recipe (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Recipe::get_counter () const -> int{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->root_56_counter.get();
}

inline auto Recipe::set_counter (const int &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_56_counter.set(value);
}

inline auto Recipe::invoke_on_clicked (int arg_0, int arg_1) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->root_56_on_clicked.call(arg_0, arg_1);
}

template<std::invocable<int, int> Functor> inline auto Recipe::on_on_clicked (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_56_on_clicked.set_handler(std::forward<Functor>(callback_handler));
}

inline auto Recipe::invoke_on_text (slint::SharedString arg_0) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->lineedit1_58.base_18.root_1_accepted.call(arg_0);
}

template<std::invocable<slint::SharedString> Functor> inline auto Recipe::on_on_text (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->lineedit1_58.base_18.root_1_accepted.set_handler(std::forward<Functor>(callback_handler));
}

inline auto Recipe::show () -> void{
    window().show();
}

inline auto Recipe::hide () -> void{
    window().hide();
}

inline auto Recipe::window () const -> slint::Window&{
    return m_globals.window();
}

inline auto Recipe::run () -> void{
    show();
    slint::run_event_loop();
    hide();
}
