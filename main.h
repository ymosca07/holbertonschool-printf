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
int _putnbr(int num);
int _putnbr_wrapper(va_list args);

/**
 * struct func - Description
 * @mod: chaîne de caracteres
 * @f: pointeur
 * Description: typedef d'une structure
 * Return: Nothing
 */

typedef struct func
{
char *mod;
int (*f)(va_list args);
} func_t;

#endif
