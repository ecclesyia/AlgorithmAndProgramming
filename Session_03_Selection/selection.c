#include <stdio.h>

int main() {
    // 1. If-Else structure
    int score = 78;
    printf("--- Grade check (if-else) ---\n");
    printf("Score: %d\n", score);

    if (score >= 85) {
        printf("Grade: A\n");
    } else if (score >= 75) {
        printf("Grade: B\n");
    } else if (score >= 65) {
        printf("Grade: C\n");
    } else {
        printf("Grade: F (Fail)\n");
    }

    // 2. Switch-Case structure (Perfect for menus!)
    int menu_choice = 2;
    printf("\n--- System Menu (switch-case) ---\n");
    printf("Choice: %d\n", menu_choice);

    switch (menu_choice) {
        case 1:
            printf("Running program: Add Student Records\n");
            break;
        case 2:
            printf("Running program: View Student Grades\n");
            break; // Exits switch block safely
        case 3:
            printf("Running program: Exit System\n");
            break;
        default:
            printf("Error: Invalid choice!\n");
            break;
    }

    return 0;
}
