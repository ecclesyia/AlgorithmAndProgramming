# 🏗️ Module 3: Structures & Data Structures (COMP6047 / COMP6048)

In C, primitive types represent simple values (integers, decimals, characters). Real-world applications require composite types. This module introduces **Structures (`struct`)** and shows how to link them together using pointers to build dynamic structures like **Singly Linked Lists**.

---

## 💡 Key Concepts Explained

### 1. Structures (`struct`)
A structure is a user-defined data type that groups related variables of different types.
*   **Definition**:
    ```c
    struct Student {
        char name[50];
        int age;
        float gpa;
    };
    ```
*   **Typedef**: In C, you usually write `struct Student var;` to create a variable. Using `typedef` allows you to create a shortcut name:
    ```c
    typedef struct {
        char name[50];
        int age;
        float gpa;
    } Student;
    
    // Now you can declare variables like this:
    Student student1;
    ```

*   **Arrow Operator (`->`)**: When accessing structure members via a pointer to the structure, use `->` instead of `.` (dot operator).
    ```c
    Student s1 = {"Budi", 20, 3.75};
    Student *ptr = &s1;
    
    printf("GPA: %.2f\n", ptr->gpa); // Same as (*ptr).gpa
    ```

---

### 2. Singly Linked Lists
Unlike arrays, which store elements in a contiguous block of memory with a fixed size, a **Linked List** is a dynamic collection of **Nodes** scattered across different memory locations (the heap).

Each node contains:
1.  **Data**: The actual value being stored.
2.  **Next Pointer**: A pointer to the next node in the list. The last node points to `NULL`.

```text
Node Structure:
[ Data | Next Pointer ] ➡️ [ Data | Next Pointer ] ➡️ [ Data | NULL ]
```

#### Node Structure in C:
```c
typedef struct Node {
    int data;
    struct Node *next; // Points to another struct of the same type
} Node;
```

#### Common Operations & Time Complexity:
-   **Insert at Head**: $O(1)$ — Allocate node, point its `next` to the current head, update head to the new node.
-   **Insert at Tail**: $O(n)$ without a tail pointer, $O(1)$ with a tail pointer.
-   **Traversal (Print/Search)**: $O(n)$ — Loop through each node until `curr != NULL`.
-   **Delete Head**: $O(1)$ — Store head in temp, update head to `head->next`, free temp.

---

## 🏃 Runnable Code Examples
Check out these files in this directory:
1.  [**`structs.c`**](structs.c) — Declaring struct variables, using arrays of structs, and passing structs to functions.
2.  [**`linked_list.c`**](linked_list.c) — A complete Singly Linked List implementation featuring Insert Head, Insert Tail, Traverse (Print), and Delete Node operations with deep code annotations.

---

## 🚀 Preparing for What's Next: CS50 / MIT Context
*   **Why we learn this**: Arrays are rigid. If you allocate an array of size 100, but only use 5 slots, you waste memory. If you need 101 slots, your program crashes. Linked lists solve this by letting the list grow and shrink dynamically.
*   **What we use this for**: Custom data management. Operative registries, memory chains, stack/queue representations, and database indexes are built using custom structures.
*   **Where to start next**: Learn how to sort these structures or search through them efficiently, which leads directly to **Sorting & Searching** in Module 4.
