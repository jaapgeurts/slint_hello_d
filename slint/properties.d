// Copyright © SixtyFPS GmbH <info@slint.dev>
// SPDX-License-Identifier: GPL-3.0-only OR LicenseRef-Slint-Royalty-free-2.0 OR LicenseRef-Slint-Software-3.0
module slint.properties;

import std.stdio;

import core.memory;
import core.stdc.stdint : uintptr_t, intptr_t, uint8_t, int32_t, uint32_t, uint64_t;

import slint.properties_internal;
import slint.internal;
import slint.color;
import slint.image;

template PropertyCallback(T) {
    alias PropertyCallback = extern (C) void function(void*, T*);
}

alias DropUserDataCallback = extern (C) void function(void*);
alias TransitionDataCallback = extern (C) PropertyAnimation function(void*, uint64_t*);

void slint_property_set_animated_binding_helper(const PropertyHandleOpaque* handle,
        PropertyCallback!int binding, void* user_data,
        DropUserDataCallback drop_user_data, const PropertyAnimation* animation_data,
        TransitionDataCallback transition_data) {
    slint_property_set_animated_binding_int(handle, binding, user_data,
            drop_user_data, animation_data, transition_data);
}

void slint_property_set_animated_binding_helper(const PropertyHandleOpaque* handle,
        PropertyCallback!float binding, void* user_data,
        DropUserDataCallback drop_user_data, const PropertyAnimation* animation_data,
        TransitionDataCallback transition_data) {
    slint_property_set_animated_binding_float(handle, binding, user_data,
            drop_user_data, animation_data, transition_data);
}

void slint_property_set_animated_binding_helper(const PropertyHandleOpaque* handle,
        PropertyCallback!Color binding, void* user_data,
        DropUserDataCallback drop_user_data, const PropertyAnimation* animation_data,
        TransitionDataCallback transition_data) {
    slint_property_set_animated_binding_color(handle, binding, user_data,
            drop_user_data, animation_data, transition_data);
}

// TODO: enable brush
// void slint_property_set_animated_binding_helper(
//         const PropertyHandleOpaque *handle, void function(void *, Brush *) binding,
//         void *user_data, void function(void *) drop_user_data,
//         const PropertyAnimation *animation_data,
//         PropertyAnimation function(void *, uint64_t *) transition_data)
// {
//     slint_property_set_animated_binding_brush(
//             handle, binding, user_data, drop_user_data, animation_data, transition_data);
// }
// TODO: think about how properties must be instantiated since default constructors are not allowed in D

