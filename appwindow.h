// This file is auto-generated
#pragma once
#include <array>
#include <limits>
#include <slint.h>
static_assert(1 == SLINT_VERSION_MAJOR && 14 == SLINT_VERSION_MINOR && 1 == SLINT_VERSION_PATCH, "This file was generated with Slint compiler version 1.14.1, but the Slint library used is " SLINT_VERSION_STRING ". The version numbers must match exactly.");
class MainWindow;

class SharedGlobals;

class FluentPalette_4 {
    public:
    slint::private_api::Property<slint::Brush> background;
    slint::private_api::Property<slint::cbindgen_private::ColorScheme> color_scheme;
    FluentPalette_4 (const class SharedGlobals *globals);
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
    std::shared_ptr<FluentPalette_4> global_FluentPalette_4 = std::make_shared<FluentPalette_4>(this);
    SharedGlobals (){
        global_FluentPalette_4->init();
    }
};

class MainWindow {
    SharedGlobals m_globals;
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    private:
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_1_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_1_layoutinfo_v;
    slint::private_api::Property<float> root_1_text_2_min_height;
    slint::private_api::Property<float> root_1_text_2_min_width;
    slint::private_api::Property<float> root_1_text_2_preferred_height;
    slint::private_api::Property<float> root_1_text_2_preferred_width;
    slint::private_api::Property<float> root_1_text_2_x;
    slint::private_api::Property<float> root_1_text_2_y;
    slint::cbindgen_private::WindowItem root_1 = {};
    slint::cbindgen_private::SimpleText text_2 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
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
    static auto create () -> slint::ComponentHandle<MainWindow>;
    ~MainWindow ();
    auto show () -> void;
    auto hide () -> void;
    auto window () const -> slint::Window&;
    auto run () -> void;
    friend class FluentPalette_4;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, MainWindow>;
    friend class slint::private_api::WindowAdapterRc;
};

inline FluentPalette_4::FluentPalette_4 (const class SharedGlobals *globals)
 : globals(globals)
{
}

inline auto FluentPalette_4::init () -> void{
    (void)this->globals;
    this->background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush([&]() -> slint::Color { if ([&]{ [[maybe_unused]] auto tmp_FluentPalette_4_color_scheme = this->globals->global_FluentPalette_4->color_scheme.get();;return [&]() -> bool { if (! (tmp_FluentPalette_4_color_scheme == slint::cbindgen_private::ColorScheme::Unknown)) { return (tmp_FluentPalette_4_color_scheme == slint::cbindgen_private::ColorScheme::Dark); } else { return (this->globals->window().window_handle().color_scheme() == slint::cbindgen_private::ColorScheme::Dark); }}(); }()) { return slint::Color::from_argb_encoded(+4.280032284e9); } else { return slint::Color::from_argb_encoded(+4.29463833e9); }}());
                        });
    this->color_scheme.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return this->globals->window().window_handle().color_scheme();
                        });
}

inline const slint::private_api::ItemTreeVTable MainWindow::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<MainWindow>, slint::private_api::dealloc };

