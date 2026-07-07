#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int id;
    float gpa;
} Student;

void printStudent(const Student *s) {
    printf("ID: %d | Name: %-10s | GPA: %.2f\n", s->id, s->name, s->gpa);
}

int main() {
    printf("--- Struct Declaration & Pointer arrow -> ---\n");
    Student student = {"Budi", 24001, 3.82f};
    
    // Access directly
    printf("Name: %s\n", student.name);

    // Access via pointer using arrow operator ->
    Student *ptr = &student;
    ptr->gpa = 3.95f; // Update GPA
    printStudent(ptr);

    // Array of Structs
    printf("\n--- Database Simulation (Array of Structs) ---\n");
    Student class_list[2] = {
        {"Siti", 24002, 3.90f},
        {"Clara", 24003, 3.45f}
    };

    for (int i = 0; i < 2; i++) {
        printStudent(&class_list[i]);
    }

    return 0;
}
