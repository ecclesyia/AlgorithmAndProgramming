#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct representing a database record
typedef struct {
    int id;
    char name[30];
    float gpa;
} Student;

int main() {
    char db_name[] = "students.bin";

    printf("--- Binary File Processing (Mock Database) ---\n");

    // 1. Initialize data
    Student s1 = {101, "Budi Santoso", 3.75f};
    Student s2 = {102, "Siti Rahma", 3.90f};
    Student s3 = {103, "Clara Wijaya", 3.52f};

    // 2. Writing Structs to a Binary File ("wb" mode)
    FILE *write_file = fopen(db_name, "wb");
    if (write_file == NULL) {
        printf("Error creating database file!\n");
        return 1;
    }

    // fwrite takes: (source pointer, size of object, count, file stream)
    // Writing records sequentially
    fwrite(&s1, sizeof(Student), 1, write_file);
    fwrite(&s2, sizeof(Student), 1, write_file);
    fwrite(&s3, sizeof(Student), 1, write_file);

    fclose(write_file);
    printf("Saved 3 student struct records to '%s'.\n", db_name);

    // 3. Reading Structs from Binary File ("rb" mode)
    printf("\n--- Loading student database ---\n");
    FILE *read_file = fopen(db_name, "rb");
    if (read_file == NULL) {
        printf("Error opening database file!\n");
        return 1;
    }

    Student temp;
    // fread returns the number of objects successfully read (0 or less means EOF)
    while (fread(&temp, sizeof(Student), 1, read_file) == 1) {
        printf("Loaded ID: %d | Name: %-15s | GPA: %.2f\n", temp.id, temp.name, temp.gpa);
    }

    // 4. Random Access in Binary Files using fseek and ftell
    printf("\n--- Random Access Demo: Reading 2nd record directly ---\n");
    
    // Move cursor to the start of the 2nd record (offset is 1 * sizeof(Student))
    // SEEK_SET tells it to offset relative to the beginning of the file
    fseek(read_file, 1 * sizeof(Student), SEEK_SET);
    
    printf("Current file position (in bytes): %ld\n", ftell(read_file));

    // Read only that record
    if (fread(&temp, sizeof(Student), 1, read_file) == 1) {
        printf("Retrieved Record -> ID: %d | Name: %s | GPA: %.2f\n", temp.id, temp.name, temp.gpa);
    }

    fclose(read_file);
    return 0;
}
