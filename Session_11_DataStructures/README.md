# 📂 Session 11: Data Structures

This session covers compound data types (**Structures**) and dynamic reference chains (**Linked Lists**).

---

## 💡 Concepts Explained

### 1. Structures (`struct`)
Groups related variables of different data types under a single custom name.
*   **Arrow operator (`->`)**: Used to access members of a struct through a pointer.
    ```c
    Student s = {"Budi", 20};
    Student *ptr = &s;
    printf("%s\n", ptr->name); // Equivalent to (*ptr).name
    ```

### 2. Singly Linked Lists
Unlike static arrays, a **Linked List** stores nodes dynamically in heap memory, linked together using pointers. This allows the list to grow or shrink in size during runtime.

Each node contains:
1.  **Data**: The actual payload.
2.  **Next Pointer**: Points to the next node structure in the sequence. The last node points to `NULL`.

```text
Visual Representation:
[ Head ] ➡️ [ Data: 10 | Next ] ➡️ [ Data: 20 | Next ] ➡️ [ Data: 30 | NULL ]
```

---

## 🏃 Code Examples
Check these files in this directory:
*   [**`structs.c`**](structs.c) — Struct records, arrays of structures, and function pointers references in C.
*   [**`linked_list.c`**](linked_list.c) — A complete Singly Linked List (insert head/tail/mid, delete node, print list, free memory) in C.

---

## 🚀 Preparing for What's Next: CS50 / MIT Context
*   **Why we learn this**: Dynamic scale. Linked Lists are the structural building block for more complex structures.
*   **What we use this for**: Symbol tables, hashing chains, undo/redo stacks, and cache lines.
*   **Where to start next**: Learn how to build branching hierarchical structures (trees) and analyze complexity mathematically, which leads to **Advanced Concepts** in Session 12.
