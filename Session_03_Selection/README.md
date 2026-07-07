# 📂 Session 03: Selection

This session covers logical routing: directing code execution down different paths using conditional statements.

---

## 💡 Concepts Explained

### 1. `if`, `else if`, and `else`
Executes code blocks depending on whether statements evaluate to true or false.

### 2. Nested Conditions
Placing conditional blocks inside other conditional blocks. Useful for granular checks, but keep nesting to a minimum to prevent code complexity ("spaghetti code").

### 3. `switch-case`
Compares a single expression against constant values (cases). 
*   **Syntax**:
    ```c
    switch(choice) {
        case 1:
            // do something
            break; // Exits switch block
        default:
            // fallback if no case matches
    }
    ```
*   **The break keyword**: If you omit `break`, the program will fall through and execute the next cases' code sequentially, which is a common exam trap!
*   **Usage**: Ideal for writing CLI command menus.

---

## 🏃 Code Examples
Check these files in this directory:
*   [**`selection.c`**](selection.c) — `if-else` and `switch-case` menu blocks in C.
*   [**`selection.py`**](selection.py) — `if-elif-else` conditional checking in Python.

---

## 🚀 Preparing for What's Next: CS50 / MIT Context
*   **Why we learn this**: To build dynamic software. Without selection, programs would execute the exact same instructions every time they run.
*   **What we use this for**: Login authorization checks, validation logic, menu systems, and setting state parameters.
*   **Where to start next**: Learn how to repeat code blocks multiple times without copying and pasting, which leads to **Repetition** in Session 04.
