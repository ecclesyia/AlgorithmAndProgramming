#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[] = "user_log.txt";

    printf("--- Text File Processing Demo ---\n");

    // 1. Writing to a Text File ("w" mode)
    // Warning: "w" overwrites the file if it already exists!
    FILE *write_file = fopen(filename, "w");
    if (write_file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // fprintf writes formatted text to the file stream
    fprintf(write_file, "Admin: Logged in at 08:00 AM\n");
    fprintf(write_file, "User01: Created new entry at 08:15 AM\n");
    fprintf(write_file, "Database: Auto-saved successfully at 09:00 AM\n");

    fclose(write_file); // Always close the file
    printf("Successfully wrote 3 lines to '%s'.\n", filename);

    // 2. Appending to a Text File ("a" mode)
    // "a" adds data to the end of the file without deleting existing data
    FILE *append_file = fopen(filename, "a");
    if (append_file != NULL) {
        fprintf(append_file, "Admin: Logged out at 09:30 AM\n");
        fclose(append_file);
        printf("Successfully appended a new log line to '%s'.\n", filename);
    }

    // 3. Reading from a Text File ("r" mode)
    printf("\n--- Reading contents of '%s' ---\n", filename);
    FILE *read_file = fopen(filename, "r");
    if (read_file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    char buffer[256];
    int line_number = 1;

    // fgets reads a file line-by-line until it reaches EOF (End of File) or a newline
    // buffer size is 256 to prevent buffer overflows
    while (fgets(buffer, sizeof(buffer), read_file) != NULL) {
        printf("%d: %s", line_number, buffer);
        line_number++;
    }

    fclose(read_file);
    return 0;
}
