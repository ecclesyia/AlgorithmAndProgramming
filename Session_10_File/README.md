# 📂 Session 10: File

This session covers file system operations in C: opening streams, reading/writing lines of text, and serializing structural data directly to hard disks as binary files.

---

## 💡 Concepts Explained

### 1. File Stream Pointer (`FILE *`)
We establish a connection to a physical file using a pointer.
*   `fopen("filename", "mode")`: Establish connection.
*   `fclose(FILE *)`: Terminate connection. Always close files to prevent handles leakage.

### 2. Common Modes
*   `"r"` (Read text), `"w"` (Write text - overrides file), `"a"` (Append text).
*   `"rb"`, `"wb"`, `"ab"` (Binary read, write, and append).

### 3. Text Files vs. Binary Files
*   **Text Mode**: Stores characters (human-readable). We use `fprintf` and `fgets`.
*   **Binary Mode**: Stores raw memory bytes exactly as they appear in RAM. Extremely fast, compact, and keeps structure alignment. We use `fwrite` and `fread`.

### 4. File Pointer Manipulation
*   `fseek(FILE *, long offset, int origin)`: Adjusts the internal file read/write cursor.
*   `ftell(FILE *)`: Reports the current byte index position of the cursor.

---

## 🏃 Code Examples
Check these files in this directory:
*   [**`text_files.c`**](text_files.c) — Creating log lists and appending records in text files.
*   [**`binary_database.c`**](binary_database.c) — Writing structural student records to a binary file and performing direct index seek lookups.

---

## 🚀 Preparing for What's Next: CS50 / MIT Context
*   **Why we learn this**: Non-volatile storage. RAM is wiped when a computer restarts. To store user accounts, game states, or transactions, we must write files to disks.
*   **What we use this for**: Custom database engines, file parsers, and system logs.
*   **Where to start next**: Learn how to model these records dynamically as compound objects in memory, which leads to **Data Structures** in Session 11.
