# Persistence in C 

# C File I/O: The Terminal Logger 

A lightweight C project designed to break out of temporary memory and introduce data persistence by interacting directly with the computer's hard drive.

## Overview
By default, variables in C vanish the moment the program finishes running. This logger application captures user input (including spaces) and permanently appends it to a `.txt` file, serving as a foundational introduction to system-level file streams.

## Core Concepts
*   **File Pointers:** Using `FILE *` to create a dedicated stream between the C program and a physical file on the hard drive.
*   **Stream Modes:** Utilizing `fopen()` with the `"a"` (append) mode to safely add new data without overwriting existing logs.
*   **Advanced Input:** Swapping standard `scanf()` for `fgets()` to safely capture entire sentences (including spaces) directly from the standard input (`stdin`).
*   **Persistent Writing:** Using `fprintf()` to push formatted strings through the file pointer, and `fclose()` to safely lock the file and save changes.

## Compilation & Usage

**1. Compile the code:**
```bash
gcc logger.c -o logger