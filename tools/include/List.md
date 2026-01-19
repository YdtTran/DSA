# List Interface Documentation

This document explains the design and usage of the `List` interface defined in `List.h`.

## Overview

The `List` class template is an abstract interface for a generic list container, similar to standard C++ containers. It is designed to be inherited by concrete list implementations (such as linked lists or array lists). The interface enforces standard container semantics and value-based operations.

## Interface Definition

```
template <typename T>
class List {
    // ...
};
```

- `T`: The type of elements stored in the list.

## Member Types

- `value_type`: Alias for the element type `T`.
- `size_type`: Alias for `std::size_t`, used for sizes and positions.

## Core Methods

- `virtual ~List() = default;`
  - Virtual destructor for safe polymorphic use.
- `virtual bool empty() const noexcept = 0;`
  - Returns `true` if the list is empty.
- `virtual size_type size() const noexcept = 0;`
  - Returns the number of elements in the list.
- `virtual void push_back(const T& value) = 0;`
  - Appends an element to the end of the list.
- `virtual void insert(size_type pos, const T& value) = 0;`
  - Inserts an element at the specified position.
- `virtual void clear() = 0;`
  - Removes all elements from the list.

## Iterator Interface (Optional)

The nested `Iterator` class provides an interface for iterating over the list, similar to standard C++ iterators. Implementations should provide concrete iterator types.

### Iterator Methods

- `virtual ~Iterator() = default;`
- `virtual Iterator& operator++() = 0;`
  - Advances the iterator.
- `virtual T& operator*() const = 0;`
  - Dereferences the iterator to access the element.
- `virtual bool operator!=(const Iterator& other) const = 0;`
  - Compares two iterators for inequality.

### Iterator Access

- `virtual Iterator* begin() = 0;`
  - Returns a pointer to an iterator at the beginning of the list.
- `virtual Iterator* end() = 0;`
  - Returns a pointer to an iterator one past the last element.

## Usage Example

To use this interface, inherit from `List<T>` and implement all pure virtual methods:

```cpp
#include "List.h"

class MyList : public List<int> {
    // Implement all required methods...
};
```

## Notes

- This is an interface only; it does not provide any storage or implementation.
- The iterator interface is optional but recommended for standard compliance.
- All operations use value semantics (no raw pointers to elements).

---
For further details, see the source code in `tools/include/List.h`.
