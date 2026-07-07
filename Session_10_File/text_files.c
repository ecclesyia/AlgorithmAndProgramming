#include <stdio.h>

int main() {
    char filename[] = "system_logs.txt";

    // 1. Write text file
    FILE *write_ptr = fopen(filename, "w");
    if (write_ptr == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    fprintf(write_ptr, "SYSTEM: Initialized at 09:00 AM\n");
    fprintf(write_ptr, "USER: Budi logged in at 09:05 AM\n");
    fclose(write_ptr);

    // 2. Append text file
    FILE *append_ptr = fopen(filename, "a");
    if (append_ptr != NULL) {
        fprintf(append_ptr, "USER: Budi performed search query at 09:10 AM\n");
        fclose(append_ptr);
    }

    // 3. Read line-by-line
    printf("--- Reading system_logs.txt ---\n");
    FILE *read_ptr = fopen(filename, "r");
    if (read_ptr == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    char buffer[256];
    while (fgets(buffer, sizeof(buffer), read_ptr) != NULL) {
        printf("%s", buffer);
    }

    fclose(read_ptr);
    return 0;
}
