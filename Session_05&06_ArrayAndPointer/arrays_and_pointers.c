#include <stdio.h>

// Pass-by-Reference using pointer parameters
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    // 1. Pointer Basics
    int val = 100;
    int *ptr = &val;

    printf("--- Pointers Exploration ---\n");
    printf("Value of val: %d\n", val);
    printf("Address of val (&val): %p\n", (void *)&val);
    printf("Pointer stored address (ptr): %p\n", (void *)ptr);
    printf("Value pointer points to (*ptr): %d\n", *ptr);

    // Modify value dereferencing
    *ptr = 250;
    printf("Updated value of val: %d\n", val);

    // 2. Swapping via reference
    int num1 = 15, num2 = 88;
    printf("\n--- Swapping via Pass-by-Reference ---\n");
    printf("Before: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("After : num1 = %d, num2 = %d\n", num1, num2);

    // 3. Pointer Arithmetic with Arrays
    printf("\n--- Pointer Arithmetic with Arrays ---\n");
    int arr[] = {10, 20, 30};
    int *arr_ptr = arr; // Array name points to first element index

    for (int i = 0; i < 3; i++) {
        printf("Index %d: Address = %p, Value = %d\n", i, (void *)(arr_ptr + i), *(arr_ptr + i));
    }

    return 0;
}
