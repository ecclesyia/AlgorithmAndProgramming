#include <stdio.h>

int main() {
    // 1. Arithmetic Operators
    int a = 15;
    int b = 4;

    printf("--- Arithmetic Operators ---\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d (Integer division truncates decimals!)\n", a, b, a / b);
    printf("%d %% %d = %d (Modulo: remainder of division)\n", a, b, a % b);

    // To get a decimal division, we must cast at least one operand to float or double
    printf("%d / %d = %.2f (Float division)\n", a, b, (float)a / b);

    // 2. Relational & Logical Operators
    int age = 20;
    int has_id = 1; // 1 represents true in C

    printf("\n--- Relational & Logical Operators ---\n");
    // age >= 18 is true (1), has_id is true (1). 1 && 1 = 1 (true)
    printf("Can enter club? %d\n", (age >= 18 && has_id));

    int is_weekend = 0;
    int is_holiday = 1;
    // is_weekend || is_holiday is true (1) because is_holiday is 1
    printf("Is day off? %d\n", (is_weekend || is_holiday));

    // Logical NOT
    printf("Not day off: %d\n", !(is_weekend || is_holiday));

    return 0;
}
