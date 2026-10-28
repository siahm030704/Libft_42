*This project has been created as part of the 42 curriculum by ssarsour.*

# Libft

## Description

Libft is a C library developed as part of the 42 curriculum. The goal of this project is to reimplement useful standard C library functions and create additional functions for string manipulation, memory management, and linked-list operations.

This project helps develop a better understanding of C programming, pointers, memory allocation, and data structures.

## Library Contents

### Part 1 — Libc Functions

This part reimplements standard C functions for:

- Character checking and conversion
- String length and manipulation
- Memory operations
- Integer conversion
- Dynamic memory allocation

### Part 2 — Additional Functions

This part contains additional utility functions for:

- Creating and manipulating strings
- Splitting strings
- Converting integers to strings
- Applying functions to string characters
- Writing characters, strings, and numbers to file descriptors

### Part 3 — Linked Lists

This part provides functions to create, modify, traverse, and delete linked-list nodes.

## Instructions

### Compilation

Run the following command in the project directory:

```bash
make
```

This compiles the source files and creates the static library `libft.a`.

Other available commands:

```bash
make clean
make fclean
make re
```

- `make clean`: Removes object files.
- `make fclean`: Removes object files and the library.
- `make re`: Rebuilds the library.

### Usage

Include the header in your C program:

```c
#include "libft.h"
```

Compile your program with the library, for example:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft
```

## Resources

- The 42 Libft project subject.
- The C standard library manual pages (`man`).
- The `malloc`, `free`, and pointer documentation.
- Peer learning and debugging practice.

### AI Usage

AI tools were used to clarify C programming concepts, understand compiler errors, review code, and discuss testing strategies. The implementations were written and tested as part of the learning process.

## Author

ssarsour — 42 student