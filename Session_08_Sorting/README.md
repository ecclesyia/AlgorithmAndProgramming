# 📂 Session 08: Sorting

This session covers how datasets are organized. We will explore three simple $O(n^2)$ sorting methods, followed by two advanced, recursive $O(n \log n)$ algorithms featured in **Harvard CS50** and **MIT 6.006**.

---

## 💡 Concepts Explained

### 1. Basic Sorts ($O(n^2)$ Complexity)
*   **Bubble Sort**: Compares adjacent elements and swaps them if they are in the wrong order. Repeats until sorted.
*   **Selection Sort**: Finds the smallest element in the unsorted subarray and swaps it to the front. Minimizes swaps.
*   **Insertion Sort**: Inserts elements one-by-one into their correct relative positions in a growing sorted sub-list. Efficient for nearly sorted arrays.

---

### 2. Advanced Sorts ($O(n \log n)$ Complexity) - CS50/MIT Bonus
*   **Merge Sort**: A **divide-and-conquer** algorithm. Recursively splits the array in half, sorts each half, and merges them back together.
    *   **Complexity**: $O(n \log n)$ in all cases (best, average, worst).
    *   **Space**: $O(n)$ temporary memory.
*   **Quick Sort**: Chooses a "pivot" element, partitions the array so smaller elements go left and larger ones go right, and recursively sorts the partitions.
    *   **Complexity**: $O(n \log n)$ average, but can degrade to $O(n^2)$ if the pivot is chosen poorly (e.g. always choosing the first element of an already sorted array).
    *   **Space**: $O(\log n)$ call stack space.

---

## 🏃 Code Examples
Check these files in this directory:
*   [**`basic_sorting.c`**](basic_sorting.c) — Bubble Sort, Selection Sort, and Insertion Sort in C.
*   [**`advanced_sorting.cpp`**](advanced_sorting.cpp) — Merge Sort and Quick Sort implementations in C++.

---

## 🚀 Preparing for What's Next: CS50 / MIT Context
*   **Why we learn this**: Sorting structures data. Searching an unsorted list of 1 billion records takes 1 billion operations. Sorting it allows us to search it in just 30 operations!
*   **What we use this for**: Database indexing, priority queues, and sorting e-commerce search results.
*   **Where to start next**: Learn how to search through sorted arrays, which leads to **Searching** in Session 09.
