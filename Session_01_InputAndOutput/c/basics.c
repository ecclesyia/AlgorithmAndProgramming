#include <stdio.h>

int main() {
    // 1. Output
    printf("Hello from C!\n");

    // 2. Variables
    int age = 19;
    float gpa = 3.75f;
    char grade = 'A';
    char name[100] = "Budi";

    // Print variables
    printf("Name: %s\n", name);
    printf("Age: %d | GPA: %.2f | Grade: %c\n", age, gpa, grade);

    // 3. Input
    printf("Enter a new age: ");
    scanf("%d", &age); // & (address-of) is required so scanf knows where in memory to write the value
    
    printf("Updated Age: %d\n", age);

    return 0;
}
