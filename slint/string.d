// Copyright © SixtyFPS GmbH <info@slint.dev>
// SPDX-License-Identifier: GPL-3.0-only OR LicenseRef-Slint-Royalty-free-2.0 OR LicenseRef-Slint-Software-3.0
module slint.string;

import std.stdio;
import std.string;

import slint.string_internal;

/// A string type used by the Slint run-time.
///
/// SharedString uses implicit data sharing to make it efficient to pass around copies. When
/// copying, a reference to the data is cloned, not the data itself.
///
/// The class provides constructors from std::string_view as well as the automatic conversion to
/// a std::string_view.
///
/// For convenience, it's also possible to convert a number to a string using
/// SharedString::from_number(double).
///
/// Under the hood the string data is UTF-8 encoded and it is always terminated with a null
/// character.

// TODO: convert this class to a struct because it interops with rust.
extern (C) struct SharedString {

    // TODO: enable later
    /// Creates an empty default constructed string.
    // this() {
    //     slint_shared_string_from_bytes(this, "".ptr, 0);
    // }
    /// Creates a new SharedString from the string view \a s. The underlying string data
    /// is copied.
    this(string s) {

        // auto t = s.toStringz();
        writefln("SharedString.inner before: %s", this.inner);
        // TODO: change the signature to accept a void* (and make it an opaque pointer)
        slint_shared_string_from_bytes(cast(SharedString*)&this.inner, s.ptr, s.length);
        // slint_shared_string_from_bytes(&this, "".ptr, 0);
        writefln("SharedString.inner  after: %s", this.inner);
    }

    void initialize() {
        writefln("SharedString.initialize() called: this=%s", &this);
        slint_shared_string_from_bytes(cast(SharedString*)&this.inner, "DLang".ptr, 5);
    }

    /// Creates a new SharedString from \a other.
    this(inout SharedString other) {
        slint_shared_string_clone(cast(SharedString*)&this.inner,
                cast(SharedString*)&other.inner);
    }

    /// Destroys this SharedString and frees the memory if this is the last instance
    /// referencing it.
    ~this() {
        // TODO: review
        // 1. maybe the struct was never initialized
        // because D doesn't support default constructors for structs
        // 2. The struct may also not be dropped, since it was cloned.

        // if (inner !is null)
        // slint_shared_string_drop(cast(SharedString*)&this.inner);
        writeln("SharedString.dtor called");
    }
    /// Assigns \a other to this string and returns a reference to this string.
    void opAssign(SharedString other) {
        writefln("SharedString.inner assign before: %s", this.inner);
        // maybe the struct was never initialized
        // because D doesn't support default constructors for structs
        // if (this.inner !is null)
        //     slint_shared_string_drop(cast(SharedString*)&this.inner);
        slint_shared_string_clone(cast(SharedString*)&this.inner,
                cast(SharedString*)&other.inner);
        writefln("SharedString.inner assign after: %s", this.inner);
    }
    // /// Assigns the string view \a s to this string and returns a reference to this string.
    // /// The underlying string data is copied.  It is assumed that the string is UTF-8 encoded.
    // SharedString &operator=(std::string_view s)
    // {
    //     slint_shared_string_drop(this);
    //     slint_shared_string_from_bytes(this, s.data(), s.size());
    //     return *this;
    // }
    // /// Assigns null-terminated string pointer \a s to this string and returns a reference
    // /// to this string. The underlying string data is copied. It is assumed that the string
    // /// is UTF-8 encoded.
    // SharedString &operator=(const char *s) { return *this = std::string_view(s); }
    //
    // /// Move-assigns \a other to this SharedString instance.
    // SharedString &operator=(SharedString &&other)
    // {
    //     std::swap(inner, other.inner);
    //     return *this;
    // }

    /// Provides a view to the string data. The returned view is only valid as long as at
    /// least this SharedString exists.
    // operator std::string_view() const { return slint_shared_string_bytes(this); }
    string asString() const {
        return cast(string) fromStringz(slint_shared_string_bytes(cast(SharedString*)&this.inner));
    }
    /// Provides a raw pointer to the string data. The returned pointer is only valid as long as at
    /// least this SharedString exists.
    const(ubyte)* data() const {
        return cast(const(ubyte)*) slint_shared_string_bytes(cast(SharedString*)&this.inner);
    }
    /// Size of the string, in bytes. This excludes the terminating null character.
    size_t size() const {
        return asString().length;
    }

    /// Returns a pointer to the first character. It is only safe to dereference the pointer if the
    /// string contains at least one character.
    const(ubyte)* begin() const {
        return data();
    }
    /// Returns a point past the last character of the string. It is not safe to dereference the
    /// pointer, but it is suitable for comparison.
    const(ubyte)* end() const {
        // TODO: check if $-1 is correct or must be $-2 (because of \0)
        return cast(const(ubyte)*)&asString()[$ - 1];
    }

    /// \return true if the string contains no characters; false otherwise.
    bool empty() const {
        return size() == 0;
    }

    /// \return true if the string starts with the specified prefix string; false otherwise
    bool starts_with(string prefix) const {
        return prefix == asString()[0 .. prefix.length];
        // return std::string_view(*this).substr(0, prefix.size()) == prefix;
    }

    /// \return true if the string ends with the specified prefix string; false otherwise
    bool ends_with(string prefix) const {
        return prefix == asString()[$ - prefix.length .. $];
        // std::string_view self_view(*this);
        // return self_view.size() >= prefix.size()
        //         && self_view.compare(self_view.size() - prefix.size(), std::string_view::npos,
        //                              prefix)
        //         == 0;
    }

    /// Reset to an empty string
    void clear() {
        slint_shared_string_from_bytes(cast(SharedString*)&this.inner, "".ptr, 0);
        //*this = std::string_view("", 0);
    }

    /// Creates a new SharedString from the given number \a n. The string representation of the
    /// number uses a minimal formatting scheme: If \a n has no fractional part, the number will be
    /// formatted as an integer.
    ///
    /// For example:
    /// \code
    ///     auto str = slint::SharedString::from_number(42); // creates "42"
    ///     auto str2 = slint::SharedString::from_number(100.5) // creates "100.5"
    /// \endcode
    static SharedString from_number(double n) {
        return SharedString(n);
    }

    /// Returns the lowercase equivalent of this string, as a new SharedString.
    ///
    /// For example:
    /// \code
    ///     auto str = slint::SharedString("Hello");
    ///     auto str2 = str.to_lowercase(); // creates "hello"
    /// \endcode
    SharedString to_lowercase() const {
        auto out_ = SharedString();
        slint_shared_string_to_lowercase(&out_, cast(SharedString*)&this.inner);
        return out_;
    }

    /// Returns the uppercase equivalent of this string, as a new SharedString.
    ///
    /// For example:
    /// \code
    ///     auto str = slint::SharedString("Hello");
    ///     auto str2 = str.to_uppercase(); // creates "HELLO"
    /// \endcode
    SharedString to_uppercase() const {
        auto out_ = SharedString();
        slint_shared_string_to_uppercase(&out_, cast(SharedString*)&this.inner);
        return out_;
    }

    // /// Returns true if \a a is equal to \a b; otherwise returns false.
    // friend bool operator==(const SharedString &a, const SharedString &b)
    // {
    //     return std::string_view(a) == std::string_view(b);
    // }
    // /// Returns true if \a a is not equal to \a b; otherwise returns false.
    // friend bool operator!=(const SharedString &a, const SharedString &b)
    // {
    //     return std::string_view(a) != std::string_view(b);
    // }
    //
    // /// Returns true if \a a is lexicographically less than \a b; false otherwise.
    // friend bool operator<(const SharedString &a, const SharedString &b)
    // {
    //     return std::string_view(a) < std::string_view(b);
    // }
    // /// Returns true if \a a is lexicographically less or equal than \a b; false otherwise.
    // friend bool operator<=(const SharedString &a, const SharedString &b)
    // {
    //     return std::string_view(a) <= std::string_view(b);
    // }
    // /// Returns true if \a a is lexicographically greater than \a b; false otherwise.
    // friend bool operator>(const SharedString &a, const SharedString &b)
    // {
    //     return std::string_view(a) > std::string_view(b);
    // }
    // /// Returns true if \a a is lexicographically greater or equal than \a b; false otherwise.
    // friend bool operator>=(const SharedString &a, const SharedString &b)
    // {
    //     return std::string_view(a) >= std::string_view(b);
    // }
    //
    // /// Writes the \a shared_string to the specified \a stream and returns a reference to the
    // /// stream.
    // friend std::ostream &operator<<(std::ostream &stream, const SharedString &shared_string)
    // {
    //     return stream << std::string_view(shared_string);
    // }
    //
    // /// Concatenates \a a and \a and returns the result as a new SharedString.
    // friend SharedString operator+(const SharedString &a, std::string_view b)
    // {
    //     SharedString a2 = a;
    //     return a2 += b;
    // }
    // /// Move-concatenates \a b to \a and returns a reference to \a a.
    // friend SharedString operator+(SharedString &&a, std::string_view b)
    // {
    //     a += b;
    //     return a;
    // }
    // /// Appends \a other to this string and returns a reference to this.
    // SharedString &operator+=(std::string_view other)
    // {
    //     slint_shared_string_append(this, other.data(), other.size());
    //     return *this;
    // }

private:
    /// Use SharedString::from_number
    this(double n) {
        slint_shared_string_from_number(cast(SharedString*)&this.inner, n);
    }

    void* inner; // opaque
}

// TODO: convert this and other code to native D slices,
Slice!(T) make_slice(T)(const T* ptr, size_t len) {
    // Rust uses a NonNull, so even empty slices shouldn't use nullptr
    return Slice!(T)(ptr != null ? cast(T*) ptr : cast(T*) T.sizeof, len);
}

// template<typename T, size_t Extent>
// Slice<std::remove_const_t<T>> make_slice(std::span<T, Extent> span)
// {
//     return make_slice(span.data(), span.size());
// }

// Slice!(uint8_t) string_to_slice(string str)
// {
//     return make_slice(cast(const uint8_t *)(str.data()), str.size());
// }
