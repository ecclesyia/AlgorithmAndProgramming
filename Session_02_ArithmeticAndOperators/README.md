# 📂 Session 02: Arithmetic and Operators

This session details computational operations: performing math, comparing values, and building boolean logic.

---

## 💡 Concepts Explained

### 1. Arithmetic Operators
Math calculations:
*   `+` (Addition), `-` (Subtraction), `*` (Multiplication), `/` (Division).
*   `%` (Modulo): Returns the remainder of division (e.g. `5 % 2 = 1`). Very useful for checking even/odd numbers!

### 2. Relational Operators
Compare two values and return a boolean (`true`/`1` or `false`/`0`):
*   `<` (Less than), `>` (Greater than), `<=` (Less than or equal), `>=` (Greater than or equal).
*   `==` (Equal to), `!=` (Not equal to). **Warning**: Do not confuse `==` (comparison) with `=` (variable assignment!).

### 3. Logical Operators
Combine multiple boolean expressions:
*   `&&` (AND) in C / `and` in Python: Returns true only if both expressions are true.
*   `||` (OR) in C / `or` in Python: Returns true if at least one expression is true.
*   `!` (NOT) in C / `not` in Python: Inverts a boolean value.

---

## 🏃 Code Examples
Check these files in this directory:
*   [**`operators.c`**](operators.c) — Operators implementation in C.
*   [**`operators.py`**](operators.py) — Operators implementation in Python.

---

## 🚀 Preparing for What's Next: CS50 / MIT Context
*   **Why we learn this**: To build decision-making rules. We cannot write logical branching without relational and logical operations.
*   **What we use this for**: Range checks (e.g. `score >= 0 && score <= 100`), cycle timing, and flag adjustments.
*   **Where to start next**: Learn how to use these boolean comparisons to execute different parts of code, which leads to **Selection** in Session 03.
