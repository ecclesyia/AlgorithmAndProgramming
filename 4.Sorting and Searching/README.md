# 🔍 Module 4: Sorting & Searching Algorithms

This module covers the core methods of organizing data (sorting) and locating elements within data sets (searching). These operations are the structural pillars of efficient software applications.

---

## 💡 Key Concepts Explained

### 1. Sorting Algorithms
Sorting arranges elements in a specific order (ascending or descending). We focus on three fundamental $O(n^2)$ sorting algorithms:

#### Bubble Sort
Compares adjacent elements and swaps them if they are in the wrong order. This process repeats until the list is sorted.
*   **Time Complexity**: $O(n^2)$ average and worst case.
*   **Pros**: Simple to write.
*   **Cons**: Highly inefficient for large datasets.

#### Selection Sort
Divides the array into sorted and unsorted parts. Repeatedly finds the minimum element from the unsorted part and swaps it to the front.
*   **Time Complexity**: $O(n^2)$ in all cases (always performs comparisons).
*   **Pros**: Minimizes the number of actual swaps ($O(n)$ swaps).
*   **Cons**: Inefficient.

#### Insertion Sort
Builds the final sorted array one element at a time by consuming one input element per repetition and placing it in its correct position relative to the already sorted portion.
*   **Time Complexity**: $O(n^2)$ average/worst, but $O(n)$ in the best case (when the array is already sorted!).
*   **Pros**: Highly efficient for small or partially sorted arrays.

---

### 2. Searching Algorithms
Searching finds the index of a specific element within a dataset.

#### Linear Search
Checks every element of the array sequentially from start to end until the target is found.
*   **Requirement**: None. Works on sorted or unsorted arrays.
*   **Time Complexity**: $O(n)$ worst-case.

#### Binary Search
Works by repeatedly dividing the search interval in half. If the target value is less than the middle element, search the lower half; otherwise, search the upper half.
*   **Requirement**: **The array MUST be sorted first!**
*   **Time Complexity**: $O(\log n)$ logarithmic time. Extremely fast. Searching an element among 1,000,000 items takes at most 20 comparisons!

---

## 📊 Summary Table of Algorithm Complexity

| Algorithm | Best Time | Average Time | Worst Time | Space Complexity | Stable? |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **Bubble Sort** | $O(n)$ (Optimized) | $O(n^2)$ | $O(n^2)$ | $O(1)$ | Yes |
| **Selection Sort**| $O(n^2)$ | $O(n^2)$ | $O(n^2)$ | $O(1)$ | No |
| **Insertion Sort**| $O(n)$ | $O(n^2)$ | $O(n^2)$ | $O(1)$ | Yes |
| **Linear Search** | $O(1)$ | $O(n)$ | $O(n)$ | $O(1)$ | N/A |
| **Binary Search** | $O(1)$ | $O(\log n)$ | $O(\log n)$ | $O(1)$ | N/A |

---

## 🏃 Runnable Code Examples
Check out these files in this directory:
1.  [**`sorting.c`**](sorting.c) — Implementation of Bubble Sort, Selection Sort, and Insertion Sort with print traces showing array changes at each step.
2.  [**`searching.c`**](searching.c) — Implementation of Linear Search and Binary Search (recursive & iterative versions).

---

## 🚀 Preparing for What's Next: CS50 / MIT Context
*   **Why we learn this**: Computers process huge datasets. If a database searched accounts using linear search, loading your account would take seconds. Sorting enables binary search, which makes software feel instantaneous.
*   **What we use this for**: E-commerce catalog sorting, search engines indexing, file systems search indices, and competitive programming.
*   **Where to start next**: Learn how programs store records permanently so we can load, sort, and search them even after the computer restarts. This leads to **File Processing** in Module 5.
