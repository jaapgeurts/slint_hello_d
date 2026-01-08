// Copyright © SixtyFPS GmbH <info@slint.dev>
// SPDX-License-Identifier: GPL-3.0-only OR LicenseRef-Slint-Royalty-free-2.0 OR LicenseRef-Slint-Software-3.0
module slint.size;

import core.stdc.stdint : uint32_t;

/// The Size structure is used to represent a two-dimensional size
/// with width and height.
extern (C) struct Size(T) {
    /// The width of the size
    T width;
    /// The height of the size
    T height;

    /// Compares with \a other and returns true if they are equal; false otherwise.
    // bool operator==(const Size &other) const = default;
}

// The Size types are expanded to the Size2D<...> type from the euclid crate which
// is binary compatible with Size<T>
alias Size2D(T) = Size!T;

/// A size given in logical pixels
alias LogicalSize = Size!float;

/// A size given in physical pixels.
alias PhysicalSize = Size!uint32_t;
