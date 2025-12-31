module slint.item_tree;

import core.stdc.stdint : uint32_t;

import slint.internal;
import slint.vtable;
import slint.timer;

ItemTreeNode make_item_node(uint32_t child_count, uint32_t child_index,
        uint32_t parent_index, uint32_t item_array_index, bool is_accessible) {
    return ItemTreeNode(ItemTreeNode.Item_Body(ItemTreeNode.Tag.Item,
            is_accessible, child_count, child_index, parent_index, item_array_index));
}

ItemTreeNode make_dyn_node(uint32_t offset, uint32_t parent_index) {
    return ItemTreeNode(ItemTreeNode.DynamicTree_Body(ItemTreeNode.Tag.DynamicTree,
            offset, parent_index));
}

// inline ItemRef get_item_ref(ItemTreeRef item_tree,
//                             const cbindgen_private::Slice<ItemTreeNode> item_tree_array,
//                             const private_api::ItemArray item_array, int index)
// {
//     const auto item_array_index = item_tree_array.ptr[index].item.item_array_index;
//     const auto item = item_array[item_array_index];
//     return ItemRef { item.vtable, reinterpret_cast<char *>(item_tree.instance) + item.offset };
// }

/// The component handle is like a shared pointer to a component in the generated code.
/// In order to get a component, use `T::create()` where T is the name of the component
/// in the .slint file. This give you a `ComponentHandle<T>`
class ComponentHandle(T) {
    private VRc!(ItemTreeVTable, T) inner;
    // friend class ComponentWeakHandle<T>;

public:
    /// internal constructor
    // TODO: reconsider this ref
    this(ref VRc!(ItemTreeVTable, T) inner) {
        this.inner = inner;
    }

    auto opDispatch(string name, Args...)(Args args) {
        import std.traits : ReturnType, Parameters;

        //
        // // Pre-forwarding logic
        assert_main_thread();
        //
        // // Forward call to the actual T inside VRc
        return __traits(getMember, inner.data(), name)(args);
    }

    // TODO: enable later
    /// Arrow operator that implements pointer semantics.
    // const T *operator->() const
    // {
    //     assert_main_thread();
    //     return inner.operator->();
    // }
    // /// Dereference operator that implements pointer semantics.
    // const T &operator*() const
    // {
    //     private_api::assert_main_thread();
    //     return inner.operator*();
    // }
    // /// Arrow operator that implements pointer semantics.
    // T *operator->()
    // {
    //     private_api::assert_main_thread();
    //     return inner.operator->();
    // }
    // /// Dereference operator that implements pointer semantics.
    // T &operator*()
    // {
    //     private_api::assert_main_thread();
    //     return inner.operator*();
    // }

    /// internal function that returns the internal handle
    VRc!(ItemTreeVTable) into_dyn() {
        return inner.into_dyn();
    }
}
