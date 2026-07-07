#include <stdio.h>
#include <stdlib.h> // Required for malloc, calloc, realloc, and free

int main() {
    int initial_size = 3;
    int expanded_size = 5;

    printf("--- Heap Memory Allocation ---\n");

    // 1. Allocate initial memory using malloc
    // malloc takes size in bytes. We want room for 3 integers.
    int *dynamic_arr = (int *)malloc(initial_size * sizeof(int));

    // ALWAYS check if allocation was successful (malloc returns NULL if heap is full)
    if (dynamic_arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit with error
    }

    printf("Successfully allocated %d integers on the heap.\n", initial_size);

    // Initialize and print array values
    for (int i = 0; i < initial_size; i++) {
        dynamic_arr[i] = (i + 1) * 10;
        printf("dynamic_arr[%d] = %d (address: %p)\n", i, dynamic_arr[i], (void *)&dynamic_arr[i]);
    }

    // 2. Resize memory using realloc
    printf("\n--- Resizing Heap Memory with realloc ---\n");
    // We want to expand the array to hold 5 integers
    int *temp = (int *)realloc(dynamic_arr, expanded_size * sizeof(int));

    if (temp == NULL) {
        printf("Reallocation failed! Original memory is still intact.\n");
        free(dynamic_arr); // Must free original pointer before exiting to avoid leak
        return 1;
    }
    
    // realloc returns a new address (or same address if space permits). Use temp to update.
    dynamic_arr = temp;
    printf("Successfully resized array to %d integers.\n", expanded_size);

    // Initialize the newly added slots (indices 3 and 4)
    dynamic_arr[3] = 40;
    dynamic_arr[4] = 50;

    // Print all elements
    for (int i = 0; i < expanded_size; i++) {
        printf("dynamic_arr[%d] = %d (address: %p)\n", i, dynamic_arr[i], (void *)&dynamic_arr[i]);
    }

    // 3. Deallocate memory using free
    printf("\n--- Cleaning up Heap Memory ---\n");
    free(dynamic_arr);
    
    // Setting pointer to NULL prevents "dangling pointer" bugs (pointers pointing to deleted memory)
    dynamic_arr = NULL; 
    
    printf("Heap memory freed successfully. Program exiting.\n");

    return 0;
}
