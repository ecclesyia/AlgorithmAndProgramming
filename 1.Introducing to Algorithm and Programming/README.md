# 📚 Module 1: C Basics & Syntax (COMP6047 / COMP6048)

This module covers the core fundamentals of C programming. Understanding these basics is critical before moving to pointer manipulation and dynamic memory allocation.

---

## 💡 Key Concepts Explained

### 1. Variables and Data Types
In C, you must declare the type of a variable before using it. This is because C is a statically typed language and needs to reserve specific memory space for each type.

| Data Type | Keyword | Size (bytes) | Format Specifier | Example | Description |
| :--- | :--- | :--- | :--- | :--- | :--- |
| Integer | `int` | 4 bytes | `%d` or `%i` | `int score = 95;` | Whole numbers |
| Float | `float` | 4 bytes | `%f` | `float gpa = 3.82;` | Single-precision decimal numbers |
| Double | `double` | 8 bytes | `%lf` | `double pi = 3.14159;` | Double-precision decimal numbers |
| Character | `char` | 1 byte | `%c` | `char grade = 'A';` | Single characters (in single quotes) |
| String (Char Array) | `char[]` | N bytes | `%s` | `char name[] = "Budi";` | Text (array of characters, double quotes) |

---

### 2. Format Specifiers & Input/Output
We use standard I/O functions from `<stdio.h>`:
*   `printf()`: Outputs text and variables to the screen.
*   `scanf()`: Takes keyboard input from the user. **Important**: Always pass the memory address of the variable (using `&`) to `scanf()`, except when reading strings (`char[]`).

```c
int age;
char name[50];

// Output
printf("Enter your name and age: ");

// Input
scanf("%s %d", name, &age); // Notice &age is used, but name does not need & because arrays decay to pointers.

// Output formatted
printf("Hello %s, you are %d years old.\n", name, age);
```

---

### 3. Control Flow (Conditionals & Loops)

#### Conditional Statements
*   `if-else`: Executes blocks of code depending on boolean expressions.
*   `switch-case`: Matches a single variable against multiple constant values. Useful for building command-line menus (often asked in Binus labs!).

#### Loops
*   `for` loop: Used when the number of iterations is known beforehand.
*   `while` loop: Used when looping until a condition becomes false.
*   `do-while` loop: Similar to `while`, but guarantees the code block runs **at least once** before checking the condition (perfect for menu-driven input validation).

---

## 🏃 Runnable Code Examples
Check out these files in this directory to see the code in action:
1.  [**`HelloWorld!.c`**](HelloWorld%21.c) — The simplest possible C program.
2.  [**`Variables.c`**](Variables.c) — Declaring variables and formatting console outputs.
3.  [**`control_flow.c`**](control_flow.c) — Conditionals, loops, and nested loop pattern exercises.

---

## 🚀 Preparing for What's Next: CS50 / MIT Context
*   **Why we learn this**: To write instructions that the CPU can execute sequentially. Understanding basic variables and control flow forms the logic baseline for any software program.
*   **What we use this for**: Everything! From simple calculations to running menu operations in commercial software.
*   **Where to start next**: Learn how computers represent these variables in memory, which leads directly to **Pointers** and **Arrays** in Module 2.