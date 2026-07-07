#include <stdio.h>
#include <stdlib.h> // Required for malloc, realloc, and free

int main() {
    int size = 3;
    int expanded_size = 5;

    printf("--- Heap Memory Allocation ---\n");

    // 1. Allocate initial memory
    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    arr[0] = 10; arr[1] = 20; arr[2] = 30;
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d (address: %p)\n", i, arr[i], (void *)&arr[i]);
    }

    // 2. Resize memory using realloc
    printf("\n--- Resizing Heap Memory ---\n");
    int *temp = (int *)realloc(arr, expanded_size * sizeof(int));
    if (temp == NULL) {
        printf("Reallocation failed!\n");
        free(arr);
        return 1;
    }
    arr = temp;

    arr[3] = 40; arr[4] = 50;
    for (int i = 0; i < expanded_size; i++) {
        printf("arr[%d] = %d (address: %p)\n", i, arr[i], (void *)&arr[i]);
    }

    // 3. Free memory
    printf("\n--- Cleaning up heap ---\n");
    free(arr);
    arr = NULL;
    printf("Memory freed.\n");

    return 0;
}