extern (C) struct Property(T) {

    // @disable this();

    // TODO: think aout a good name
    void initialize() {
        import slint.string;

        this.inner._0 = 0;
        writeln("Property.initialize()");
        static if (is(T == SharedString) || is(T == Image)) {
            writeln("\tinit SharedString or Image");
            value.initialize();
        }
        slint_property_init(&inner);
    }

    ~this() {
        writeln("Property destructor called");
        // TODO: fix later
        slint_property_drop(&inner);
    }
    // Property(const Property &) = delete;
    // Property(Property &&) = delete;
    // Property &operator=(const Property &) = delete;
    // this(const T value) {
    //     writeln("REASSIGN");
    //     this.value = value;
    //     slint_property_init(&inner);
    // }

    /* Should it be implicit?
    void operator=(const T &value) {
        set(value);
    }*/

    // TODO: review const for both set() and get()
    void set(T value) {

        if ((inner._0 & 0b10) == 0b10 || this.value != value) {
            this.value = value;
            slint_property_set_changed(&inner, &this.value);
        }
    }

    T get() {
        slint_property_update(&inner, cast(void*)&this.value);
        return value;
    }

    void set_binding(F)(F binding) const {
        writeln("Property.set_binding() called");
        slint_property_set_binding(&inner, (void* user_data, void* value) {
            *cast(T*)(value) = (*cast(F*)(user_data))();
        }, new F(binding), (void* user_data) { delete cast(F*)(user_data); }, nullptr, nullptr);
    }

    // TODO: check if PropertyAnimation == struct or class.
    // that affects the function call slint_property_set_animated_value_int 3rd arg
    void set_animated_value(const T new_value, const PropertyAnimation animation_data) const {
        static if (is(T == int32_t)) {
            slint_property_set_animated_value_int(&inner, value, new_value, &animation_data);
        }
        else static if (is(T == float)) {
            slint_property_set_animated_value_float(&inner, value, new_value, &animation_data);
        }
        else static if (is(T == Color)) {
            slint_property_set_animated_value_color(&inner, value, new_value, &animation_data);
        }
    }

    void set_animated_binding(F)(F binding, const PropertyAnimation animation_data) const {
        slint_property_set_animated_binding_helper(&inner, (void* user_data, T* value) {
            *cast(T*)(value) = (*cast(F*)(user_data))();
        }, // TODO: add this root to the GC to prevent deletion.
                new F(binding), (void* user_data) { delete cast(F*)(user_data); },
                &animation_data, nullptr);
    }

    void set_animated_binding_for_transition(F, Trans)(F binding, Trans animation) const {
        struct UserData {
            F binding;
            Trans animation;
        }

        slint_property_set_animated_binding_helper(&inner, (void* user_data, T* value) {
            *cast(T*)(value) = cast(UserData*)(user_data).binding();
        }, // TODO: add UserData root to the GC to prevent deletion.
                new UserData(binding, animation), (void* user_data) {
            delete cast(UserData*)(user_data);
        }, null, (void* user_data, uint64_t* instant) {
            return cast(UserData*)(user_data).animation(instant);
        });
    }

    bool is_dirty() const {
        return slint_property_is_dirty(&inner);
    }

    void mark_dirty() const {
        slint_property_mark_dirty(&inner);
    }

    static void link_two_way(Property!(T)* p1, Property!(T)* p2) {

        auto value = p2.get();
        PropertyHandleOpaque handle;
        if ((p2.inner._0 & 0b10) == 0b10) {
            // TODO: Review this:
            // std::swap(handle, const_cast<Property<T> *>(p2)->inner);
            auto t = handle;
            handle = (cast(Property!(T)*) p2).inner;
            (cast(Property!(T)*) p2).inner = t;
        }
        // TODO: check conversion
        // auto common_property = std::make_shared<Property!(T)>(handle, std::move(value));
        // TODO: add common_property as root to the GC to prevent deletion.
        // TODO: declare this property shared
        auto common_property = new Property!T(handle, value);
        // TODO: must this be a struct?
        struct TwoWayBinding {
            // TODO: declare this property shared *
            Property!(T)* common_property;
        }

        extern (C) void call_fn(void* user_data, void* value) {
            *(cast(T*) value) = (cast(TwoWayBinding*) user_data).common_property.get();
        }

        extern (C) void del_fn(void* user_data) {
            GC.removeRoot(user_data);
            // (cast(TwoWayBinding*) user_data).destroy();
        }

        extern (C) bool intercept_fn(void* user_data, const void* value) {
            // TODO: consider bringing back 'const' here
            // (cast(TwoWayBinding*) user_data).common_property.set(*cast(const T*)(value));
            // (cast(TwoWayBinding*) user_data).common_property.set(*cast(T*)(value));
            return true;
        }

        extern (C) bool intercept_binding_fn(void* user_data, void* value) {
            slint_property_set_binding_internal(&(cast(TwoWayBinding*) user_data)
                    .common_property.inner, value);
            return true;
        }

        auto prop1 = new TwoWayBinding(common_property);
        GC.addRoot(prop1);
        slint_property_set_binding(&p1.inner, &call_fn, prop1, &del_fn,
                &intercept_fn, &intercept_binding_fn);
        auto prop2 = new TwoWayBinding(common_property);
        GC.addRoot(prop2);
        slint_property_set_binding(&p2.inner, &call_fn, prop2, &del_fn,
                &intercept_fn, &intercept_binding_fn);
    }

    /// Internal (private) constructor used by link_two_way
    this(PropertyHandleOpaque inner, T value) {
        this.inner = inner;
        this.value = value;
    }

    ref const(T) get_internal() const {
        return value;
    }

    void set_constant() const {
        slint_property_set_constant(&inner);
    }

private:
    PropertyHandleOpaque inner;
    // TODO: alignment is wrong here for some reason. change to align(16). investigate why it's wrong.
    // It used to be correct with the release zip 1.14.1 from github
    // ubyte[2] a;
    T value;
    // template<typename F>
    // friend void set_state_binding(const Property<StateInfo> &property, F binding);
}

void set_state_binding(F)(const Property!(StateInfo) property, F binding) {
    slint_property_set_state_binding(&property.inner, // TODO: review
            // [](void *user_data) -> int32_t { return (*reinterpret_cast<F *>(user_data))(); },
            (void* user_data) { return cast(int32_t)(*cast(F*)(user_data))(); },

            // TODO: review memory and GC here
            new F(binding), (void* user_data) { delete cast(F*)(user_data); });
}

