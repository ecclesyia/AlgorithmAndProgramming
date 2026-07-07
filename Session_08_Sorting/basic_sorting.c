#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) break; // Already sorted
    }
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("--- Original Array ---\n");
    printArray(arr, size);

    printf("\n--- Bubble Sorted Array ---\n");
    int arr1[] = {64, 34, 25, 12, 22};
    bubbleSort(arr1, size);
    printArray(arr1, size);

    printf("\n--- Selection Sorted Array ---\n");
    int arr2[] = {64, 34, 25, 12, 22};
    selectionSort(arr2, size);
    printArray(arr2, size);

    printf("\n--- Insertion Sorted Array ---\n");
    int arr3[] = {64, 34, 25, 12, 22};
    insertionSort(arr3, size);
    printArray(arr3, size);

    return 0;
}
