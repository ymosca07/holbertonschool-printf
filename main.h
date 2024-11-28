#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int (*get_func(char *s))(va_list args);
int _putchar(char c);
char *_putstr(char *str);
int _putstr_wrapper(va_list args);
int _putstr_wrapper(va_list args);
int my_strcmp(char *s1, char *s2);

/* Definition de la structure func_t */
typedef struct func
{
char *mod;
int (*f)(va_list args);
} func_t;

#endif
