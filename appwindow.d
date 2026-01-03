import std.typecons;

import std.algorithm.comparison;
import std.stdio;

import core.stdc.stdint : uint32_t;

import slint.internal;
import slint.item_tree;
import slint.vtable;
import slint.platform_internal;
import slint.slint;
import slint.string_internal;
import slint.string;
import slint.enums_internal;
import slint.properties;

// import slint.platform;
import slint.window;

class SharedGlobals {
public:
    Nullable!Window m_window;
    ItemTreeWeak root_weak;
    /+
    auto window () const -> slint::Window&{
        auto self = const_cast<SharedGlobals *>(this);
        if (!self->m_window.has_value()) {
           auto &window = self->m_window.emplace(slint::private_api::WindowAdapterRc());
           window.window_handle().set_component(self->root_weak);
        }
        return *self->m_window;
    }+/
    Window window() {
        if (this.m_window.isNull()) {
            this.m_window = Nullable!Window(new Window(new WindowAdapterRc()));
            m_window.get().window_handle().set_component(this.root_weak);
        }
        return this.m_window.get;
    }
    // std::shared_ptr<FluentPalette_4> global_FluentPalette_4 = std::make_shared<FluentPalette_4>(this);
    // SharedGlobals (){
    // global_FluentPalette_4.init();
    // }
}

