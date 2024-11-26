#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);

typedef struct mod
{
	char *mod;
	int (*f)(va_list args);
} func_t;

#endif
