module slint.sharedvector_internal;

import core.stdc.stdint : uintptr_t, uint8_t;

extern (C) {

    /// This function is used for the low-level C++ interface to allocate the backing vector of a SharedVector.
    uint8_t* slint_shared_vector_allocate(uintptr_t size, uintptr_t align_);

    /// This function is used for the low-level C++ interface to deallocate the backing vector of a SharedVector
    void slint_shared_vector_free(uint8_t* ptr, uintptr_t size, uintptr_t align_);

    /// This function is used for the low-level C++ interface to initialize the empty SharedVector.
    const(uint8_t)* slint_shared_vector_empty();

} // extern "C"