inline auto MainWindow::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->root_1.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->globals->global_FluentPalette_4->background.get();
                        });
    self->root_1_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(WindowItemVTable), const_cast<slint::cbindgen_private::WindowItem*>(&self->root_1), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) + slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_2), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 1 - 1));
                        });
    self->root_1_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(WindowItemVTable), const_cast<slint::cbindgen_private::WindowItem*>(&self->root_1), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) + slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_2), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 1 - 1));
                        });
    self->root_1_text_2_min_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_2), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 1 - 1).min;
                        });
    self->root_1_text_2_min_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_2), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 1 - 1).min;
                        });
    self->root_1_text_2_preferred_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_2), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 1 - 1).preferred;
                        });
    self->root_1_text_2_preferred_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_2), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 1 - 1).preferred;
                        });
    self->root_1_text_2_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->root_1.width.get() -(float) self->text_2.width.get()) /(float) 2);
                        });
    self->root_1_text_2_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->root_1.height.get() -(float) self->text_2.height.get()) /(float) 2);
                        });
    self->root_1.title.set(slint::SharedString(u8"Slint Window"));
    self->text_2.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.278222848e9)));
    self->text_2.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->root_1_text_2_preferred_height.get(), self->root_1_text_2_min_height.get());
                        });
    self->text_2.text.set(slint::SharedString(u8"hello world"));
    self->text_2.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->root_1_text_2_preferred_width.get(), self->root_1_text_2_min_width.get());
                        });
    self->root_1.always_on_top.set_constant();
    self->root_1.default_font_family.set_constant();
    self->root_1.default_font_size.set_constant();
    self->root_1.default_font_weight.set_constant();
    self->root_1.icon.set_constant();
    self->root_1.no_frame.set_constant();
    self->root_1.resize_border_width.set_constant();
    self->root_1.title.set_constant();
    self->text_2.color.set_constant();
    self->text_2.font_size.set_constant();
    self->text_2.font_weight.set_constant();
    self->text_2.horizontal_alignment.set_constant();
    self->text_2.text.set_constant();
    self->text_2.vertical_alignment.set_constant();
}

inline auto MainWindow::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto MainWindow::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? self->root_1_layoutinfo_h.get() : self->root_1_layoutinfo_v.get();
}

inline auto MainWindow::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_1.height.get()), float(self->root_1.width.get()), float(0), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->text_2.height.get()), float(self->text_2.width.get()), float(self->root_1_text_2_x.get()), float(self->root_1_text_2_y.get())));
    }
    return {};
}

inline auto MainWindow::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 1: return slint::cbindgen_private::AccessibleRole::Text;
    }
    return {};
}

inline auto MainWindow::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (1 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"hello world");
    }
    return {};
}

inline auto MainWindow::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto MainWindow::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto MainWindow::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto MainWindow::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const MainWindow*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const MainWindow*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto MainWindow::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto MainWindow::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto MainWindow::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto MainWindow::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto MainWindow::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
}

inline auto MainWindow::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto MainWindow::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto MainWindow::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(1, 1, 0, 0, false), 
slint::private_api::make_item_node(0, 2, 0, 1, true) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto MainWindow::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(WindowItemVTable),  offsetof(MainWindow, root_1) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, text_2) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto MainWindow::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const MainWindow*>(component.instance)->layout_info(o);
}

inline auto MainWindow::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const MainWindow*>(component.instance)->item_geometry(index);
}

inline auto MainWindow::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const MainWindow*>(component.instance)->accessible_role(index);
}

inline auto MainWindow::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const MainWindow*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto MainWindow::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const MainWindow*>(component.instance)->accessibility_action(index, *action);
}

inline auto MainWindow::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const MainWindow*>(component.instance)->supported_accessibility_actions(index);
}

inline auto MainWindow::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto MainWindow::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const MainWindow*>(component.instance)->globals->window().window_handle();
}

inline auto MainWindow::create () -> slint::ComponentHandle<MainWindow>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, MainWindow>::make();
    auto self = const_cast<MainWindow *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::cbindgen_private::slint_ensure_backend();
    self->globals = &self->m_globals;
    self->m_globals.root_weak = self->self_weak;
    slint::private_api::register_item_tree(&self_rc.into_dyn(), self->globals->m_window);
    self->init(self->globals, self->self_weak, 0, 1 );
    self->user_init();
    self->window();
    return slint::ComponentHandle<MainWindow>{ self_rc };
}

inline MainWindow::~MainWindow (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto MainWindow::show () -> void{
    window().show();
}

inline auto MainWindow::hide () -> void{
    window().hide();
}

inline auto MainWindow::window () const -> slint::Window&{
    return m_globals.window();
}

inline auto MainWindow::run () -> void{
    show();
    slint::run_event_loop();
    hide();
}
