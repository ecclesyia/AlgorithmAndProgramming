#include <stdio.h>

typedef struct {
    int id;
    char name[30];
    float score;
} Student;

int main() {
    char filename[] = "database.bin";

    // 1. Serialization (fwrite)
    FILE *write_ptr = fopen(filename, "wb");
    if (write_ptr == NULL) {
        printf("Error opening database file!\n");
        return 1;
    }

    Student s1 = {101, "Budi", 85.5f};
    Student s2 = {102, "Siti", 92.0f};
    Student s3 = {103, "Clara", 78.4f};

    fwrite(&s1, sizeof(Student), 1, write_ptr);
    fwrite(&s2, sizeof(Student), 1, write_ptr);
    fwrite(&s3, sizeof(Student), 1, write_ptr);
    fclose(write_ptr);

    printf("Database written successfully.\n");

    // 2. Deserialization & Random Access (fread, fseek, ftell)
    FILE *read_ptr = fopen(filename, "rb");
    if (read_ptr == NULL) {
        printf("Error opening database file!\n");
        return 1;
    }

    // Seek directly to the 2nd student record (index 1)
    fseek(read_ptr, 1 * sizeof(Student), SEEK_SET);
    printf("Read cursor byte position: %ld\n", ftell(read_ptr));

    Student temp;
    if (fread(&temp, sizeof(Student), 1, read_ptr) == 1) {
        printf("Loaded Record -> ID: %d | Name: %s | Score: %.2f\n", temp.id, temp.name, temp.score);
    }

    fclose(read_ptr);
    return 0;
}
