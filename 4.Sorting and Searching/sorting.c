#include <stdio.h>

// Helper to print array values
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 1. Bubble Sort Implementation
void bubbleSort(int arr[], int size) {
    printf("\n--- Running Bubble Sort ---\n");
    for (int i = 0; i < size - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        printf("Iteration %d: ", i + 1);
        printArray(arr, size);
        
        // Optimization: If no elements were swapped, array is already sorted
        if (swapped == 0) {
            printf("Optimized early exit triggered (already sorted).\n");
            break;
        }
    }
}

// 2. Selection Sort Implementation
void selectionSort(int arr[], int size) {
    printf("\n--- Running Selection Sort ---\n");
    for (int i = 0; i < size - 1; i++) {
        int min_idx = i;
        // Find the index of the minimum element in unsorted subarray
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap min_idx element with first element of unsorted subarray
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;

        printf("Iteration %d: ", i + 1);
        printArray(arr, size);
    }
}

// 3. Insertion Sort Implementation
void insertionSort(int arr[], int size) {
    printf("\n--- Running Insertion Sort ---\n");
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        // Shift elements of arr[0..i-1] that are greater than key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key; // Place key in its correct sorted position

        printf("Iteration %d: ", i);
        printArray(arr, size);
    }
}

int main() {
    int size = 5;

    // Test Bubble Sort
    int arr1[] = {64, 34, 25, 12, 22};
    printf("Original Array: ");
    printArray(arr1, size);
    bubbleSort(arr1, size);

    // Test Selection Sort
    int arr2[] = {64, 34, 25, 12, 22};
    printf("\nOriginal Array: ");
    printArray(arr2, size);
    selectionSort(arr2, size);

    // Test Insertion Sort
    int arr3[] = {64, 34, 25, 12, 22};
    printf("\nOriginal Array: ");
    printArray(arr3, size);
    insertionSort(arr3, size);

    return 0;
}
