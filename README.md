
## _printf

A custom implementation of the C standard library printf function, written in C as part of the Holberton School curriculum.


## 📝 Description

_printf replicates the core behavior of the standard printf function. It processes a format string and a variable number of arguments, writes formatted output to standard output, and returns the total number of characters printed.


## Prototype

cint _printf(const char *format, ...);


## 🛠️ Compilation

bashgcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o printf


## Supported Format Specifiers
Specifier           Description                             Example                         Output
%c                  Prints a single character               _printf("%c", 'A')              A
%s                  Prints a string of characters           _printf("%s", "hi")             hi 
%%                  Prints a literal percent sign           _printf("%%")                   %
%d                  Prints a decimal integer                _printf("%d", 42)               42
%i                  Prints an integer (base 10)             _printf("%i", -7)               -7


## Usage Example

#include "main.h"

int main(void)
{
    _printf("Hello, %s!\n", "World");
    _printf("Char: %c\n", 'A');
    _printf("Int: %d\n", 42);
    _printf("Negative: %i\n", -7);
    _printf("Percent: %%\n");
    return 0;
}

Output:
Hello, World!
Char: A
Int: 42
Negative: -7
Percent: %


## 📁 Project Structure

File                            Description
_printf.c                       Main function — format string parsing and dispatch loop
handlers.c                      Handler functions for each supported specifier
main.h                          Function prototypes and required library includes
man_3_printf                    Custom man page for _printf
AUTHORS                         List of project contributors, and their contact



## Flowchart

_printf(format, ...)
        │
        ▼
   format == NULL ? ──── YES ──→ return -1
        │ NO
        ▼
   loop: read format string char by char
        │
   ┌────┴────────┐
   │ char != '%' │──→ write char to stdout, count++
   └────┬────────┘
        │ char == '%'
        ▼
   read next char
        │
   ┌────┴────────────────────┐
   │ %c → handle_char()      │
   │ %s → handle_string()    │
   │ %% → handle_percent()   │
   │ %d → handle_int()       │
   │ %i → handle_int()       │
   │ other → write % + char  │
   └─────────────────────────┘
        │
        ▼
   return count

## Man Page

To read the manual page for _printf:
man ./man_3_printf


## Authors

Sagal — github.com/sagalou
Alexandre — github.com/alexholberton

