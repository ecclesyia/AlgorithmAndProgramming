#include <stdio.h>

int main() {
    // 1. For Loop (Fixed count execution)
    printf("--- For Loop (1 to 5) ---\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // 2. While Loop (Conditional count execution)
    printf("\n--- While Loop (Countdown) ---\n");
    int count = 3;
    while (count > 0) {
        printf("%d... ", count);
        count--;
    }
    printf("Launch!\n");

    // 3. Do-While Loop (Validating user input)
    printf("\n--- Do-While Loop validation input ---\n");
    int user_input;
    do {
        printf("Choose Option (1 or 2): ");
        user_input = 2; // Simulate valid user input
        printf("%d\n", user_input);
    } while (user_input != 1 && user_input != 2);
    
    printf("Valid option selected!\n");

    // 4. Nested Loops: Star shape pattern (Popular Binus exam question!)
    printf("\n--- Nested Loops: Triangle Pattern ---\n");
    int size = 5;
    for (int row = 1; row <= size; row++) {
        for (int col = 1; col <= row; col++) {
            printf("*");
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
