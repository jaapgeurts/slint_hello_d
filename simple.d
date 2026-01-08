import std.typecons;
import std.algorithm.comparison;
import std.stdio;

import core.stdc.stdint : uint8_t, uint32_t, uint64_t, uintptr_t, intptr_t;

import slint.color;
import slint.color_internal;
import slint.enums_internal;
import slint.events_internal;
import slint.internal;
import slint.item_tree;
import slint.platform_internal;
import slint.properties;
import slint.slint;
import slint.string_internal;
import slint.string;
import slint.vtable;
import slint.window;
import slint.brush_internal;

// Equivalent types

// ItemTreeRc = VRc!(ItemTreeVTable, Dyn);
// ItemTreeRef = VRef!(ItemTreeVTable);
// VRef(T) = VRefMut!T;
// struct VRefMut(T) {
//     const T* vtable;
//     void* instance;
// }
// struct VOffset(Base, T, Flag = void) {
//     const T* vtable;
//     uintptr_t offset;
// }
// alias ItemArrayEntry = VOffset!(uint8_t, ItemVTable, AllowPin);
// alias ItemArray = Slice!(ItemArrayEntry);
extern (C) {
    extern const(ItemVTable) BasicBorderRectangleVTable;
    extern const(ItemVTable) BorderRectangleVTable;
    extern const(ItemVTable) BoxShadowVTable;
    extern const(ItemVTable) ClippedImageVTable;
    extern const(ItemVTable) ClipVTable;
    extern const(ItemVTable) ComplexTextVTable;
    extern const(ItemVTable) ComponentContainerVTable;
    extern const(ItemVTable) ContextMenuVTable;
    extern const(ItemVTable) DragAreaVTable;
    extern const(ItemVTable) DropAreaVTable;
    extern const(ItemVTable) EmptyVTable;
    extern const(ItemVTable) FlickableVTable;
    extern const(ItemVTable) FocusScopeVTable;
    extern const(ItemVTable) ImageItemVTable;
    extern const(ItemVTable) LayerVTable;
    extern const(ItemVTable) MarkdownTextVTable;
    extern const(ItemVTable) MenuItemVTable;
    extern const(ItemVTable) NativeButtonVTable;
    extern const(ItemVTable) NativeCheckBoxVTable;
    extern const(ItemVTable) NativeComboBoxPopupVTable;
    extern const(ItemVTable) NativeComboBoxVTable;
    extern const(ItemVTable) NativeGroupBoxVTable;
    extern const(ItemVTable) NativeLineEditVTable;
    extern const(ItemVTable) NativeProgressIndicatorVTable;
    extern const(ItemVTable) NativeScrollViewVTable;
    extern const(ItemVTable) NativeSliderVTable;
    extern const(ItemVTable) NativeSpinBoxVTable;
    extern const(ItemVTable) NativeStandardListViewItemVTable;
    extern const(ItemVTable) NativeTableHeaderSectionVTable;
    extern const(ItemVTable) NativeTabVTable;
    extern const(ItemVTable) NativeTabWidgetVTable;
    extern const(ItemVTable) OpacityVTable;
    extern const(ItemVTable) PathVTable;
    extern const(ItemVTable) RectangleVTable;
    extern const(ItemVTable) SimpleTextVTable;
    extern const(ItemVTable) SwipeGestureHandlerVTable;
    extern const(ItemVTable) TextInputVTable;
    extern const(ItemVTable) TouchAreaVTable;
    extern const(ItemVTable) TransformVTable;
    extern const(ItemVTable) WindowItemVTable;
}

VWeak!(ItemTreeVTable, Dyn) root_weak;
Window window;

// Property!LayoutInfo root_1_layoutinfo_v;
// Property!LayoutInfo root_1_layoutinfo_h;
//
// static this() {
//     root_1_layoutinfo_v.initialize();
//     root_1_layoutinfo_h.initialize();
//
// }