/// PropertyTracker allows keeping track of when properties change and lazily evaluate code
/// if necessary.
/// Once constructed, you can call evaluate() with a functor that will be invoked. Any
/// Property<T> types that have their value read from within the invoked functor or any code that's
/// reached from there are added to internal book-keeping. When after returning from evaluate(),
/// any of these accessed properties change their value, the property tracker's is_dirt() function
/// will return true.
///
/// PropertyTracker instances nest, so if during the evaluation of one tracker, another tracker's
/// evaluate() function gets called and properties from within that evaluation change their value
/// later, both tracker instances will report true for is_dirty(). If you would like to disable the
/// nesting, use the evaluate_as_dependency_root() function instead.
class PropertyTracker {
    /// Constructs a new property tracker instance.
    this() {
        slint_property_tracker_init(&inner);
    }
    /// Destroys the property tracker.
    ~this() {
        slint_property_tracker_drop(&inner);
    }
    /// The copy constructor is intentionally deleted, property trackers cannot be copied.
    // PropertyTracker(const PropertyTracker &) = delete;
    /// The assignment operator is intentionally deleted, property trackers cannot be copied.
    // PropertyTracker &operator=(const PropertyTracker &) = delete;

    /// Returns true if any properties accessed during the last evaluate() call have changed their
    /// value since then.
    bool is_dirty() const {
        return slint_property_tracker_is_dirty(&inner);
    }

    /// Invokes the provided functor \a f and tracks accessed to any properties during that
    /// invocation.
    void evaluate(F)(const F f) const if (is(ReturnType!F == void)) {
        slint_property_tracker_evaluate(&inner, (void* f) {
            (*cast(const F*)(f))();
        }, cast(F*)(&f));
    }
    //  std::enable_if_t<std::is_same_v<decltype(f()), void>> evaluate(F)(const F f) const
    //
    //     slint_property_tracker_evaluate(
    //             &inner, [](void *f) { (*reinterpret_cast<const F *>(f))(); }, const_cast<F *>(&f));
    // }

    /// Invokes the provided functor \a f and tracks accessed to any properties during that
    /// invocation. Use this overload if your functor returns a value, as evaluate() will pass it on
    /// and return it.
    auto evaluate(F)(const F f) const if (is(ReturnType!F == void)) {
        typeof(f()) result;
        this.evaluate({ result = f(); });
        return result;
    }

    /// Invokes the provided functor \a f and tracks accessed to any properties during that
    /// invocation.
    ///
    /// This starts a new dependency chain and if called during the evaluation of another
    /// property tracker, the outer tracker will not be notified if any accessed properties change.
    auto evaluate_as_dependency_root(F)(const F f) const
            if (is(ReturnType!F == void)) {
        slint_property_tracker_evaluate_as_dependency_root(&inner, (void* f) {
            (*cast(const F*)(f))();
        }, cast(F*)(&f));
    }

    /// Invokes the provided functor \a f and tracks accessed to any properties during that
    /// invocation. Use this overload if your functor returns a value, as evaluate() will pass it on
    /// and return it.
    ///
    /// This starts a new dependency chain and if called during the evaluation of another
    /// property tracker, the outer tracker will not be notified if any accessed properties change.
    auto evaluate_as_dependency_root(F)(const F f) const
            if (is(ReturnType!F == void)) {
        typeof(f()) result;
        this.evaluate_as_dependency_root({ result = f(); });
        return result;
    }

private:
    PropertyTrackerOpaque inner;
}

// TODO: this could probably just be removed and use a void* in the class below
struct ChangeTrackerInner {
    void* inner;
}

// TODO: review this
class ChangeTracker {
    this() {
        slint_change_tracker_construct(&inner);
    }

    ~this() {
        slint_change_tracker_drop(&inner);
    }

    void init(Data, FnEval, FnNotify)(Data data, FnEval fn_eval, FnNotify fn_notify) {
        alias Value = ReturnType!(FnEval(Data));
        struct Inner {
            Data data;
            FnEval fn_eval;
            FnNotify fn_notify;
            Value value;
        }

        auto data_ptr = new Inner(data, fn_eval, fn_notify, Value());
        slint_change_tracker_init( // TODO: check GC
                &inner, data_ptr, (void* d) { delete cast(Inner*) d; }, (void* d) {
            auto inner = cast(Inner*) d;
            auto v = inner.fn_eval(inner.data);
            bool r = v != inner.value;
            inner.value = v;
            return r;
        }, (void* d) {
            auto inner = cast(Inner*) d;
            inner.fn_notify(inner.data, inner.value);
        });
    }

private:
    ChangeTrackerInner inner;
}
