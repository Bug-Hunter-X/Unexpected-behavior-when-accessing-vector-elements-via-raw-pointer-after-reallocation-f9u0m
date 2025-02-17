# Unexpected Behavior with std::vector and Raw Pointers

This repository demonstrates a common C++ error related to using raw pointers with `std::vector`.  When a `std::vector` needs to resize (due to `push_back`, `insert`, etc.), its underlying memory buffer might be reallocated to a new location. If you hold a raw pointer to an element in the vector, this reallocation will invalidate the pointer, leading to undefined behavior.

**The Problem:**
The code in `bug.cpp` illustrates the issue. A raw pointer is used to point to the beginning of the vector. Elements are then added, causing a potential reallocation.  Accesses after reallocation using the raw pointer may produce unexpected results or crashes.

**The Solution:**
`bugSolution.cpp` showcases a safer approach using iterators instead of raw pointers. Iterators are designed to handle potential reallocations gracefully and are the recommended way to iterate over `std::vector` elements.

**Lesson Learned:**
Avoid using raw pointers to access elements within dynamically sized containers like `std::vector`. Prefer iterators or range-based for loops for safe and reliable access.