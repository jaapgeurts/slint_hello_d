// Copyright © SixtyFPS GmbH <info@slint.dev>
// SPDX-License-Identifier: GPL-3.0-only OR LicenseRef-Slint-Royalty-free-2.0 OR LicenseRef-Slint-Software-3.0
module slint.point;

import core.stdc.stdint : int32_t;

/// The Point structure is used to represent a two-dimensional point
/// with x and y coordinates.

extern (C) struct Point(T) {
    /// The x coordinate of the point
    T x;
    /// The y coordinate of the point
    T y;
    /// Compares with \a other and returns true if they are equal; false otherwise.
    // bool operator==(const Point &other) const = default;
}

// The Point types are expanded to the Point2D<...> type from the euclid crate which
// is binary compatible with Point<T>
alias Point2D(T) = Point!T;

/// A position in logical pixel coordinates
alias LogicalPosition = Point!(float);

/// A position in physical pixel coordinates
alias PhysicalPosition = Point!(int32_t);
