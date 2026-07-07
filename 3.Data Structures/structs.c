#include <stdio.h>
#include <string.h>

// 1. Defining a struct using typedef to create a convenient alias
typedef struct {
    char name[50];
    int id;
    float gpa;
} Student;

// Function that takes a struct pointer as an argument
// Using pointers prevents copying the entire struct in memory (efficient!)
void printStudentDetails(const Student *s) {
    // We use the arrow operator (->) to access members via pointers
    printf("ID: %d | Name: %-15s | GPA: %.2f\n", s->id, s->name, s->gpa);
}

int main() {
    printf("--- Structs and Typdef Demo ---\n");

    // 2. Initializing variables of type 'Student'
    Student student1 = {"Budi Santoso", 2401001, 3.85f};
    Student student2;

    // Setting values manually
    student2.id = 2401002;
    strcpy(student2.name, "Siti Rahma");
    student2.gpa = 3.92f;

    // Print values using the display function
    printStudentDetails(&student1);
    printStudentDetails(&student2);

    // 3. Array of Structs (Useful for holding records)
    printf("\n--- Array of Structs (Database Simulation) ---\n");
    Student classroom[3] = {
        {"Adit", 2401003, 3.40f},
        {"Clara", 2401004, 3.78f},
        {"Dani", 2401005, 2.95f}
    };

    float total_gpa = 0.0f;
    for (int i = 0; i < 3; i++) {
        printStudentDetails(&classroom[i]);
        total_gpa += classroom[i].gpa;
    }

    printf("Class Average GPA: %.2f\n", total_gpa / 3.0f);

    // 4. Pointer-to-Struct modification
    printf("\n--- Modifying Struct via Pointer ---\n");
    Student *s_ptr = &student1;
    s_ptr->gpa = 3.98f; // Modifying Budi's GPA
    printf("Budi's updated GPA: %.2f\n", student1.gpa);

    return 0;
}
