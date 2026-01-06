import std.typecons;
import std.algorithm.comparison;
import std.stdio;

import core.stdc.stdint : uint8_t, uint32_t, uint64_t, uintptr_t, intptr_t;

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

pragma(mangle, "WindowItemVTable") extern __gshared const(ItemVTable) WindowItemVTable;
pragma(mangle, "SimpleTextVTable") extern __gshared const(ItemVTable) SimpleTextVTable;

VWeak!(ItemTreeVTable, Dyn) root_weak;
Window window;

Property!LayoutInfo root_1_layoutinfo_v;
Property!LayoutInfo root_1_layoutinfo_h;

static this() {
    root_1_layoutinfo_v.initialize();
    root_1_layoutinfo_h.initialize();

}

extern (C) struct MainWindow {

    WindowItem root_1;
    SimpleText text_2;

    // TODO: stop this nonsens
    // __gshared const ItemTreeVTable static_vtable =
    //     ItemTreeVTable(&visit_children, &get_item_ref, null, null,
    //         &get_item_tree, null, null, null, &layout_info, &item_geometry,
    //         null, null, null, null, null, &window_adapter, null, &dealloc);
    __gshared const ItemTreeVTable static_vtable = ItemTreeVTable(&visit_children,
            &get_item_ref, &get_subtree_range, &get_subtree,
            &get_item_tree, &parent_node, &embed_component, &subtree_index, &layout_info, &item_geometry,
            null, null, null, null, &element_infos, &window_adapter, null, &dealloc);

    // ItemTreeVTable( visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, drop_in_place<MainWindow>, dealloc );

    static Slice!(ItemTreeNode) get_item_tree(ItemTreeRef component) {
        // writeln("callback: item_tree()");
        static const ItemTreeNode[] children = [
            make_item_node(1, 1, 0, 0, false), make_item_node(0, 2, 0, 1, false)
        ];
        // TODO: consider removing these slices.
        return make_slice(children.ptr, children.length);
    }

    static ItemRef get_item_ref(ItemTreeRef component, uint32_t index) {
        // writeln("callback: get_item_ref");
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

    static LayoutInfo layout_info(ItemTreeRef component, Orientation o) {
        return o == Orientation.Horizontal ? root_1_layoutinfo_h.get() : root_1_layoutinfo_v.get();
    }

    static Rect item_geometry(ItemTreeRef component, uint32_t index) {
        auto ci = component.instance;
        auto mw = cast(MainWindow*) ci;
        switch (index) {
        case 0:
            return Rect(0, 0, mw.root_1.width.get(), mw.root_1.height.get(),);
        case 1:
            return Rect(0, 0, mw.text_2.width.get(), mw.text_2.height.get());
        default:
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
        writeln("TreeItem visit");
        return slint_visit_item_tree(self_rc, get_item_tree(component), index,
                order, visitor, dyn_visit);
    }

    static void window_adapter(ItemTreeRef component, bool do_create,
            Option!(WindowAdapterRc)* result) {
        // auto ci = component.instance;
        // auto mw = cast(MainWindow*) ci;
        // TODO: is there a better way to copy this?
        *(cast(WindowAdapterRcOpaque*) result) = *cast(WindowAdapterRcOpaque*) window.window_handle()
            .handle();

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

    // std::cout << "Align  of: " << alignof(slint::cbindgen_private::WindowItem::title) << std::endl;
    // std::cout << "Offset of: " << offsetof(slint::cbindgen_private::WindowItem, title) << std::endl;
    writeln("Align  of: ", WindowItem.default_font_family.alignof);
    writeln("Offset of: ", WindowItem.default_font_family.offsetof);

    self_rc.inner.data.root_1.title.set(SharedString("Slint D Demo"));
    self_rc.inner.data.root_1.width.set(100);
    self_rc.inner.data.root_1.height.set(100);

    self_rc.inner.data.text_2.text.set(SharedString("hello world"));
    self_rc.inner.data.text_2.width.set(100);
    self_rc.inner.data.text_2.height.set(100);

    //void slint_register_item_tree(const ItemTreeRc* item_tree_rc,const WindowAdapterRcOpaque* window_handle);
    slint_register_item_tree(item_tree_rc, window_handle);

    window = new Window(new WindowAdapterRc());
    auto vweak = VWeak!(ItemTreeVTable, MainWindow)(self_rc);
    root_weak = *cast(VWeak!(ItemTreeVTable, Dyn)*) cast(void*)&vweak;
    window.window_handle().set_component(root_weak);

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
