#include <stdio.h>

int main() {
    // 1. Output
    printf("Hello from C!\n");

    // 2. Variables
    int score = 85;
    double average = 78.5;

    // 3. Conditionals
    if (score >= 80) {
        printf("Result: Excellent!\n");
    } else {
        printf("Result: Try harder!\n");
    }

    // 4. Loops
    printf("For Loop output: ");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
