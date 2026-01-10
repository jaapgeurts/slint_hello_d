module slint.vtable;

import std.algorithm.comparison;
import std.traits;
import std.typecons;

import std.stdio;

import core.atomic;
import core.memory;
import core.lifetime;
import core.stdc.stdint : uint8_t, uintptr_t;
import core.stdc.stdlib;

import slint.internal;

template isProperty(T) {
    import slint.properties;

    enum isProperty = is(T == Property!U, U);
}

extern (C) {

    struct VRefMut(T) {
        const T* vtable;
        void* instance;
    }

    struct Layout {
        size_t size;
        size_t align_;
    }

    alias VRef(T) = VRefMut!T;
    alias Pin(T) = T;

    struct VBox(T) {
        const T* vtable = null;
        void* instance = null;

        this() {
        }

        this(const T* vtable, void* instance) {

            this.vtable = vtable;
            this.isntance = instance;
        }

        ~this() {
            if (vtable && instance) {
                vtable.drop(VRefMut!(vtable, instance));
            }
        }
    }

    struct AllowPin;

    struct VOffset(Base, T, Flag = void) {
        const T* vtable;
        uintptr_t offset;
    }

    struct VRcInner(VTable, X) {

    public: // todo: this was private
        static if (__traits(hasMember, X, "static_vtable")) {
            const VTable* vtable = &X.static_vtable;
        }
        else {
            // TODO: should report error here.
            const VTable* vtable;
            pragma(message,
                    "Can't instantiate VRcInner. Second type doesn't not have a static_vtable member");
        }
        // TODO: review if we must use the 'shared' keyword for strong_ref and weak_ref
        // and make operation on it atomic
        int strong_ref = 1;
        int weak_ref = 1;

        ushort data_offset = VRcInner!(VTable, X).data.offsetof;
        union {
            X data;
            Layout layout;
        }

        void* data_ptr() {
            writeln("data_ptr() called");
            return &data;
            // TODO: remove after it works
            // return (cast(ubyte*)(&this)) + data_offset;
        }
    }

    struct Dyn {
        // CHANGE: added empty vtable
        // static const ItemTreeVTable static_vtable;
    }

    // #[repr(transparent)]
    struct VRc(VTable, X = Dyn) {
        VRcInner!(VTable, X)* inner;

        this(VRcInner!(VTable, X)* inner) {
            this.inner = inner;

        }

        this(VRc!(VTable, X)* other) {
            writeln("VRc copy constructor called");
            this.inner = other.inner;
        }

    public:
         ~this() {
            // inner.strong_ref--;
            // if (--inner.strong_ref == 0) {
            //     // consider that inner.data is probably a pointer
            //     Layout layout = inner.vtable.drop_in_place(VRefMut!VTable(inner.vtable,
            //             &inner.data));
            //     layout.size = max(layout.size, Layout.sizeof); // because of the union
            //     layout.size += inner.data_offset;
            //     layout.align_ = max(layout.align_, VRcInner!(VTable, Dyn).alignof);
            //     inner.layout = layout;
            //     if (--inner.weak_ref == 0) {
            //         inner.vtable.dealloc(inner.vtable, cast(uint8_t*) inner, layout);
            //     }
            // }
        }

        // this(ref VRcInner!(VTable, X) other) {
        //     writeln("VRc.copy constructoror called");
        //     this.inner = other.inner;
        //     this.inner.strong_ref++;
        // }

        void opAssign(ref VRc!(VTable, X) other) {
            writeln("VRc.opAssign() called");
            if (inner == other.inner)
                return;
            this = other;

        }
        /// Construct a new VRc holding an X.
        ///
        /// The type X must have a static member `static_vtable` of type VTable
        // template<typename... Args>
        // static VRc make(Args... args)
        // {
        //     auto mem = ::operator new(sizeof(VRcInner<VTable, X>),
        //                               static_cast<std::align_val_t>(alignof(VRcInner<VTable, X>)));
        //     auto inner = new (mem) VRcInner<VTable, X>;
        //     new (&inner->data) X(args...);
        //     return VRc(inner);
        // }
        // TODO: review. Likely incorrect
        // static VRc!(VTable, X) make(Args...)(Args args) {
        //     auto inner = new VRcInner!(VTable, X);
        //     inner.data = new X(args);
        //     return new VRc!(VTable, X)(inner);
        // }
        static VRc!(VTable, X) make(Args...)(Args args) {

            enum size = VRcInner!(VTable, X).sizeof;
            enum align_ = VRcInner!(VTable, X).alignof;

            auto mem = aligned_alloc(align_, size);
            GC.addRoot(mem);
            assert(mem !is null);

            // auto inner = cast(VRcInner!(VTable, X)*) mem;
            VRcInner!(VTable, X)* inner_l = emplace!(VRcInner!(VTable, X))(cast(VRcInner!(VTable,
                    X)*) mem);

            // inner_l.data = new X(args);
            emplace!(X)(&inner_l.data, args);

            // TODO: review this solution
            // call initialize on all properties

            void initialize(U)(U* data) {
                static foreach (member; FieldNameTuple!U) {
                    { // this extra brace introduces a new scope to avoid
                        // duplicate naming (such as alias MT)
                        writeln("Inspect member: ", member);
                        alias MT = typeof(__traits(getMember, data, member));
                        static if (isProperty!(MT)) {
                            writeln("\tinit property: ", member);
                            __traits(getMember, data, member).initialize();
                        }
                        // recursively call structs
                        else static if (is(MT == struct)) {
                            writeln("Recursing into: ", member);
                            initialize!(MT)(&__traits(getMember, data, member));
                        }
                    }
                }
            }

            initialize!(X)(cast(X*)&inner_l.data);

            return VRc!(VTable, X)(inner_l);
        }

        // Replace these with data()
        // const X *operator->() const { return &inner->data; }
        // const X &operator*() const { return inner->data; }
        // X &operator*() { return inner->data; }
        ref X data() {
            writeln("VRc.data() called");
            return inner.data;
        }

        // X *operator->() { return &inner->data; }

        VRc!(VTable, Dyn) into_dyn() {
            return *cast(VRc!(VTable, Dyn)*) cast(void*)&this;
        }

        // VRef<VTable> borrow() const { return { inner->vtable, inner->data_ptr() }; }

        // friend bool operator==(const VRc &a, const VRc &b) { return a.inner == b.inner; }
        // friend bool operator!=(const VRc &a, const VRc &b) { return a.inner != b.inner; }
        // const VTable *vtable() const { return inner->vtable; }
    }

    //#[repr(transparent)]
    struct VWeak(VTable, X = Dyn) {
        VRcInner!(VTable, X)* inner = null;

    public:
        // VWeak(const VWeak &other) : inner(other.inner) { inner && inner->weak_ref++; }
        // TODO: change this. Reference counting. This way is not very D like
        this(ref VRc!(VTable, X) other) {
            this.inner = other.inner;
            if (inner)
                inner.weak_ref++;
        }

        ~this() {
            // if (inner)
            //     inner.weak_ref--;
            // if (inner && !--inner.weak_ref) {
            //     inner.vtable.dealloc(inner.vtable, cast(ubyte*)(inner), inner.layout);
            // }
        }
        // VWeak &operator=(const VWeak &other)
        // {
        //     if (inner == other.inner)
        //         return *this;
        //     this->~VWeak();
        //     new (this) VWeak(other);
        //     return *this;
        // }
        //
        Nullable!(VRc!(VTable, X)) lock() {
            writeln("Lock called");
            if (!inner || inner.strong_ref == 0)
                return Nullable!(VRc!(VTable, X)).init;
            inner.strong_ref++;
            return nullable(VRc!(VTable, X)(inner));
        }

        VWeak!(VTable, Dyn) into_dyn() const {
            // must cast through a void* otherwise dlang will cast incompatible classes to null
            return *cast(VWeak!(VTable, Dyn)*)(cast(void*)&this);
            // return cast(VWeak!(VTable, Dyn))(this);
        }
        //
        // friend bool operator==(const VWeak &a, const VWeak &b) { return a.inner == b.inner; }
        // friend bool operator!=(const VWeak &a, const VWeak &b) { return a.inner != b.inner; }
        // const VTable *vtable() const { return inner ? inner->vtable : nullptr; }
    }

}

void vtable_dealloc(VTable)(const VTable*, uint8_t* ptr, Layout layout) {
    // GLibC allows aligned memory to be released with free()
    GC.removeRoot(ptr);
    free(cast(void*) ptr);
}

//template<typename VTable, typename T>
Layout drop_in_place(VTable, T)(VRefMut!(VTable) item_tree) {
    writeln("Dropped item");
    // delete(cast(T*)(item_tree.instance));
    return Layout(T.sizeof, T.alignof);
}
