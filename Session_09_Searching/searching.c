#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}

int binarySearchIterative(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Prevents overflow
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int binarySearchRecursive(int arr[], int low, int high, int target) {
    if (low > high) return -1;

    int mid = low + (high - low) / 2;
    if (arr[mid] == target) return mid;
    if (arr[mid] < target) return binarySearchRecursive(arr, mid + 1, high, target);
    return binarySearchRecursive(arr, low, mid - 1, target);
}

int main() {
    int unsorted[] = {88, 12, 45, 99, 23};
    int sorted[] = {12, 23, 45, 88, 99};
    int size = 5;
    int target = 88;

    printf("--- Linear Search (Unsorted) ---\n");
    int index = linearSearch(unsorted, size, target);
    printf("Target %d found at index: %d\n", target, index);

    printf("\n--- Binary Search Iterative (Sorted) ---\n");
    index = binarySearchIterative(sorted, size, target);
    printf("Target %d found at index: %d\n", target, index);

    printf("\n--- Binary Search Recursive (Sorted) ---\n");
    index = binarySearchRecursive(sorted, 0, size - 1, target);
    printf("Target %d found at index: %d\n", target, index);

    return 0;
}
