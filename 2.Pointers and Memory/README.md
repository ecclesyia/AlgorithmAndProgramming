# 🧠 Module 2: Pointers, Arrays, and Memory Management

This module details one of the most feared and essential topics of the Binus Algorithms & Programming curriculum: **Pointers** and **Dynamic Memory Allocation**. Mastering this is key to building data structures like Linked Lists and Trees.

---

## 💡 Key Concepts Explained

### 1. What is a Pointer?
A **pointer** is a variable that stores the **memory address** of another variable.
*   **Address-of Operator (`&`)**: Gets the memory address of a regular variable.
*   **Dereference Operator (`*`)**: Accesses or modifies the value stored at the address a pointer is holding.

```c
int num = 45;
int *ptr = &num; // ptr now stores the memory address of num (e.g. 0x7ffd58)

printf("Address of num: %p\n", &num);
printf("Address stored in ptr: %p\n", ptr);
printf("Value stored in num: %d\n", num);
printf("Value accessed via dereferencing ptr: %d\n", *ptr);

*ptr = 90; // Changing the value at the address ptr points to
printf("New value of num: %d\n", num); // num is now 90!
```

#### Memory Grid Visualization
```text
Variable Name:   num                 ptr (Pointer)
Value:           [  90  ]  <======== [ 0x7ffd58 ] (Points here)
Memory Address:  0x7ffd58            0x7ffd60
```

---

### 2. Pointer Arithmetic and Arrays
In C, the name of an array acts as a pointer to its first element. 
```c
int arr[3] = {10, 20, 30};
int *p = arr; // Same as p = &arr[0];

printf("%d\n", *p);       // Prints 10
printf("%d\n", *(p + 1)); // Prints 20 (moves forward by sizeof(int) bytes)
printf("%d\n", *(p + 2)); // Prints 30
```

---

### 3. Stack vs. Heap Memory
*   **Stack**: Memory allocated automatically for local variables when functions are called. It is fast but size-limited, and variables are destroyed when the function exits.
*   **Heap**: Large pool of memory managed manually by the programmer. Variables allocated on the heap persist until they are explicitly deallocated.

---

### 4. Dynamic Memory Allocation (DMA)
We use `<stdlib.h>` functions to reserve memory on the heap at runtime:
1.  `malloc(size_t size)`: Allocates raw uninitialized memory. Returns a generic pointer (`void *`).
2.  `calloc(size_t num, size_t size)`: Allocates memory and initializes all bytes to `0` (slower but safer).
3.  `realloc(void *ptr, size_t new_size)`: Resizes previously allocated heap memory.
4.  `free(void *ptr)`: Deallocates heap memory. **Crucial**: Failing to call `free()` causes a **memory leak**, which will crash programs over time.

```c
// Allocating space for an array of 5 integers dynamically
int *arr = (int *)malloc(5 * sizeof(int));

if (arr == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
}

// Use the array...
arr[0] = 100;

// Always free after use!
free(arr);
arr = NULL; // Good practice to prevent dangling pointer
```

---

## 🏃 Runnable Code Examples
Check out these files in this directory:
1.  [**`pointers_basics.c`**](pointers_basics.c) — Pointer assignment, address printing, and swapping variables using pass-by-reference.
2.  [**`memory_allocation.c`**](memory_allocation.c) — Allocating dynamic arrays, resizing them using `realloc`, and freeing memory.

---

## 🚀 Preparing for What's Next: CS50 / MIT Context
*   **Why we learn this**: Computers don't have magical variables; they have physical memory storage slots. Pointers let us interact with hardware memory directly.
*   **What we use this for**: Pointers allow us to pass large blocks of data to functions efficiently (without copying the whole block) and create dynamic data structures whose size changes at runtime (unlike fixed-size arrays).
*   **Where to start next**: Now that we can dynamically allocate memory boxes and connect them using pointers, we can build custom records using **Structs** and link them to create **Linked Lists** in Module 3.
