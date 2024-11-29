# _printf

## 📃 Description

_printf is a recreation of the classic printf command, it allows you to display character strings, supporting some format specifiers like %c, %s, %d

## Features

This version of _printf take in charge the following format specifiers

%c display a single character.
%s display a string.
%d / %i display a signed decimal integer.
%% display a single modulo sign.

If it's a specifier not supported, _printf display the % followed by the not recognized charactere

## 🤖 Prototyping

int _printf(const char *format,  ...);

## Functioning
_printf take as input of a format string and variadic arguments.

Iterates through the format string character by character.

If a % is encountered:
Determines what speficiers is next (s, c, d, etc).
Uses an appropriate function (via get_func) to process the specifier.

If no %is found,  the characters are printed as is.

Returns the total number of characteers printed.

# 📄 files

|  File                    |  Description                                                     |
|:-------------------------|:-----------------------------------------------------------------|
| main.h                   | the header file that contain function prototypes and structure  |
| _printf.c                | the main function who implementing the logic            |
| get_function.c	         | the file that containt the function table           |
| start_function.c         | this file contain function recreate like putchar or putstr   |
| utils.c                  | the files that implementing fonctions to help             |

## exemples

```c
_prtinf("Hello, World!\n");
// Output: Hello, World

_printf("Character: %c, String: %s\n", 'A', "School");
// Output: Character: A, String: School
```

## How to install

```c
git clone https://github.com/ymosca07/holbertonschool-printf.git
```

## How to compile the files

```c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

## Include the header in your program

```c
#include "main.h"
```

# Limitations

The width fields (ex. %5d) and precisions (ex. %.2f) are not supported

The long types (%ld) and advanced formats (like %f for floats) are no yet implemented


# Flowchart

![Revue de projet - Cadre 1](https://github.com/user-attachments/assets/57b78033-d2f0-4e29-869b-9db7e7b53416)

# Man page

[Man page _printf.pdf](https://github.com/user-attachments/files/17957065/Man.page._printf.pdf)

## Authors

**Yannis Mosca Bulain**
- [GitHub](https://github.com/ymosca07)

**Erwan Tixerand**
- [GitHub](https://github.com/ertix222)