extern (C) struct MainWindow {
    ItemTreeWeak self_weak;
    SharedGlobals m_globals = new SharedGlobals();
    SharedGlobals globals;

    uint32_t tree_index_of_first_child;
    uint32_t tree_index;

    Property!LayoutInfo root_1_layoutinfo_h;
    Property!LayoutInfo root_1_layoutinfo_v;

    WindowItem root_1;
    SimpleText text_2;

    static ComponentHandle!(MainWindow) create() {
        auto self_rc = VRc!(ItemTreeVTable, MainWindow).make();
        auto self = cast(MainWindow)(self_rc.data());

        // TODO: think about how to solve this
        self.root_1.initialize();
        self.text_2.initialize();

        self.self_weak = VWeak!(ItemTreeVTable, MainWindow)(self_rc).into_dyn();
        slint_ensure_backend();
        self.globals = self.m_globals;
        self.m_globals.root_weak = self.self_weak;
        auto dyn = self_rc.into_dyn();
        writeln("Before register_item_tree()");
        register_item_tree(dyn, self.globals.m_window);
        self.init_(self.globals, self.self_weak, 0, 1);
        self.user_init();
        // self.window();
        return new ComponentHandle!MainWindow(self_rc);
    }

    __gshared const ItemTreeVTable static_vtable = ItemTreeVTable(null, &get_item_ref, null, null,
            &get_item_tree, null, null, null, null, null, null, null, null,
            null, null, null, null, null);
    // ItemTreeVTable( visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, drop_in_place<MainWindow>, dealloc );

    void run() {
        show();
        run_event_loop();
        hide();
    }

    void init_(SharedGlobals globals, ItemTreeWeak enclosing_component,
            uint32_t tree_index, uint32_t tree_index_of_first_child) {
        auto self = this;
        self.self_weak = enclosing_component;
        self.globals = globals;
        this.tree_index_of_first_child = tree_index_of_first_child;
        self.tree_index = tree_index;

        root_1_layoutinfo_h.initialize();
        root_1_layoutinfo_v.initialize();

        self.root_1.title.initialize();

        // self.root_1.title.set(SharedString("Slint Window"));

        // self.root_1.background.set_binding(() {
        //     auto self = this;
        //     return self.globals.global_FluentPalette_4.background.get();
        // });
        // self.root_1_layoutinfo_h.set_binding(() {
        //     auto self = this;
        //     return (item_layout_info(SLINT_GET_ITEM_VTABLE(WindowItemVTable),
        //         cast(WindowItem*)(&self.root_1), Orientation.Horizontal, &self.globals.window()
        //         .window_handle(), self.self_weak.lock().into_dyn(), self.tree_index) + item_layout_info(
        //         SLINT_GET_ITEM_VTABLE(SimpleTextVTable),
        //         cast(SimpleText*)(&self.text_2),
        //         Orientation.Horizontal, &self.globals.window().window_handle(),
        //         self.self_weak.lock().into_dyn(), self.tree_index_of_first_child + 1 - 1));
        // });
        // self.root_1_layoutinfo_v.set_binding(() {
        //     auto self = this;
        //     return (item_layout_info(SLINT_GET_ITEM_VTABLE(WindowItemVTable),
        //         cast(WindowItem*)(&self.root_1), Orientation.Vertical, &self.globals.window()
        //         .window_handle(), self.self_weak.lock().into_dyn(), self.tree_index) + item_layout_info(
        //         SLINT_GET_ITEM_VTABLE(SimpleTextVTable),
        //         cast(SimpleText*)(&self.text_2),
        //         Orientation.Vertical, &self.globals.window().window_handle(),
        //         self.self_weak.lock().into_dyn(), self.tree_index_of_first_child + 1 - 1));
        // });
        // self.root_1_text_2_min_height.set_binding(() {
        //     auto self = this;
        //     return item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable),
        //         cast(SimpleText*)(&self.text_2), Orientation.Vertical, &self.globals.window()
        //         .window_handle(), self.self_weak.lock().into_dyn(),
        //         self.tree_index_of_first_child + 1 - 1).min;
        // });
        // self.root_1_text_2_min_width.set_binding(() {
        //     auto self = this;
        //     return item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), cast(SimpleText*)(&self.text_2),
        //         Orientation.Horizontal, &self.globals.window().window_handle(),
        //         self.self_weak.lock().into_dyn(), self.tree_index_of_first_child + 1 - 1).min;
        // });
        // self.root_1_text_2_preferred_height.set_binding(() {
        //     auto self = this;
        //     return item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable),
        //         cast(SimpleText*)(&self.text_2), Orientation.Vertical, &self.globals.window()
        //         .window_handle(), self.self_weak.lock().into_dyn(),
        //         self.tree_index_of_first_child + 1 - 1).preferred;
        // });
        // self.root_1_text_2_preferred_width.set_binding(() {
        //     auto self = this;
        //     return item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), cast(SimpleText*)(&self.text_2),
        //         Orientation.Horizontal, &self.globals.window().window_handle(),
        //         self.self_weak.lock().into_dyn(), self.tree_index_of_first_child + 1 - 1).preferred;
        // });
        // self.root_1_text_2_x.set_binding(() {
        //     auto self = this;
        //     return ((self.root_1.width.get() - cast(float) self.text_2.width.get()) / cast(float) 2);
        // });
        // self.root_1_text_2_y.set_binding(() {
        //     auto self = this;
        //     return ((self.root_1.height.get() - cast(float) self.text_2.height.get()) / cast(float) 2);
        // });
        // self.root_1.title.set(SharedString("Slint Window"));
        // // self.text_2.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.278222848e9)));
        // self.text_2.height.set_binding(() {
        //     auto self = this;
        //     return max(self.root_1_text_2_preferred_height.get(),
        //         self.root_1_text_2_min_height.get());
        // });
        // self.text_2.text.set(SharedString("hello world"));
        // self.text_2.width.set_binding(() {
        //     auto self = this;
        //     return max(self.root_1_text_2_preferred_width.get(), self.root_1_text_2_min_width.get());
        // });
        // self.root_1.always_on_top.set_constant();
        // self.root_1.default_font_family.set_constant();
        // self.root_1.default_font_size.set_constant();
        // self.root_1.default_font_weight.set_constant();
        // self.root_1.icon.set_constant();
        // self.root_1.no_frame.set_constant();
        // self.root_1.resize_border_width.set_constant();
        // self.root_1.title.set_constant();
        // self.text_2.color.set_constant();
        // self.text_2.font_size.set_constant();
        // self.text_2.font_weight.set_constant();
        // self.text_2.horizontal_alignment.set_constant();
        // self.text_2.text.set_constant();
        // self.text_2.vertical_alignment.set_constant();

    }

    // TODO: these original definition methods were static.
    extern (C) {
        static Slice!(ItemTreeNode) get_item_tree(ItemTreeRef) {
            writeln("callback: get_item_tree()");
            return item_tree();
        }

        static ItemRef get_item_ref(ItemTreeRef component, uint32_t index) {
            writeln("callback: get_item_ref");
            auto it = get_item_tree(component);
            return slint.item_tree.get_item_ref(component, it, item_array(), index);
        }

        static const(ItemArray) item_array() {
            ItemArrayEntry[] items = [
                // TODO: fix later
                {&WindowItemVTable, MainWindow.root_1.offsetof},
                {&SimpleTextVTable, MainWindow.text_2.offsetof}
            ];
            return make_slice(items.ptr, items.length);
        }

        LayoutInfo layout_info(Orientation o) {
            return o == Orientation.Horizontal
                ? this.root_1_layoutinfo_h.get() : this.root_1_layoutinfo_v.get();
        }
    }

    static Slice!(ItemTreeNode) item_tree() {
        writeln("callback: item_tree()");
        static const ItemTreeNode[] children = [
            make_item_node(1, 1, 0, 0, false),
            make_item_node(0, 2, 0, 1, true) // make_item_node(8, 3, 7, 0, false), make_item_node(0, 2, 0, 1, true)
        ];
        // TODO: consider removing these slices.
        return make_slice(children.ptr, children.length);
    }

    void user_init() {
        auto self = this;
    }

    void show() {
        window().show();
    }

    void hide() {
        window().hide();
    }

    Window window() {
        return m_globals.window();
    }
}

// TODO: cleanup here
// pragma(mangle, "slint::private_api::WindowItemVTable") extern __gshared const(ItemVTable) WindowItemVTable;
// pragma(mangle, "slint::private_api::SimpleTextVTable") extern __gshared const(ItemVTable) SimpleTextVTable;

// TODO: consider moving this to slint.slint;
pragma(mangle, "WindowItemVTable") extern __gshared const(ItemVTable) WindowItemVTable;
pragma(mangle, "SimpleTextVTable") extern __gshared const(ItemVTable) SimpleTextVTable;

// extern (C++,slint.private_api) __gshared const(ItemVTable) WindowItemVTable;
// extern (C++,slint.private_api) __gshared const(ItemVTable) SimpleTextVTable;
