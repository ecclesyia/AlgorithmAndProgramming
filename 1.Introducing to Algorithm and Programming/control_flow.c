#include <stdio.h>

int main() {
    // ----------------------------------------------------
    // 1. Conditionals: if-else and switch-case
    // ----------------------------------------------------
    int score = 85;
    printf("Score: %d\n", score);

    if (score >= 85) {
        printf("Grade: A (Excellent)\n");
    } else if (score >= 75) {
        printf("Grade: B (Good)\n");
    } else if (score >= 65) {
        printf("Grade: C (Satisfactory)\n");
    } else {
        printf("Grade: F (Fail)\n");
    }

    // ----------------------------------------------------
    // Switch-Case: Perfect for console menus
    // ----------------------------------------------------
    int choice = 2;
    printf("\nMenu Choice Selected: %d\n", choice);

    switch(choice) {
        case 1:
            printf("Action: Add new record.\n");
            break;
        case 2:
            printf("Action: View all records.\n");
            break; // Crucial to prevent falling through to default!
        case 3:
            printf("Action: Exit program.\n");
            break;
        default:
            printf("Action: Invalid option.\n");
            break;
    }

    // ----------------------------------------------------
    // 2. Loops: for, while, do-while
    // ----------------------------------------------------
    printf("\n--- For Loop (1 to 5) ---\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("\n--- While Loop (Countdown) ---\n");
    int count = 3;
    while (count > 0) {
        printf("%d... ", count);
        count--;
    }
    printf("Go!\n");

    printf("\n--- Do-While Loop (Runs at least once) ---\n");
    int validation_value = 100;
    do {
        printf("This print runs even though the condition is false! Value: %d\n", validation_value);
        validation_value++;
    } while (validation_value < 10); // Condition is false from the start

    // ----------------------------------------------------
    // 3. Nested Loops: Drawing grid/patterns
    // Note: Binus exams often test nested loops for drawing shape patterns!
    // ----------------------------------------------------
    printf("\n--- Nested Loop: Draw Right Triangle of Stars ---\n");
    int size = 5;
    for (int row = 1; row <= size; row++) {
        for (int col = 1; col <= row; col++) {
            printf("*");
        }
        printf("\n"); // Move to next line after completing the columns of current row
    }

    return 0;
}
