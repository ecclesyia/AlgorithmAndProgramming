# 🚀 Binus Algorithms & Programming (COMP6047 / COMP6048) Course Companion

Welcome to the ultimate **Algorithms & Programming** course summary repository! This repository is designed specifically for **Binusian students** taking COMP6047 or COMP6048, as well as anyone looking to master the fundamentals of programming, C, data structures, and algorithms.

This guide provides structured notes, troubleshooting advice, compilable C code examples, and comparisons with 10+ other programming languages. It is designed to be easily read, cloned, and shared with your juniors.

---

## 🛠️ Getting Started & IDE Setup Guides
Before writing C code, make sure you configure your development environment. We have prepared step-by-step guides for the two most popular tools:
*   [**Dev-C++ Setup Guide (Recommended for Binus Exams)**](dev_c_setup.md) — Learn how to set up the default compiler, enable modern C standards (`-std=c11`), and fix the "Source file not compiled" error.
*   [**VS Code C Setup Guide**](vscode_c_setup.md) — Learn how to install MSYS2 GCC, add it to system Environment Variables, and configure tasks for compilation.

---

## 📚 Course Modules & Syllabus

### [Module 1: C Basics & Syntax](1.Introducing%20to%20Algorithm%20and%20Programming/README.md)
*   **Concepts**: Variables, Data types, standard input/output (`printf`, `scanf`), Arithmetic & Logical operators, Conditional Statements (`if-else`, `switch-case`), and Loop Structures (`for`, `while`, `do-while`).
*   **C Code Examples**:
    *   [Hello World!](1.Introducing%20to%20Algorithm%20and%20Programming/HelloWorld%21.c) — Simple console printing.
    *   [Variables Demo](1.Introducing%20to%20Algorithm%20and%20Programming/Variables.c) — Using correct formatting specifiers (`%d`, `%c`, `%f`, `%s`).
    *   [Control Flow Demo](1.Introducing%20to%20Algorithm%20and%20Programming/control_flow.c) — Conditionals, loops, and nested loop patterns.

### [Module 2: Pointers, Arrays, and Memory](2.Pointers%20and%20Memory/README.md)
*   **Concepts**: Pointers, Address-of operator (`&`), Dereference operator (`*`), 1D and 2D arrays, Pointer arithmetic, Stack vs. Heap memory, and Dynamic Memory Allocation (`malloc`, `calloc`, `realloc`, `free`).
*   **C Code Examples**:
    *   [Pointers Basics](2.Pointers%20and%20Memory/pointers_basics.c) — Swapping numbers and printing addresses.
    *   [Memory Allocation](2.Pointers%20and%20Memory/memory_allocation.c) — Creating dynamic arrays and preventing memory leaks.

### [Module 3: Structures & Data Structures](3.Data%20Structures/README.md)
*   **Concepts**: Defining `struct`, `typedef`, Pointer to structures (`ptr->member`), Struct arrays, and Single Linked List nodes.
*   **C Code Examples**:
    *   [Structs Demo](3.Data%20Structures/structs.c) — Struct records and calculations.
    *   [Linked List Implementation](3.Data%20Structures/linked_list.c) — Insert (Head, Tail, Mid) and Delete (Head, Tail, Mid) operations.

### [Module 4: Sorting & Searching](4.Sorting%20and%20Searching/README.md)
*   **Concepts**: Bubble Sort, Selection Sort, Insertion Sort, Linear Search, and Binary Search (recursive and iterative).
*   **C Code Examples**:
    *   [Sorting Algorithms](4.Sorting%20and%20Searching/sorting.c) — Visual traces of sort operations.
    *   [Searching Algorithms](4.Sorting%20and%20Searching/searching.c) — Fast index searching.

### [Module 5: File Processing & File System](5.File%20Processing/README.md)
*   **Concepts**: Read/write operations, Text files vs. Binary files, file pointers (`FILE *`), functions like `fopen`, `fclose`, `fprintf`, `fscanf`, `fread`, `fwrite`, and stream navigation (`fseek`, `ftell`, `rewind`).
*   **C Code Examples**:
    *   [Text File Handling](5.File%20Processing/text_files.c) — Managing user log logs in txt format.
    *   [Binary File Database](5.File%20Processing/binary_files.c) — Struct serialization for CRUD mock databases.

### [Module 6: Advanced Concepts & "What's Next?"](6.Advanced%20Concepts/README.md)
*   **Concepts**: Recursion vs Iteration, Call Stacks, Tree introductions, Time and Space Complexity (Big O), and how to transition from the basics to Harvard CS50/MIT style programming.
*   **C Code Examples**:
    *   [Recursion & Complexity](6.Advanced%20Concepts/recursion_and_complexity.c) — Factorials, Fibonacci, and trace logs.

### [Module 7: Multi-Language Basics (11 Languages)](7.Multi%20Language%20Basics/README.md)
*   **Concepts**: Learn how variables, input/output, and control loops are written in other programming languages! Great for widening your perspective.
*   **Languages Included**: C, C++, Python, Java, Kotlin, Go, JavaScript, C#, Swift, Rust, PHP.

---

## 🎯 Why we learn this & How to help juniors
Algorithms and programming teach you computational thinking. Binus University's COMP6047/6048 focus on C forces you to manage memory directly, which builds a strong mental model of how computers work underneath the hood. 

Encourage juniors to:
1.  **Clone this repo**: `git clone https://github.com/YOUR_USERNAME/AlgorithmAndProgramming.git`
2.  **Follow the IDE guide** first so they do not get stuck trying to compile C code.
3.  **Read the comments**: The C source files in this repository are written with detailed explanations of how memory shifts and variables change.
