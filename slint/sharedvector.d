// Copyright © SixtyFPS GmbH <info@slint.dev>
// SPDX-License-Identifier: GPL-3.0-only OR LicenseRef-Slint-Royalty-free-2.0 OR LicenseRef-Slint-Software-3.0

module slint.sharedvector;

import core.lifetime;
import core.stdc.stdint : intptr_t;

import slint.sharedvector_internal;

/// SharedVector is a vector template class similar to std::vector that's primarily used for passing
/// data in and out of the Slint run-time library. It uses implicit-sharing to make creating
/// copies cheap. Only when a function changes the vector's data, a copy is is made.
extern (C) {
    struct SharedVector(T) {
        /// Creates a new, empty vector.

        void initialize() {
            this.inner = cast(SharedVectorHeader*)(
                    cast(const SharedVectorHeader*)(slint_shared_vector_empty()));
        }

        // /// Creates a new vector that holds all the elements of the given std::initializer_list \a args.
        // this(std::initializer_list<T> args)
        //     : SharedVector(with_capacity(args.size()))
        // {
        //     auto new_data = reinterpret_cast<T *>(inner + 1);
        //     auto input_it = args.begin();
        //     for (std::size_t i = 0; i < args.size(); ++i, ++input_it) {
        //         new (new_data + i) T(*input_it);
        //         inner->size++;
        //     }
        // }

        /// Creates a vector of a given size, with default-constructed data.
        this(size_t size) {

            setCapacity(size);

            // TODO: simplify this
            auto new_data = cast(T*)(inner + 1);
            for (size_t i = 0; i < size; ++i) {
                emplace!(T)(new_data + i);
                // new (new_data + i) T();
                inner.size++;
            }
        }

        /// Creates a vector of a given size, initialized with copies of the \a value.
        this(size_t size, ref T value) {
            setCapacity(size);
            auto new_data = cast(T*)(inner + 1);
            for (size_t i = 0; i < size; ++i) {
                emplace!(T)(new_data + i, value);
                // new (new_data + i) T(value);
                inner.size++;
            }
        }

        void setCapacity(size_t capacity) {
            inner = cast(SharedVectorHeader*) slint_shared_vector_allocate(
                    SharedVectorHeader.sizeof + capacity * T.sizeof, SharedVectorHeader.alignof);
            inner.refcount = 1;
            inner.capacity = capacity;
            inner.size = 0;
        }

        /// Constructs the container with the contents of the range `[first, last)`.
        // template<class InputIt>
        // SharedVector(InputIt first, InputIt last)
        //     : SharedVector(with_capacity(std::distance(first, last)))
        // {
        //     std::uninitialized_copy(first, last, begin());
        //     inner->size = inner->capacity;
        // }

        /// Creates a new vector that is a copy of \a other.
        // SharedVector(const SharedVector &other) : inner(other.inner)
        // {
        //     if (inner->refcount > 0) {
        //         ++inner->refcount;
        //     }
        // }

        /// Destroys this vector. The underlying data is destroyed if no other
        /// vector references it.
        // ~SharedVector() { drop(); }
        /// Assigns the data of \a other to this vector and returns a reference to this vector.
        // SharedVector &operator=(const SharedVector &other)
        // {
        //     if (other.inner == inner) {
        //         return *this;
        //     }
        //     drop();
        //     inner = other.inner;
        //     if (inner->refcount > 0) {
        //         ++inner->refcount;
        //     }
        //     return *this;
        // }
        /// Move-assign's \a other to this vector and returns a reference to this vector.
        // SharedVector &operator=(SharedVector &&other)
        // {
        //     std::swap(inner, other.inner);
        //     return *this;
        // }

        /// Returns a const pointer to the first element of this vector.
        // const T *cbegin() const { return reinterpret_cast<const T *>(inner + 1); }

        /// Returns a const pointer that points past the last element of this vector. The
        /// pointer cannot be dereferenced, it can only be used for comparison.
        // const T *cend() const { return cbegin() + inner->size; }

        /// Returns a const pointer to the first element of this vector.
        // const T *begin() const { return cbegin(); }
        /// Returns a const pointer that points past the last element of this vector. The
        /// pointer cannot be dereferenced, it can only be used for comparison.
        // const T *end() const { return cend(); }

        /// Returns a pointer to the first element of this vector.
        // T *begin()
        // {
        //     detach(inner->size);
        //     return reinterpret_cast<T *>(inner + 1);
        // }

        /// Returns a pointer that points past the last element of this vector. The
        /// pointer cannot be dereferenced, it can only be used for comparison.
        // T *end()
        // {
        //     detach(inner->size);
        //     return begin() + inner->size;
        // }

        /// Returns the number of elements in this vector.
        size_t size() const {
            return inner.size;
        }

        /// Returns true if there are no elements on this vector; false otherwise.
        bool empty() const {
            return inner.size == 0;
        }

        /// This indexing operator returns a reference to the \a `index`th element of this vector.
        // T &operator[](std::size_t index) { return begin()[index]; }
        /// This indexing operator returns a const reference to the \a `index`th element of this vector.
        // const T &operator[](std::size_t index) const { return begin()[index]; }

        /// Returns a reference to the \a `index`th element of this vector.
        // const T &at(std::size_t index) const { return begin()[index]; }

        /// Appends the \a value as a new element to the end of this vector.
        // void push_back(const T &value)
        // {
        //     detach(inner->size + 1);
        //     new (end()) T(value);
        //     inner->size++;
        // }
        /// Moves the \a value as a new element to the end of this vector.
        // void push_back(T &&value)
        // {
        //     detach(inner->size + 1);
        //     new (end()) T(std::move(value));
        //     inner->size++;
        // }

        /// Clears the vector and removes all elements. The capacity remains unaffected.
        void clear() {
            // if (inner.refcount != 1) {
            //     *this = SharedVector(); // TODO: silly way to reinit.
            // } else {
            //     auto b = cbegin(), e = cend();
            //     inner.size = 0;
            //     // TODO: remove iterators
            //     for (auto it = b; it < e; ++it) {
            //         it.destroy();
            //     }
            // }
        }

        // /// Returns true if the vector \a a has the same number of elements as \a b
        // /// and all the elements also compare equal; false otherwise.
        // friend bool operator==(const SharedVector &a, const SharedVector &b)
        // {
        //     if (a.size() != b.size())
        //         return false;
        //     return std::equal(a.cbegin(), a.cend(), b.cbegin());
        // }

        /// \private
        size_t capacity() const {
            return inner.capacity;
        }

    private:
        // void detach(size_t expected_capacity)
        // {
        //     if (inner->refcount == 1 && expected_capacity <= inner->capacity) {
        //         return;
        //     }
        //     auto new_array = with_capacity(expected_capacity);
        //     auto old_data = reinterpret_cast<const T *>(inner + 1);
        //     auto new_data = reinterpret_cast<T *>(new_array.inner + 1);
        //     for (std::size_t i = 0; i < inner->size; ++i) {
        //         new (new_data + i) T(old_data[i]);
        //         new_array.inner->size++;
        //     }
        //     *this = std::move(new_array);
        // }

        // void drop()
        // {
        //     if (inner->refcount > 0 && (--inner->refcount) == 0) {
        //         auto b = cbegin(), e = cend();
        //         for (auto it = b; it < e; ++it) {
        //             it->~T();
        //         }
        //         slint_shared_vector_free(reinterpret_cast<uint8_t *>(inner),
        //                                                    sizeof(SharedVectorHeader)
        //                                                            + inner->capacity * sizeof(T),
        //                                                    alignof(SharedVectorHeader));
        //     }
        // }

        static SharedVector with_capacity(size_t capacity) {
            auto mem = cast(SharedVectorHeader*) slint_shared_vector_allocate(
                    SharedVectorHeader.sizeof + capacity * T.sizeof, SharedVectorHeader.alignof);
            return SharedVector(emplace!SharedVectorHeader(mem,
                    SharedVectorHeader(1, 0, capacity)));
            // return SharedVector(new (mem) SharedVectorHeader { { 1 }, 0, capacity });
        }

        // Unfortunately, this cannot be generated by cbindgen because std::atomic is not understood
        struct SharedVectorHeader {
            intptr_t refcount;
            size_t size;
            size_t capacity;
        }
        // static_assert(alignof(T) <= alignof(SharedVectorHeader),
        //               "Not yet supported because we would need to add padding");
        SharedVectorHeader* inner;
        this(SharedVectorHeader* inner) {
            this.inner = inner;
        }
    }

}