extern (C) struct MainWindow {

    WindowItem root_1;
    SimpleText text_2;

    // TODO: stop this nonsense
    // inline const slint::private_api::ItemTreeVTable MainWindow::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<MainWindow>, slint::private_api::dealloc };
    __gshared const ItemTreeVTable static_vtable = {
        &visit_children, &get_item_ref, &get_subtree_range, &get_subtree, &get_item_tree, &parent_node,
            &embed_component, &subtree_index, &layout_info, &item_geometry, null, null, null, null,
            &element_infos, &window_adapter, &drop_in_place!MainWindow, &dealloc
    };

    // ItemTreeVTable( visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, drop_in_place<MainWindow>, dealloc );

    static Slice!(ItemTreeNode) get_item_tree(ItemTreeRef component) {
        writeln("callback: get_item_tree()");
        static const ItemTreeNode[] children = [
            make_item_node(1, 1, 0, 0, false), make_item_node(0, 2, 0, 1, false)
        ];
        // TODO: consider removing these slices.
        return make_slice(children.ptr, children.length);
    }

    static ItemRef get_item_ref(ItemTreeRef component, uint32_t index) {
        writeln("callback: get_item_ref");
        auto it = get_item_tree(component);
        return slint.item_tree.get_item_ref(component, it, item_array(), index);
    }

    static const(ItemArray) item_array() {
        static const ItemArrayEntry[] items = [
            // TODO: fix later
            {&WindowItemVTable, MainWindow.root_1.offsetof},
            {&SimpleTextVTable, MainWindow.text_2.offsetof}
        ];
        return make_slice(items.ptr, items.length);
    }

    static LayoutInfo layout_info(ItemTreeRef component, Orientation o) {
        // return o == Orientation.Horizontal ? root_1_layoutinfo_h.get() : root_1_layoutinfo_v.get();
        // writeln("Request layout info");
        return LayoutInfo();
    }

    static Rect item_geometry(ItemTreeRef component, uint32_t index) {
        auto ci = component.instance;
        auto mw = cast(MainWindow*) ci;
        switch (index) {
        case 0:
            writeln("Rect for Window");
            return Rect(0, 0, mw.root_1.width.get(), mw.root_1.height.get(),);
        case 1:
            return Rect(10, 10, mw.text_2.width.get(), mw.text_2.height.get());
        default:
            writeln("'Rect for default'");
            return Rect.init;
        }
    }

    static uint64_t visit_children(ItemTreeRef component, intptr_t index,
            TraversalOrder order, ItemVisitorRefMut visitor) {
        alias dyn_visit_fn = extern (C) uint64_t function(const void* base,
                TraversalOrder order, ItemVisitorRefMut visitor, uint32_t dyn_index);
        dyn_visit_fn dyn_visit = (const void* base, TraversalOrder order,
                ItemVisitorRefMut visitor, uint32_t dyn_index) {
            auto self = *cast(const MainWindow*)(base);
            import core.stdc.stdlib : abort;
            import std.stdio;

            stderr.writeln("Children tree visitor called without implementation: aborting");
            abort();
        };
        // auto ci = component.instance;
        // auto mw = *cast(MainWindow*) ci;
        auto sw = root_weak;
        // auto self_rc = sw.lock().get.into_dyn();
        auto self_rc = new VRc!(ItemTreeVTable, Dyn)(sw.inner);
        writeln("TreeItem '", index, "' visit");
        return slint_visit_item_tree(self_rc, get_item_tree(component), index,
                order, visitor, dyn_visit);
    }

    static void window_adapter(ItemTreeRef component, bool do_create,
            Option!(WindowAdapterRc)* result) {
        // auto ci = component.instance;
        // auto mw = cast(MainWindow*) ci;
        // TODO: returning this window handle crashes the window
        // *(cast(WindowAdapterRcOpaque*) result) = *(
        //         cast(WindowAdapterRcOpaque*) window.window_handle().handle());

    }

    static void dealloc(const ItemTreeVTable* vtable, uint8_t* ptr, Layout layout) {
        // vtable_dealloc(vtable, ptr, layout);
        writeln("Request deletion of an item");
    }

    // TODO: these functions seem not necessary to get a bare minimum example working

    static bool element_infos(ItemTreeRef component, uint32_t index, SharedString* result) {
        return false;
    }

    static uintptr_t subtree_index(ItemTreeRef component) {
        return uintptr_t.max;
    }

    static IndexRange get_subtree_range(ItemTreeRef component, uint32_t dyn_index) {
        import core.stdc.stdlib;

        abort();
    }

    static void get_subtree(ItemTreeRef component, uint32_t dyn_index,
            uintptr_t subtree_index, ItemTreeWeak* result) {
        import core.stdc.stdlib;

        abort();
    }

    static void parent_node(ItemTreeRef component, ItemWeak* result) {
    }

    bool embed_component(ItemTreeRef component,
            const ItemTreeWeak* parent_component, uint32_t parent_index) {
        return false;
    }

}

