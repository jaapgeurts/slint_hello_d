// Copyright © SixtyFPS GmbH <info@slint.dev>
// SPDX-License-Identifier: GPL-3.0-only OR LicenseRef-Slint-Royalty-free-2.0 OR LicenseRef-Slint-Software-3.0

module slint.interpreter;

import std.stdio;
import std.typecons;
import std.conv;

import core.stdc.stdint : uint8_t;

public import slint.interpreter_internal;

import slint.string;
import slint.brush_internal;
import slint.internal;
import slint.image;
import slint.image_internal;
import slint.item_tree;
import slint.sharedvector;
import slint.string_internal;
import slint.window;
import slint.timer;
import slint.slint;

struct MyNullable(T) {
    T val;
    bool hasValue;
}

extern (C) {
    //  This has to stay opaque, but VRc don't compile if it is just forward declared
    struct ErasedItemTreeBox // : vtable::Dyn
    {
        // ~ErasedItemTreeBox() = delete;
        // ErasedItemTreeBox() = delete;
        // ErasedItemTreeBox(ErasedItemTreeBox &) = delete;
        @disable this();
        @disable this(this);
    }

    class LiveReloadingComponent;
    class LiveReloadModelWrapperBase;

    /// The types in this namespace allow you to load a .slint file at runtime and show its UI.
    ///
    /// You only need to use them if you do not want to use pre-compiled .slint code, which is
    /// the normal way to use Slint.
    ///
    /// The entry point for this namespace is the \ref ComponentCompiler, which you can
    /// use to create \ref ComponentDefinition instances with the
    /// \ref ComponentCompiler::build_from_source() or \ref ComponentCompiler::build_from_path()
    /// functions.

    /// This type represents a runtime instance of structure in `.slint`.
    ///
    /// This can either be an instance of a name structure introduced
    /// with the `struct` keyword in the .slint file, or an anonymous struct
    /// written with the `{ key: value, }`  notation.
    ///
    /// It can be constructed with the range constructor or initializer lst,
    /// and converted into or from a Value with the Value constructor and
    /// Value::to_struct().
    class Struct {
    public:
        /// Constructs a new empty struct. You can add fields with set_field() and
        /// read them with get_field().
        this() {
            slint_interpreter_struct_new(&inner);
        }

        /// Creates a new Struct as a copy from \a other. All fields are copied as well.
        this(const Struct other) {
            slint_interpreter_struct_clone(&other.inner, &inner);
        }
        /// Creates a new Struct by moving all fields from \a other into this struct.
        this(ref Struct other) {
            inner = other.inner;
            slint_interpreter_struct_new(&other.inner);
        }

        // /// Assigns all the fields of \a other to this struct.
        // Struct &operator=(const Struct &other)
        // {
        //     if (this == &other)
        //         return *this;
        //     slint_interpreter_struct_destructor(&inner);
        //     slint_interpreter_struct_clone(&other.inner, &inner);
        //     return *this;
        // }
        // /// Moves all the fields of \a other to this struct.
        // Struct &operator=(Struct &&other)
        // {
        //     if (this == &other)
        //         return *this;
        //     slint_interpreter_struct_destructor(&inner);
        //     inner = other.inner;
        //     slint_interpreter_struct_new(&other.inner);
        //     return *this;
        // }
        /// Destroys this struct.
        ~this() {
            slint_interpreter_struct_destructor(&inner);
        }

        /// Creates a new struct with the fields of the std::initializer_list given by args.
        // inline this(std::initializer_list<std::pair<string, Value>> args);

        /// Creates a new struct with the fields produced by the iterator \a it. \a it is
        /// advanced until it equals \a end.
        //     template<typename InputIterator,typename std::enable_if_t<
        //                      std::is_convertible<decltype(std::get<0>(*std::declval<InputIterator>())),
        //                                          string>::value
        //                      && std::is_convertible<decltype(std::get<1>(*std::declval<InputIterator>())),
        //                                             Value>::value
        //
        //                      > * = nullptr
        //              >
        //     this(InputIterator, Value)(InputIterator it, InputIterator end) : this()
        //     {
        //         for (; it != end; ++it) {
        //             auto [key, value] = *it;
        //             set_field(key, value);
        //         }
        //     }

        // FIXME: this probably miss a lot of iterator api
        /// The Struct::iterator class implements the typical C++ iterator protocol and conveniently
        /// provides access to the field names and values of a Struct. It is created by calling either
        /// Struct::begin() or Struct::end().
        ///
        /// Make sure to compare the iterator to the iterator returned by Struct::end() before
        /// de-referencing it. The value returned when de-referencing is a std::pair that holds a
        /// string of the field name as well as a const reference of the value. Both
        /// references become invalid when the iterator or the Struct is changed, so make sure to make
        /// copies if you want to retain the name or value.
        ///
        /// Note that the order in which the iterator exposes the fields is not defined.
        ///
        /// If you're using C++ 17, you can use the convenience destructuring syntax to extract the name
        /// and value in one go:
        ///
        /// ```
        /// Struct stru = ...;
        /// auto it = stru.begin();
        /// ...
        /// ++it; // advance iterator to the next field
        /// ...
        /// // Check iterator before dereferencing it
        /// if (it != stru.end()) {
        ///     // Extract a view of the name and a const reference to the value in one go.
        ///     auto [field_name, field_value] = *it;
        /// }
        /// ```
        // struct iterator
        // {
        //     /// A typedef for std::pair<string, const Value &> that's returned
        //     /// when dereferencing the iterator.
        //     alias value_type = Tuple!(string,const Value);
        //
        // private:
        //     StructIteratorOpaque inner;
        //     Value *v = null;
        //     string k;
        //     this(StructIteratorOpaque inner) {
        //     this.inner = inner;
        //     next();
        //     }
        //     // construct a end iterator
        //     void next()
        //     {
        //         Slice<uint8_t> name_slice;
        //
        //         if (Value *nextval_inner =
        //                     slint_interpreter_struct_iterator_next(&inner, &name_slice)) {
        //             k = string(name_slice.ptr[0..name_sice.len]);
        //             if (!v)
        //                 v = new Value();
        //             *v = Value(nextval_inner);
        //         } else {
        //             slint_interpreter_struct_iterator_destructor(&inner);
        //             delete v;
        //             v = nullptr;
        //         }
        //     }
        //
        // public:
        //     /// Destroys this field iterator.
        //     ~this()
        //     {
        //         if (v) {
        //             slint_interpreter_struct_iterator_destructor(&inner);
        //             delete v;
        //         }
        //     }
        //
        //
        //     // FIXME I believe iterators are supposed to be copy constructible
        //     // iterator(const iterator &) = delete;
        //     // iterator &operator=(const iterator &) = delete;
        //     // /// Move-constructs a new iterator from \a other.
        //     // iterator(iterator &&other) = default;
        //     // /// Move-assigns the iterator \a other to this and returns a reference to this.
        //     // iterator &operator=(iterator &&other) = default;
        //     /// The prefix ++ operator advances the iterator to the next entry and returns
        //     /// a reference to this.
        //     iterator &operator++()
        //     {
        //         if (v)
        //             next();
        //         return *this;
        //     }
        //     /// Dereferences the iterator to return a pair of the key and value.
        //     value_type operator*() const { return { k, *v }; }
        //     /// Returns true if \a a is pointing to the same entry as \a b; false otherwise.
        //     friend bool operator==(const iterator &a, const iterator &b) { return a.v == b.v; }
        //     /// Returns false if \a a is pointing to the same entry as \a b; true otherwise.
        //     friend bool operator!=(const iterator &a, const iterator &b) { return a.v != b.v; }
        // };

        // /// Returns an iterator over the fields of the struct.
        // iterator begin() const
        // {
        //     return iterator(slint_interpreter_struct_make_iter(&inner));
        // }
        // /// Returns an iterator that when compared with an iterator returned by begin() can be
        // /// used to detect when all fields have been visited.
        // iterator end() const { return iterator(); }

        /// Returns the value of the field with the given \a name; Returns an std::optional without
        /// value if the field does not exist.
        // inline Nullable!Value Struct::get_field(string name) const
        // TODO: return was Nullable
        Value get_field(string name) const {
            Slice!uint8_t name_view = string_to_slice(name);
            if (Value* field_val = slint_interpreter_struct_get_field(&inner, name_view)) {
                // TODO: check move semantics
                // return Value(std::move(field_val));
                return Value(*field_val);
            }
            else {
                return Value.init;
            }
        }

        /// Sets the value of the field with the given \a name to the specified \a value. If the field
        /// does not exist yet, it is created; otherwise the existing field is updated to hold the new
        /// value.
        // void Struct::set_field(string name, const Value &value)
        void set_field(string name, ref const Value value) {
            Slice!uint8_t name_view = string_to_slice(name);
            slint_interpreter_struct_set_field(&inner, name_view, value.inner);
        }

        /// \private
        this(ref const StructOpaque other) {
            slint_interpreter_struct_clone(&other, &inner);
        }

    private:
        StructOpaque inner;
    }

    /// This is a dynamically typed value used in the Slint interpreter.
    /// It can hold a value of different types, and you should use the
    /// different overloaded constructors and the to_xxx() functions to access the
    //// value within.
    ///
    /// It is also possible to query the type the value holds by calling the Value::type()
    /// function.
    ///
    /// Note that models are only represented in one direction: You can create a slint::Model<Value>
    /// in C++, store it in a std::shared_ptr and construct Value from it. Then you can set it on a
    /// property in your .slint code that was declared to be either an array (`property <[sometype]>
    /// foo;`) or an object literal (`property <{foo: string, bar: int}> my_prop;`). Such properties are
    /// dynamic and accept models implemented in C++.
    ///
    /// ```
    /// Value v(42.0); // Creates a value that holds a double with the value 42.
    ///
    /// Value some_value = ...;
    /// // Check if the value has a string
    /// if (Nullable!(SharedString) string_value = some_value.to_string())
    ///     do_something(*string_value);  // Extract the string by de-referencing
    /// ```
    struct Value {
    public:
        /// Constructs a new value of type Value::Type::Void.
        // TODO: make sure this gets called
        void initialize() {
            inner = slint_interpreter_value_new();
        }

        /// Constructs a new value by copying \a other.
        // this(const Value other) {
        //     inner = slint_interpreter_value_clone(other.inner);
        // }

        /// Constructs a new value by copying \a other.
        this(ref const Value other) {
            inner = slint_interpreter_value_clone(other.inner);
        }
        /// Constructs a new value by moving \a other to this.
        // TODO: move constructor
        // this(Value &&other)
        // {
        //     inner = other.inner;
        //     other.inner = slint_interpreter_value_new();
        // }
        /// Assigns the value \a other to this.
        // TODO: assignment operator
        // Value &operator=(const Value &other)
        // {
        //     if (this == &other)
        //         return *this;
        //     slint_interpreter_value_destructor(inner);
        //     inner = slint_interpreter_value_clone(other.inner);
        //     return *this;
        // }
        // /// Moves the value \a other to this.
        // Value &operator=(Value &&other)
        // {
        //     if (this == &other)
        //         return *this;
        //     slint_interpreter_value_destructor(inner);
        //     inner = other.inner;
        //     other.inner = slint_interpreter_value_new();
        //     return *this;
        // }
        /// Destroys the value.
        ~this() {
            slint_interpreter_value_destructor(inner);
        }

        /// A convenience alias for the value type enum.
        alias Type = ValueType;

        // optional<int> to_int() const;
        // optional<float> to_float() const;
        /// Returns a std::optional that contains a double if the type of this Value is
        /// Type::Double, otherwise an empty optional is returned.
        Nullable!(const double) to_number() const {
            if (auto number = slint_interpreter_value_to_number(inner)) {
                return nullable(*number);
            }
            else {
                return typeof(return).init;
            }
        }

        /// Returns a std::optional that contains a string if the type of this Value is
        /// Type::String, otherwise an empty optional is returned.
        const(SharedString) to_string() const {
            if (auto str = slint_interpreter_value_to_string(inner)) {
                return *str;
            }
            else {
                // TODO: think how to init this string properly
                return SharedString();
            }
        }

        /// Returns a std::optional that contains a bool if the type of this Value is
        /// Type::Bool, otherwise an empty optional is returned.
        Nullable!(const bool) to_bool() const {
            if (auto b = slint_interpreter_value_to_bool(inner)) {
                return nullable(*b);
            }
            else {
                return typeof(return).init;
            }
        }

        /// Returns a std::optional that contains a vector of values if the type of this Value is
        /// Type::Model, otherwise an empty optional is returned.
        ///
        /// The vector will be constructed by serializing all the elements of the model.
        Nullable!(SharedVector!(Value)) to_array() const {
            SharedVector!Value array;
            if (slint_interpreter_value_to_array(&inner, cast(SharedVector!(Value*)*)(&array))) {
                return nullable(array);
            }
            else {
                return typeof(return).init;
            }
        }

        /// Returns a std::optional that contains a brush if the type of this Value is
        /// Type::Brush, otherwise an empty optional is returned.
        Nullable!(const Brush) to_brush() const {
            if (auto brush = slint_interpreter_value_to_brush(inner)) {
                return nullable(*brush);
            }
            else {
                return typeof(return).init;
            }
        }

        /// Returns a std::optional that contains a Struct if the type of this Value is
        /// Type::Struct, otherwise an empty optional is returned.
        Nullable!Struct to_struct() const {
            if (auto opaque_struct = slint_interpreter_value_to_struct(inner)) {
                return nullable(new Struct(*opaque_struct));
            }
            else {
                return typeof(return).init;
            }
        }

        /// Returns a std::optional that contains an Image if the type of this Value is
        /// Type::Image, otherwise an empty optional is returned.
        Nullable!(const Image) to_image() const {
            if (auto img = slint_interpreter_value_to_image(inner)) {
                return nullable(*cast(const Image*)(img));
            }
            else {
                return typeof(return).init;
            }
        }

        // template<typename T> Nullable!(T) get() const;

        /// Constructs a new Value that holds the double \a value.
        this(double value) {
            inner = slint_interpreter_value_new_double(value);
        }
        /// Constructs a new Value that holds the int \a value.
        /// Internally this is stored as a double and Value::type() will return Value::Type::Number.
        this(int value) {
            this(cast(double)(value));
        }
        /// Constructs a new Value that holds the string \a str.
        this(ref SharedString str) {
            inner = slint_interpreter_value_new_string(&str);
        }
        /// Constructs a new Value that holds the boolean \a b.
        this(bool b) {
            inner = slint_interpreter_value_new_bool(b);
        }
        /// Constructs a new Value that holds the value vector \a v as a model.
        // this (const SharedVector<Value> &v);
        //  {
        //  inner(slint_interpreter_value_new_array_model(
        //           reinterpret_cast<const slint::SharedVector<slint::Value *> *>(
        //                   &array)))
        // }
        /// Constructs a new Value that holds the value model \a m.
        // this(const std::shared_ptr<slint::Model<Value>> &m);
        /// Constructs a new Value that holds the brush \a b.
        this(ref const Brush brush) {
            inner = slint_interpreter_value_new_brush(&brush);
        }
        /// Constructs a new Value that holds the Struct \a struc.
        this(ref const Struct struc) {
            inner = slint_interpreter_value_new_struct(&struc.inner);
        }

        /// Constructs a new Value that holds the Image \a img.
        this(ref const Image img) {
            inner = slint_interpreter_value_new_image(&img);
        }

        /// Returns the type the variant holds.
        Type type() const {
            return slint_interpreter_value_type(inner);
        }

        /// Returns true if \a a and \a b hold values of the same type and the underlying vales are
        /// equal.
        // friend bool operator==(const Value &a, const Value &b)
        // {
        //     return slint_interpreter_value_eq(a.inner, b.inner);
        // }

    private:
        // Value(const void *) = delete; // Avoid that for example Value("foo") turns to Value(bool)
        Value* inner;
        // friend struct Struct;
        // friend class ComponentInstance;
        // friend class live_preview::LiveReloadingComponent;
        // friend class live_preview::LiveReloadModelWrapperBase;
        // Internal constructor that takes ownership of the value
        // explicit Value(slint::Value *&&inner) : inner(inner) { }
    }

    /// The ComponentInstance represents a running instance of a component.
    ///
    /// You can create an instance with the ComponentDefinition::create() function.
    ///
    /// Properties and callback can be accessed using the associated functions.
    ///
    /// An instance can be put on screen with the ComponentInstance::show() or the
    /// ComponentInstance::run()
    struct ComponentInstance // : vtable::Dyn
    {
        DynamicComponentVRc inner;
        // ComponentInstance() = delete;
        // ComponentInstance(ComponentInstance &) = delete;
        // ComponentInstance &operator=(ComponentInstance &) = delete;
        // friend class ComponentDefinition;

        // ComponentHandle<ComponentInstance>  is in fact a VRc<ItemTreeVTable, ErasedItemTreeBox>
        const(ErasedItemTreeBox)* get_inner() const {
            assert_main_thread();
            return cast(const ErasedItemTreeBox*)(&this);
        }

    public:
        /// Marks the window of this component to be shown on the screen. This registers
        /// the window with the windowing system. In order to react to events from the windowing system,
        /// such as draw requests or mouse/touch input, it is still necessary to spin the event loop,
        /// using slint::run_event_loop().
        void show() const {
            slint_interpreter_component_instance_show(get_inner(), true);
        }
        /// Marks the window of this component to be hidden on the screen. This de-registers
        /// the window from the windowing system and it will not receive any further events.
        void hide() const {
            slint_interpreter_component_instance_show(get_inner(), false);
        }
        /// Returns the Window associated with this component. The window API can be used
        /// to control different aspects of the integration into the windowing system,
        /// such as the position on the screen.
        const(Window)* window() {
            const WindowAdapterRcOpaque* win_ptr = null;
            slint_interpreter_component_instance_window(get_inner(), &win_ptr);
            return cast(const Window*)(win_ptr);
        }
        /// This is a convenience function that first calls show(), followed by
        /// slint::run_event_loop() and hide().
        void run() const {
            show();
            run_event_loop();
            hide();
        }
        // #    if defined(SLINT_FEATURE_BACKEND_QT) || defined(DOXYGEN)
        //     /// Return a QWidget for this instance.
        //     /// This function is only available if the qt graphical backend was compiled in, and
        //     /// it may return nullptr if the Qt backend is not used at runtime.
        //     QWidget *qwidget() const
        //     {
        //         const WindowAdapterRcOpaque *win_ptr = nullptr;
        //         slint_interpreter_component_instance_window(inner(), &win_ptr);
        //         auto wid = reinterpret_cast<QWidget *>(slint_qt_get_widget(
        //                 reinterpret_cast<const WindowAdapterRc *>(win_ptr)));
        //         return wid;
        //     }
        // #    endif

        /// Set the value for a public property of this component
        ///
        /// For example, if the component has a `property <string> hello;`,
        /// we can set this property
        /// ```
        /// instance->set_property("hello", SharedString("world"));
        /// ```
        ///
        /// Returns true if the property was correctly set. Returns false if the property
        /// could not be set because it either do not exist (was not declared in .slint) or if
        /// the value is not of the proper type for the property's type.
        bool set_property(string name, Value value) const {
            return slint_interpreter_component_instance_set_property(get_inner(),
                    string_to_slice(name), value.inner);
        }
        /// Returns the value behind a property declared in .slint.
        Value get_property(string name) const {
            if (Value* prop_inner = slint_interpreter_component_instance_get_property(get_inner(),
                    string_to_slice(name))) {
                // return Value(std::move(prop_inner));
                return Value(*prop_inner);
            }
            else {
                return typeof(return).init;
            }
        }
        /// Invoke the specified callback or function declared in .slint with the given arguments
        ///
        /// Example: imagine the .slint file contains the given callback declaration:
        /// ```
        ///     callback foo(string, int) -> string;
        /// ```
        /// Then one can call it with this function
        /// ```
        ///     slint::Value args[] = { SharedString("Hello"), 42. };
        ///     instance->invoke("foo", { args, 2 });
        /// ```
        ///
        /// Returns an null optional if the callback don't exist or if the argument don't match
        /// Otherwise return the returned value from the callback, which may be an empty Value if
        /// the callback did not return a value.
        // Nullable!Value invoke(string name, std::span<const Value> args) const
        // {
        //
        //     Slice<Box<Value>> args_view = make_slice(
        //             reinterpret_cast<const Box<Value> *>(args.data()), args.size());
        //     if (Value *rval_inner = slint_interpreter_component_instance_invoke(
        //                 inner(), string_to_slice(name), args_view)) {
        //         return Value(std::move(rval_inner));
        //     } else {
        //         return {};
        //     }
        // }

        /// Set a handler for the callback with the given name.
        ///
        /// A callback with that name must be defined in the document otherwise the function
        /// returns false.
        ///
        /// The \a callback parameter is a functor which takes as argument a slice of Value
        /// and must return a Value.
        ///
        /// Example: imagine the .slint file contains the given callback declaration:
        /// ```
        ///     callback foo(string, int) -> string;
        /// ```
        /// Then one can set the callback handler with this function
        /// ```
        ///   instance->set_callback("foo", [](auto args) {
        ///      std::cout << "foo(" << *args[0].to_string() << ", " << *args[1].to_number() << ")\n";
        ///   });
        /// ```
        ///
        /// Note: Since the ComponentInstance holds the handler, the handler itself should not
        /// capture a strong reference to the instance.
        // template<std::invocable<std::span<const Value>> F>
        // requires(std::is_convertible_v<std::invoke_result_t<F, std::span<const Value>>, Value>)
        alias UserCallback = extern (D) void function(Value[]);
        bool set_callback(string name, UserCallback callback) const {
            //  Value* []function(void *data,Slice!(Box!(Value)) arg)
            // static extern (C) void actual_cb(void* data, Slice!(Box!(Value)) arg) {
            //     *(cast(T*) value) = (cast(F) user_data)();
            // }

            extern (C) Value* actual_cb(void* data, Slice!(Box!(Value)) arg) {
                (cast(UserCallback) data)((cast(Value*) arg.ptr)[0 .. arg.len]);
                // writeln("Value: ", (cast(Value*) arg.ptr)[1].to_number.get.to!int);
                Value* inner = slint_interpreter_value_new();
                return inner;
            }
            // TODO: consider memory handling
            // the function pointer must be added as a root to the GC.
            return slint_interpreter_component_instance_set_callback(cast(const(ErasedItemTreeBox*))&inner,
                    string_to_slice(name), &actual_cb, cast(void*) callback /+new F(std::move(callback))+/ ,
                    null);
        }

        /// Set the value for a property within an exported global singleton.
        ///
        /// For example, if the main file has an exported global `TheGlobal` with a
        /// `property <int> hello`, we can set this property
        /// ```
        /// instance->set_global_property("TheGlobal", "hello", 42);
        /// ```
        ///
        /// Returns true if the property was correctly set. Returns false if the property
        /// could not be set because it either does not exist (was not declared in .slint) or if
        /// the value is not of the correct type for the property's type.
        ///
        /// **Note:** Only globals that are exported or re-exported from the main .slint file will
        /// be accessible
        bool set_global_property(string global, string prop_name, const Value value) const {

            return slint_interpreter_component_instance_set_global_property(get_inner(),
                    string_to_slice(global), string_to_slice(prop_name), value.inner);
        }
        /// Returns the value behind a property in an exported global singleton.
        Value get_global_property(string global, string prop_name) const {

            if (Value* rval_inner = slint_interpreter_component_instance_get_global_property(get_inner(),
                    string_to_slice(global), string_to_slice(prop_name))) {
                // return Value(std::move(rval_inner));
                return Value(*rval_inner);
            }
            else {
                return typeof(return).init;
            }
        }

        /// Like `set_callback()` but on a callback in the specified exported global singleton.
        ///
        /// Example: imagine the .slint file contains the given global:
        /// ```slint,no-preview
        ///    export global Logic {
        ///         pure callback to_uppercase(string) -> string;
        ///    }
        /// ```
        /// Then you can set the callback handler
        /// ```cpp
        ///    instance->set_global_callback("Logic", "to_uppercase", [](auto args) {
        ///        std::string arg1(*args[0].to_string());
        ///        std::transform(arg1.begin(), arg1.end(), arg1.begin(), toupper);
        ///        return SharedString(arg1);
        ///    })
        /// ```
        ///
        /// **Note:** Only globals that are exported or re-exported from the main .slint file will
        /// be accessible
        // template<std::invocable<std::span<const Value>> F>
        // bool set_global_callback(string global, string name, F callback) const
        // {
        //
        //     auto actual_cb =
        //             [](void *data,
        //                Slice<Box<Value>> arg) {
        //                 std::span<const Value> args_view { reinterpret_cast<const Value *>(arg.ptr),
        //                                                    arg.len };
        //                 Value r = (*reinterpret_cast<F *>(data))(args_view);
        //                 auto inner = r.inner;
        //                 r.inner = slint_interpreter_value_new();
        //                 return inner;
        //             };
        //     return slint_interpreter_component_instance_set_global_callback(
        //             inner(), string_to_slice(global),
        //             string_to_slice(name), actual_cb, new F(std::move(callback)),
        //             [](void *data) { delete reinterpret_cast<F *>(data); });
        // }

        /// Invoke the specified callback or function declared in an exported global singleton
        //     Nullable!Value invoke_global(string global, string callable_name,
        //                                        std::span<const Value> args) const
        //     {
        //
        //         Slice<Box<Value>> args_view =
        //                 make_slice(
        //                         reinterpret_cast<const Box<Value> *>(
        //                                 args.data()),
        //                         args.size());
        //         if (Value *rval_inner =
        //                     slint_interpreter_component_instance_invoke_global(
        //                             inner(), string_to_slice(global),
        //                             string_to_slice(callable_name), args_view)) {
        //             return Value(std::move(rval_inner));
        //         } else {
        //             return {};
        //         }
        //     }
        //
        //     /// Return the ComponentDefinition that was used to create this instance.
        //     inline ComponentDefinition definition() const;
        // };

        /// ComponentDefinition is a representation of a compiled component from .slint markup.
        ///
        /// It can be constructed from a .slint file using the ComponentCompiler::build_from_path() or
        /// ComponentCompiler::build_from_source() functions. And then it can be instantiated with the
        /// create() function.
        ///
        /// The ComponentDefinition acts as a factory to create new instances. When you've finished
        /// creating the instances it is safe to destroy the ComponentDefinition.
        struct ComponentDefinition {
            // friend class ComponentCompiler;
            // friend class ComponentInstance;

            @disable this();

            ComponentDefinitionOpaque inner;

            // ComponentDefinition() = delete;
            // Internal constructor that takes ownership of the component definition
            this(ComponentDefinitionOpaque inner) {
                this.inner = inner;
            }

        public:
            // move constructor
            // this(inout ComponentDefinition other) {
            //     writeln("ComponentDefinition ctor()");
            //     slint_interpreter_component_definition_clone(&other.inner, &inner);
            // }
            /// Constructs a new ComponentDefinition as a copy of \a other.
            this(ref inout ComponentDefinition other) {
                writeln("ComponentDefinition ctor()");
                slint_interpreter_component_definition_clone(&other.inner, &inner);
            }
            /// Assigns \a other to this ComponentDefinition.
            ref ComponentDefinition opAssign(inout ComponentDefinition other) {
                writeln("ComponentDefinition opAssign");

                if (this == other)
                    return this;

                slint_interpreter_component_definition_destructor(&inner);
                slint_interpreter_component_definition_clone(&other.inner, &inner);

                return this;
            }

            /// Destroys this ComponentDefinition.
            ~this() {
                writeln("ComponentDefinition dtor()");
                slint_interpreter_component_definition_destructor(&inner);
            }
            /// Creates a new instance of the component and returns a shared handle to it.
            ComponentHandle!ComponentInstance create() const {
                union CI {
                    ComponentInstance i;
                    ComponentHandle!ComponentInstance result;
                    // ~this() {
                    //     result.destroy();
                    // }
                    //
                    // this() {
                    // }
                }

                CI u;
                slint_interpreter_component_instance_create(&inner, &u.i);
                return u.result;
            }

            /// Returns a vector of PropertyDescriptor instances that describe the list of
            /// public properties that can be read and written using ComponentInstance::set_property and
            /// ComponentInstance::get_property.
            SharedVector!PropertyDescriptor properties() const {
                SharedVector!PropertyDescriptor props;
                slint_interpreter_component_definition_properties(&inner, &props);
                return props;
            }

            /// Returns a vector of strings that describe the list of public callbacks that can be invoked
            /// using ComponentInstance::invoke and set using ComponentInstance::set_callback.
            SharedVector!SharedString callbacks() const {
                SharedVector!SharedString callbacks;
                slint_interpreter_component_definition_callbacks(&inner, &callbacks);
                return callbacks;
            }

            /// Returns a vector of strings that describe the list of public functions that can be invoked
            /// using ComponentInstance::invoke.
            SharedVector!SharedString functions() const {
                SharedVector!SharedString functions;
                slint_interpreter_component_definition_functions(&inner, &functions);
                return functions;
            }

            /// Returns the name of this Component as written in the .slint file
            SharedString name() const {
                SharedString name;
                slint_interpreter_component_definition_name(&inner, &name);
                return name;
            }

            /// Returns a vector of strings with the names of all exported global singletons.
            SharedVector!SharedString globals() const {
                SharedVector!SharedString names;
                slint_interpreter_component_definition_globals(&inner, &names);
                return names;
            }

            /// Returns a vector of the property descriptors of the properties of the specified
            /// publicly exported global singleton. An empty optional is returned if there exists no
            /// exported global singleton under the specified name.
            Nullable!(SharedVector!(PropertyDescriptor)) global_properties(string global_name) const {
                SharedVector!PropertyDescriptor properties;
                if (slint_interpreter_component_definition_global_properties(&inner,
                        string_to_slice(global_name), &properties)) {
                    return nullable(properties);
                }
                return typeof(return).init;
            }

            /// Returns a vector of the names of the callbacks of the specified publicly exported global
            /// singleton. An empty optional is returned if there exists no exported global singleton
            /// under the specified name.
            Nullable!(SharedVector!(SharedString)) global_callbacks(string global_name) const {
                SharedVector!SharedString names;
                if (slint_interpreter_component_definition_global_callbacks(&inner,
                        string_to_slice(global_name), &names)) {
                    return nullable(names);
                }
                return typeof(return).init;
            }

            /// Returns a vector of the names of the functions of the specified publicly exported global
            /// singleton. An empty optional is returned if there exists no exported global singleton
            /// under the specified name.
            Nullable!(SharedVector!(SharedString)) global_functions(string global_name) const {
                SharedVector!SharedString names;
                if (slint_interpreter_component_definition_global_functions(&inner,
                        string_to_slice(global_name), &names)) {
                    return nullable(names);
                }
                return typeof(return).init;
            }
        }

        // ComponentDefinition ComponentInstance::definition() const
        // {
        //     ComponentDefinitionOpaque result;
        //     slint_interpreter_component_instance_component_definition(inner(), &result);
        //     return ComponentDefinition(result);
        // }

        /// ComponentCompiler is the entry point to the Slint interpreter that can be used
        /// to load .slint files or compile them on-the-fly from a string
        /// (using build_from_source()) or from a path  (using build_from_source())
        class ComponentCompiler {
            ComponentCompilerOpaque inner;

            // ComponentCompiler(ComponentCompiler &) = delete;
            // ComponentCompiler &operator=(ComponentCompiler &) = delete;

        public:
            /// Constructs a new ComponentCompiler instance.
            this() {
                slint_interpreter_component_compiler_new(&inner);
            }

            /// Destroys this ComponentCompiler.
            ~this() {
                slint_interpreter_component_compiler_destructor(&inner);
            }

            /// Sets the include paths used for looking up `.slint` imports to the specified vector of
            /// paths.
            void set_include_paths(const SharedVector!SharedString paths) {
                slint_interpreter_component_compiler_set_include_paths(&inner, &paths);
            }

            /// Sets the style to be used for widgets.
            void set_style(string style) {
                slint_interpreter_component_compiler_set_style(&inner, string_to_slice(style));
            }

            /// Returns the widget style the compiler is currently using when compiling .slint files.
            SharedString style() const {
                SharedString s;
                slint_interpreter_component_compiler_get_style(&inner, &s);
                return s;
            }

            /// Sets the domain used for translations.
            void set_translation_domain(string domain) {
                slint_interpreter_component_compiler_set_translation_domain(&inner,
                        string_to_slice(domain));
            }

            /// Returns the include paths the component compiler is currently configured with.
            SharedVector!SharedString include_paths() const {
                SharedVector!SharedString paths;
                slint_interpreter_component_compiler_get_include_paths(&inner, &paths);
                return paths;
            }

            /// Returns the diagnostics that were produced in the last call to build_from_path() or
            /// build_from_source().
            SharedVector!Diagnostic diagnostics() const {
                SharedVector!Diagnostic result;
                slint_interpreter_component_compiler_get_diagnostics(&inner, &result);
                return result;
            }

            /// Compile a .slint file into a ComponentDefinition
            ///
            /// Returns the compiled `ComponentDefinition` if there were no errors.
            ///
            /// Any diagnostics produced during the compilation, such as warnings or errors, are collected
            /// in this ComponentCompiler and can be retrieved after the call using the diagnostics()
            /// function.
            ///
            /// Diagnostics from previous calls are cleared when calling this function.
            ComponentDefinition build_from_source(string source_code, string path) {
                ComponentDefinitionOpaque result;
                if (slint_interpreter_component_compiler_build_from_source(&inner,
                        string_to_slice(source_code), string_to_slice(path), &result)) {
                    return ComponentDefinition(result);
                }
                // else {
                //
                return typeof(return).init;
                // }

            }

            /// Compile some .slint code into a ComponentDefinition
            ///
            /// The `path` argument will be used for diagnostics and to compute relative
            /// paths while importing.
            ///
            /// Any diagnostics produced during the compilation, such as warnings or errors, are collected
            /// in this ComponentCompiler and can be retrieved after the call using the
            /// Self::diagnostics() function.
            ///
            /// Diagnostics from previous calls are cleared when calling this function.
            MyNullable!ComponentDefinition build_from_path(string path) {
                ComponentDefinitionOpaque result;
                if (slint_interpreter_component_compiler_build_from_path(&inner,
                        string_to_slice(path), &result)) {

                    return MyNullable!ComponentDefinition(ComponentDefinition(result), true);
                }
                else {
                    return typeof(return).init;
                }
            }
        }
    }

    /// Send a key events to the given component instance
    void send_keyboard_string_sequence(const ComponentInstance* component, const SharedString str) {
        const WindowAdapterRcOpaque* win_ptr = null;
        slint_interpreter_component_instance_window(
                cast(const ErasedItemTreeBox*)(component), &win_ptr);
        slint.internal.send_keyboard_string_sequence(&str, cast(const WindowAdapterRc*)(win_ptr));
    }

}
