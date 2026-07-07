# 📂 Session 07: Functions and Recursion

This session covers how algorithms are split into modular functions and how functions can call themselves (Recursion) to solve complex nested problems.

---

## 💡 Concepts Explained

### 1. Swapping & Variable Scope
In C, local variables are bound to their function scope. If you pass a variable to a function, it passes a **copy** of the value (Call-by-Value). Modifying it inside the function does not change the original variable. To modify the caller's variable, you must pass its address using pointers (Call-by-Reference).

---

### 2. Recursion
Recursion occurs when a function calls itself.
Every recursive function must contain two key parts:
1.  **Base Case**: The stopping condition that prevents the function from calling itself infinitely.
2.  **Recursive Case**: The logic where the function calls itself with a smaller input, moving closer to the base case.

---

### 3. The Call Stack & Stack Overflow
Each function call pushes a **Stack Frame** onto the CPU stack. This frame stores local variables and return addresses.
*   **CS50/MIT Insight**: If recursion goes too deep without reaching a base case, it consumes all stack memory, causing a **Stack Overflow** crash.

---

## 🏃 Code Examples
Check these files in this directory:
*   [**`recursion.c`**](recursion.c) — Recursive Factorial (with Call Stack traces) and Fibonacci sequence in C.
*   [**`recursion.cpp`**](recursion.cpp) — Dynamic scoping and recursive logic in C++.
*   [**`recursion.py`**](recursion.py) — Recursive Factorial and Fibonacci in Python.

---

## 🚀 Preparing for What's Next: CS50 / MIT Context
*   **Why we learn this**: To divide complex datasets. Divide-and-conquer sorting algorithms (like Merge Sort) use recursion to break datasets down into small chunks.
*   **What we use this for**: Directory path processing, math formulations, and tree/graph operations.
*   **Where to start next**: Learn how to sort datasets sequentially or recursively, which leads to **Sorting** in Session 08.
