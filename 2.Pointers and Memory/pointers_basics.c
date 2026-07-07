#include <stdio.h>

// Function declaration using pointer parameters (pass-by-reference)
void swap(int *x, int *y) {
    int temp = *x; // temp gets the value stored at address x
    *x = *y;       // value at address x gets value at address y
    *y = temp;     // value at address y gets temp
}

int main() {
    // 1. Pointers definition
    int val = 200;
    int *ptr = &val; // Pointer ptr holds the address of val

    printf("--- Pointers Exploration ---\n");
    printf("Value of val: %d\n", val);
    printf("Memory address of val (&val): %p\n", (void *)&val);
    printf("Value stored in ptr (address): %p\n", (void *)ptr);
    printf("Value pointer points to (*ptr): %d\n", *ptr);

    // Modify val using its pointer (dereferencing)
    *ptr = 500;
    printf("\nAfter modifying *ptr to 500:\n");
    printf("Value of val: %d\n", val); // Value changes because we wrote directly to its address!

    // 2. Swapping using Pointers (Pass-by-Reference)
    int num1 = 10, num2 = 99;
    printf("\n--- Pass-by-Reference Swapping ---\n");
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    
    // We pass the memory addresses of num1 and num2 using & operator
    swap(&num1, &num2);
    
    printf("After swap : num1 = %d, num2 = %d\n", num1, num2);

    // 3. Pointers & Array navigation
    printf("\n--- Pointer Arithmetic with Arrays ---\n");
    int numbers[] = {100, 200, 300};
    int *array_ptr = numbers; // Array name decays to the address of its first element

    for (int i = 0; i < 3; i++) {
        // array_ptr + i offsets the pointer by (i * sizeof(int)) bytes
        // *(array_ptr + i) dereferences that address
        printf("Element %d: Address = %p, Value = %d\n", i, (void *)(array_ptr + i), *(array_ptr + i));
    }

    return 0;
}