void CreateWindow() {

    WindowAdapterRcOpaque* window_handle = null;
    ItemTreeRc* item_tree_rc;

    VRc!(ItemTreeVTable, MainWindow) self_rc = VRc!(ItemTreeVTable, MainWindow).make();
    item_tree_rc = cast(ItemTreeRc*)&self_rc;

    slint_ensure_backend();

    // std::cout << "Align  of: " << alignof(slint::cbindgen_private::WindowItem::title) << std::endl;
    // std::cout << "Offset of: " << offsetof(slint::cbindgen_private::WindowItem, title) << std::endl;
    writeln("Align  of: ", WindowItem.default_font_family.alignof);
    writeln("Offset of: ", WindowItem.default_font_family.offsetof);
    writefln("WindomItemVTable: %s", &WindowItemVTable);
    writeln("Sizeof            bool: ", bool.sizeof);
    writeln("Sizeof       uintptr_t: ", uintptr_t.sizeof);
    writeln("Sizeof           float: ", float.sizeof);
    writeln("Sizeof      WindowItem: ", WindowItem.sizeof);
    writeln("Sizeof      SimpleText: ", SimpleText.sizeof);
    writeln("Sizeof         self_rc: ", self_rc.sizeof);
    writeln("Sizeof WindowAdapterRc: ", WindowAdapterRc.sizeof);
    writeln("Sizeof WindowAdapterRcOpaque: ", WindowAdapterRcOpaque.sizeof);
    writeln("Sizeof VRc!(ItemTreeVTable, MainWindow): ", VRc!(ItemTreeVTable, MainWindow).sizeof);
    writeln("Sizeof VRcInner!(ItemTreeVTable, MainWindow): ",
            VRcInner!(ItemTreeVTable, MainWindow).sizeof);
    writeln("Sizeof       ItemArray: ", ItemArray.sizeof);

    self_rc.inner.data.root_1.title.set(SharedString("Slint D Demo"));
    self_rc.inner.data.root_1.width.set(800);
    self_rc.inner.data.root_1.height.set(600);
    self_rc.inner.data.root_1.background.set(
            Brush.SolidColor(Color.from_argb_uint8(0xff, 0xe0, 0xe0, 0xe0)));
    // self_rc.inner.data.root_1.default_font_family.set(SharedString("Vollkorn"));
    // self_rc.inner.data.root_1.default_font_size.set(12);

    self_rc.inner.data.text_2.text.set(SharedString("hello world"));
    self_rc.inner.data.text_2.width.set(90);
    self_rc.inner.data.text_2.height.set(30);
    // self_rc.inner.data.text_2.width.set_binding(() => 90);
    // self_rc.inner.data.text_2.height.set_binding(() => 30);
    self_rc.inner.data.text_2.color.set(Brush.SolidColor(Color.from_argb_uint8(0xff,
            0x20, 0x20, 0x20)));

    self_rc.inner.data.text_2.font_size.set(18);

    self_rc.inner.data.root_1.resize_border_width.set(2);
    self_rc.inner.data.root_1.default_font_size.set(18);

    //void slint_register_item_tree(const ItemTreeRc* item_tree_rc,const WindowAdapterRcOpaque* window_handle);
    slint_register_item_tree(item_tree_rc, window_handle);

    window = new Window(new WindowAdapterRc());
    auto vweak = VWeak!(ItemTreeVTable, MainWindow)(self_rc);
    root_weak = *cast(VWeak!(ItemTreeVTable, Dyn)*) cast(void*)&vweak;
    window.window_handle().set_component(root_weak);
    // auto wh = window.window_handle(); // risky

    // LayoutInfo a1 = item_layout_info(&WindowItemVTable, &self_rc.inner.data.root_1,
    //         Orientation.Horizontal, wh, item_tree_rc, // self->self_weak.lock()->into_dyn(),
    //         cast(uint32_t) 0);
    // LayoutInfo a2 = item_layout_info(&SimpleTextVTable, &self_rc.inner.data.text_2,
    //         Orientation.Horizontal, wh, item_tree_rc, cast(uint32_t) 1);
    // root_1_layoutinfo_h.set(a1 + a2);
    //
    // LayoutInfo b1 = item_layout_info(&WindowItemVTable, &self_rc.inner.data.root_1,
    //         Orientation.Vertical, wh, item_tree_rc, // self->self_weak.lock()->into_dyn(),
    //         cast(uint32_t) 0);
    // LayoutInfo b2 = item_layout_info(&SimpleTextVTable, &self_rc.inner.data.text_2,
    //         Orientation.Vertical, wh, item_tree_rc, cast(uint32_t) 1);
    // root_1_layoutinfo_v.set(b1 + b2);

    window.show();
    run_event_loop();
    window.hide();
}

int main(string[] args) {
    import core.memory;

    // TODO: enable later
    GC.disable();

    CreateWindow();

    return 0;
}
