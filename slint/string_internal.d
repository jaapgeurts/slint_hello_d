module slint.string_internal;

import core.stdc.stdint : uintptr_t;

import slint.string;

extern (C) {

    struct Slice(T) {
        /// Invariant, this is a valid slice of len `len`
        T* ptr;
        uintptr_t len;
        // const T &operator[](int i) const { return ptr[i]; }
    }

    /// Returns a nul-terminated pointer for this string.
    /// The returned value is owned by the string, and should not be used after any
    /// mutable function have been called on the string, and must not be freed.
    const(char)* slint_shared_string_bytes(const SharedString* ss);

    /// Destroy the shared string
    void slint_shared_string_drop(const SharedString* ss);

    /// Increment the reference count of the string.
    /// The resulting structure must be passed to slint_shared_string_drop
    void slint_shared_string_clone(SharedString* out_, const SharedString* ss);

    /// Safety: bytes must be a valid utf-8 string of size len without null inside.
    /// The resulting structure must be passed to slint_shared_string_drop
    void slint_shared_string_from_bytes(SharedString* out_, const char* bytes, uintptr_t len);

    /// Create a string from a number.
    /// The resulting structure must be passed to slint_shared_string_drop
    void slint_shared_string_from_number(SharedString* out_, double n);

    void slint_shared_string_from_number_fixed(SharedString* out_, double n, uintptr_t digits);

    void slint_shared_string_from_number_precision(SharedString* out_, double n, uintptr_t precision);

    /// Append some bytes to an existing shared string
    ///
    /// bytes must be a valid utf8 array of size `len`, without null bytes inside
    void slint_shared_string_append(SharedString* self_, const char* bytes, uintptr_t len);

    void slint_shared_string_to_lowercase(SharedString* out_, const SharedString* ss);

    void slint_shared_string_to_uppercase(SharedString* out_, const SharedString* ss);

} // extern "C"
