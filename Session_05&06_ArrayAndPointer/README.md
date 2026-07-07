# 📂 Session 05&06: Array and Pointer

This session covers how memory is managed in low-level languages like C and C++: storing contiguous sequences of data (Arrays), accessing memory addresses (Pointers), and reserving memory dynamically on the heap (Dynamic Memory Allocation).

---

## 💡 Concepts Explained

### 1. Arrays (1D and 2D)
An array is a fixed-size, contiguous block of memory storing elements of the same data type.
*   **1D Array**: `int arr[5];`
*   **2D Array**: `int matrix[2][3];` (represented as rows and columns, but physically laid out linearly in memory).

### 2. Pointers (`&` and `*`)
A **pointer** is a variable that stores the memory address of another variable.
*   `&` (Address-of operator): Extracts the memory address.
*   `*` (Dereference operator): Accesses/modifies the value stored at that address.

### 3. Pointer Arithmetic
Since arrays are contiguous, incrementing a pointer (`ptr++`) moves the address forward by the size of the data type (e.g. `4` bytes for an integer).

### 4. Dynamic Memory Allocation (DMA)
Using stack memory (local variables) is fast but size-limited. For dynamic datasets, we use the **Heap** via standard library operations:
*   `malloc(size_t size)`: Reserves a block of raw memory.
*   `realloc(void *ptr, size_t new_size)`: Resizes a previously allocated block.
*   `free(void *ptr)`: Returns the memory block back to the system. **Warning**: Always free dynamic pointers to avoid memory leaks!

---

## 🏃 Code Examples
Check these files in this directory:
*   [**`arrays_and_pointers.c`**](arrays_and_pointers.c) — Pointer assignment, swapping variables by reference, and pointer arithmetic on arrays in C.
*   [**`memory_allocation.c`**](memory_allocation.c) — Heap memory management (`malloc`, `realloc`, `free`) in C.
*   [**`pointers.cpp`**](pointers.cpp) — Pointer reference semantics in C++.

---

## 🚀 Preparing for What's Next: CS50 / MIT Context
*   **Why we learn this**: To understand how the computer operates at the hardware level. Pointers map variables directly to physical silicon storage addresses.
*   **What we use this for**: Passing big structures to functions without copying them (efficient memory usage), and creating resizing arrays (vectors).
*   **Where to start next**: Learn how to modularize logic using function blocks and recursive memory recursion, which leads to **Functions and Recursion** in Session 07.
