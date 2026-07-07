# 📂 Session 04: Repetition

This session covers iterative loops: executing a block of instructions multiple times without duplicating code.

---

## 💡 Concepts Explained

### 1. `for` loops
Best used when you know exactly how many times the loop should run beforehand (e.g. iterating through indices `1` to `10`).

### 2. `while` loops
Used when repeating code until a condition evaluates to false. Perfect when you don't know the exact count in advance (e.g. checking if a user has entered the correct password).

### 3. `do-while` loops (C/C++ only)
Similar to `while` loops, but guarantees the block executes **at least once** because the condition is checked at the end. Ideal for menu interfaces and input validation.

### 4. Loop Control Keywords
*   `break`: Terminates loop immediately.
*   `continue`: Skips the current iteration and jumps directly to the next condition check.

---

## 🏃 Code Examples
Check these files in this directory:
*   [**`repetition.c`**](repetition.c) — `for`, `while`, `do-while`, and nested loop shape patterns in C.
*   [**`repetition.py`**](repetition.py) — Python equivalents for `for` range and `while` loop shapes.

---

## 🚀 Preparing for What's Next: CS50 / MIT Context
*   **Why we learn this**: To process collections of items. Processing large arrays or lists requires looping through them.
*   **What we use this for**: Traversing arrays, repeating menu prompts until the user chooses to exit, and rendering animation frames.
*   **Where to start next**: Learn how to store collections of variables in contiguous blocks, which leads to **Array and Pointer** in Session 05 & 06.
