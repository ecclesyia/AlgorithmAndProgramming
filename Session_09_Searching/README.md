# 📂 Session 09: Searching

This session covers lookup algorithms: locating specific records inside arrays and datasets.

---

## 💡 Concepts Explained

### 1. Linear Search
Checks every element of the array sequentially from index `0` to the end.
*   **Time Complexity**: $O(n)$ worst-case.
*   **Pros**: Works on unsorted arrays.
*   **Cons**: Slow for large datasets.

### 2. Binary Search
An extremely fast search algorithm that operates on a divide-and-conquer strategy.
*   **Crucial Rule**: **The array MUST be sorted first!**
*   **How it works**: Compares the target value to the middle element. If it matches, returns the index. If the target is smaller, searches the left half; if larger, searches the right half. Divides search bounds in half at each step.
*   **Time Complexity**: $O(\log n)$ logarithmic time.

---

## 🏃 Code Examples
Check these files in this directory:
*   [**`searching.c`**](searching.c) — Linear Search and Iterative/Recursive Binary Search in C.
*   [**`searching.cpp`**](searching.cpp) — Binary Search template implementations in C++.

---

## 🚀 Preparing for What's Next: CS50 / MIT Context
*   **Why we learn this**: High performance. Searching indices quickly is vital for database operations.
*   **What we use this for**: Autocomplete suggestions, router lookups, and SQL index searches.
*   **Where to start next**: Learn how to load records from disk files and sort/search them, which leads to **File** in Session 10.
