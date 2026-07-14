# Binus Algorithms & Programming Course Companion (Session-Based)

Welcome to the ultimate **Algorithms & Programming** course summary repository! This repository follows the session-based structure of the curriculum (inspired by your senior's format) and is designed specifically for **Binusian students** and anyone looking to master programming fundamentals.

This guide provides structured notes, setup tips, compilable C code examples (the core language of the course), and comparisons with other programming languages alongside advanced topics from **Harvard CS50** and **MIT 6.006**.

Credit Ecclesy & Himti Responsi

---

## Getting Started & IDE Setup Guides
Before writing C code, configure your development environment:
*   [**Dev-C++ Setup Guide (Recommended for Binus Exams)**](dev_c_setup.md) — Learn how to set up the default compiler, enable modern C standards (`-std=c11`), and fix common compilation hangs.
*   [**VS Code C Setup Guide**](vscode_c_setup.md) — Learn how to install MSYS2 GCC, add it to system Environment Variables, and configure tasks for compilation.

---

## Session-Based Course Modules

### [Session 01: Input and Output](Session_01_InputAndOutput/README.md)
*   **Concepts**: Variables, data types, console printing (`printf`), and user input (`scanf`).
*   **Multi-Language Syntax Basics**: Compare this basic setup across 11 languages (C, C++, Python, Java, Kotlin, Go, JavaScript, C#, Swift, Rust, PHP).

### [Session 02: Arithmetic and Operators](Session_02_ArithmeticAndOperators/README.md)
*   **Concepts**: Operators (arithmetic, relational, logical), assignment shorthand, and order of operations (precedence).
*   **Languages**: C and Python.

### [Session 03: Selection](Session_03_Selection/README.md)
*   **Concepts**: Branching structures, standard `if-else`, nested checks, and menu-driven `switch-case` blocks.
*   **Languages**: C and Python.

### [Session 04: Repetition](Session_04_Repetition/README.md)
*   **Concepts**: Iterations, `for`, `while`, `do-while` loops, infinite loops, and nested loop patterns (drawing shapes).
*   **Languages**: C and Python.

### [Session 05&06: Array and Pointer](Session_05%2606_ArrayAndPointer/README.md)
*   **Concepts**: Contiguous blocks (1D/2D arrays), pointer syntax (`&`, `*`), pointer arithmetic, stack vs heap, and dynamic memory allocation (`malloc`, `realloc`, `free`).
*   **Languages**: C and C++.

### [Session 07: Functions and Recursion](Session_07_FunctionsAndRecursion/README.md)
*   **Concepts**: Variable scopes, call-by-value vs. call-by-reference (using pointers), recursive call stacks, base cases, and stack overflows.
*   **Languages**: C, C++, and Python.

### [Session 08: Sorting](Session_08_Sorting/README.md)
*   **Concepts**: Simple sorts: Bubble Sort, Selection Sort, and Insertion Sort.
*   **CS50/MIT Bonus**: Advanced divide-and-conquer sorting (Merge Sort and Quick Sort).
*   **Languages**: C and C++.

### [Session 09: Searching](Session_09_Searching/README.md)
*   **Concepts**: Sequential Linear Search vs. split-based Binary Search (iterative and recursive).
*   **Languages**: C and C++.

### [Session 10: File](Session_10_File/README.md)
*   **Concepts**: File pointer streams (`FILE *`), file opening modes (`r`, `w`, `a`), text line parsing, and binary struct serialization database (`fwrite`, `fread`, `fseek`).
*   **Languages**: C and C++.

### [Session 11: Data Structures](Session_11_DataStructures/README.md)
*   **Concepts**: Custom data records (`struct`, `typedef`, pointer arrow operator `->`) and building dynamic Singly Linked Lists (inserting/deleting/freeing nodes).
*   **Languages**: C and C++.

### [Session 12: Advanced Concepts (CS50 / MIT)](Session_12_AdvancedConcepts/README.md)
*   **Concepts**: Introduction to Trees (Binary Search Trees, AVL Trees), Graphs, time complexity analysis (Big O notation), real-world uses, and your roadmap for after this course.
*   **Languages**: C, C++, and Python.

---

## How to Help Your Juniors
Encourage them to:
1.  **Clone this repo**: `git clone https://github.com/YOUR_USERNAME/AlgorithmAndProgramming.git`
2.  **Follow the IDE guide** first so they do not get stuck trying to compile C code.
3.  **Read the comments**: All source files are heavily annotated to explain logic, memory addresses, and variable modifications.
