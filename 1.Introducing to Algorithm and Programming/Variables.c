#include <stdio.h>
#include <string.h>

int main() {
    // 1. Declare and initialize variables with standard C data types
    int a = 10;          // Whole numbers (integer)
    char b = 'X';        // Single character (must use single quotes '')
    float c = 3.14f;     // Single-precision decimal number
    char d[101];         // Character array (string) representing up to 100 characters + null-terminator

    // Copying string value safely into character array 'd'
    strcpy(d, "Binus University");

    // 2. Printing variables using format specifiers
    // %d  -> formats integer 'a'
    // %c  -> formats character 'b'
    // %.2f -> formats float 'c' to 2 decimal places
    // %s  -> formats character array 'd'
    printf("Integer a: %d\n", a);
    printf("Character b: %c\n", b);
    printf("Float c: %.2f\n", c);
    printf("String d: %s\n", d);

    // 3. Taking input from the user using scanf
    printf("\nEnter a new integer: ");
    scanf("%d", &a); // Must use & (address-of) so scanf knows where to store the value

    printf("Enter a new string (no spaces): ");
    scanf("%s", d);  // No & needed for arrays, because the array name decays to the address of its first element

    // Outputting the updated values
    printf("\n--- Updated Values ---\n");
    printf("New Integer: %d\n", a);
    printf("New String: %s\n", d);

    return 0;
}