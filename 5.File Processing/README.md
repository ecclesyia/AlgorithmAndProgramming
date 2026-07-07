# 📂 Module 5: File Processing / File System

When a program terminates, all data stored in variables, structs, and arrays is lost because RAM (volatile memory) is wiped clean. To store data permanently, we must save it to the hard drive (non-volatile memory) as a file. This module covers **File I/O** in C, which is a staple topic in Binus and CS50.

---

## 💡 Key Concepts Explained

### 1. File Pointer (`FILE *`)
In C, file operations are managed using a special struct pointer of type `FILE *`, which is defined in `<stdio.h>`.

---

### 2. Opening & Closing Files
We use `fopen` to establish a stream connection to a file, and `fclose` to close it:
```c
FILE *fp = fopen("filename.txt", "mode");
```

#### Common File Modes:
*   `"r"` (Read): Opens an existing file for reading. Fails if the file doesn't exist.
*   `"w"` (Write): Creates a new file (or overwrites an existing one) for writing.
*   `"a"` (Append): Opens a file for writing, but adds new data to the **end** of the file instead of overwriting it.
*   `"rb"`, `"wb"`, `"ab"`: Read, write, and append modes specifically for **binary files**.

**Always close your files!** Leaving files open consumes system handles and can corrupt data:
```c
fclose(fp);
```

---

### 3. Text Files vs. Binary Files

#### Text Files (`.txt`, `.csv`)
Store data as readable ASCII characters. Numbers are written as character symbols (e.g. integer `123` is stored as characters `'1'`, `'2'`, `'3'`).
*   **Write Function**: `fprintf(FILE *stream, "format string", variables...)`
*   **Read Function**: `fscanf(FILE *stream, "format string", &variables...)` or `fgets(char *str, int n, FILE *stream)`

#### Binary Files (`.bin`, `.dat`)
Store raw bytes exactly as they exist in RAM. This is highly efficient, secure, and preserves memory layout, but is not human-readable.
*   **Write Function**: `fwrite(const void *ptr, size_t size, size_t count, FILE *stream)`
*   **Read Function**: `fread(void *ptr, size_t size, size_t count, FILE *stream)`

---

### 4. File Pointer Manipulation
*   `fseek(FILE *stream, long offset, int origin)`: Moves the internal file cursor to a specific byte location. Origins:
    *   `SEEK_SET`: Beginning of file.
    *   `SEEK_CUR`: Current cursor position.
    *   `SEEK_END`: End of file.
*   `ftell(FILE *stream)`: Returns the current byte index position of the file cursor.
*   `rewind(FILE *stream)`: Moves the cursor back to the beginning of the file (equivalent to `fseek(stream, 0, SEEK_SET)`).

---

## 🏃 Runnable Code Examples
Check out these files in this directory:
1.  [**`text_files.c`**](text_files.c) — Writing and reading user log files in plain text, handling line reads (`fgets`).
2.  [**`binary_files.c`**](binary_files.c) — Saving and loading structure records (database simulation) directly using `fwrite` and `fread`.

---

## 🚀 Preparing for What's Next: CS50 / MIT Context
*   **Why we learn this**: RAM is temporary. To build real software (like a game that saves your progress or a database containing student grades), we must write to disks.
*   **What we use this for**: Configuration files, application logs, file encryption utilities, and serialization of struct databases.
*   **Where to start next**: Learn how to build tree-based database structures or recursive search trees that read records from files and search them in logarithmic time. This leads to **Advanced Concepts** in Module 6.
