#include <stdarg.h>

#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int (*get_func(char *s))(va_list args);
int _putchar(char c);
char *_putstr(char *str);
int _putstr_wrapper(va_list args);
int _putstr_wrapper(va_list args);

#endif
