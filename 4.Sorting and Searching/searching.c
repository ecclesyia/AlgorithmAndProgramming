#include <stdio.h>

// 1. Linear Search
// Looks through the array element by element.
// Returns the index if found, -1 otherwise.
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Target found, return index
        }
    }
    return -1; // Not found
}

// 2. Iterative Binary Search
// The array MUST be sorted.
int binarySearchIterative(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Prevents overflow compared to (low + high) / 2

        if (arr[mid] == target) {
            return mid; // Target found
        }
        
        if (arr[mid] < target) {
            low = mid + 1;  // Search in right half
        } else {
            high = mid - 1; // Search in left half
        }
    }
    return -1; // Not found
}

// 3. Recursive Binary Search
int binarySearchRecursive(int arr[], int low, int high, int target) {
    if (low > high) {
        return -1; // Base case: Target not found
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == target) {
        return mid; // Target found
    }

    if (arr[mid] < target) {
        return binarySearchRecursive(arr, mid + 1, high, target); // Right half recursion
    } else {
        return binarySearchRecursive(arr, low, mid - 1, target);  // Left half recursion
    }
}

int main() {
    int unsorted[] = {45, 12, 85, 32, 77};
    int sorted[] = {12, 32, 45, 77, 85}; // Sorted version of the same array
    int size = 5;
    int target = 77;
    int index;

    printf("--- Searching Algorithms Demo ---\n");

    // 1. Test Linear Search
    printf("\nLinear Search for target %d in unsorted array:\n", target);
    index = linearSearch(unsorted, size, target);
    if (index != -1) {
        printf("Target %d found at index: %d\n", target, index);
    } else {
        printf("Target %d not found.\n", target);
    }

    // 2. Test Iterative Binary Search (Requires sorted array!)
    printf("\nIterative Binary Search for target %d in sorted array:\n", target);
    index = binarySearchIterative(sorted, size, target);
    if (index != -1) {
        printf("Target %d found at index: %d\n", target, index);
    } else {
        printf("Target %d not found.\n", target);
    }

    // 3. Test Recursive Binary Search
    printf("\nRecursive Binary Search for target %d in sorted array:\n", target);
    index = binarySearchRecursive(sorted, 0, size - 1, target);
    if (index != -1) {
        printf("Target %d found at index: %d\n", target, index);
    } else {
        printf("Target %d not found.\n", target);
    }

    return 0;
}
