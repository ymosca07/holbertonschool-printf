#include <stdarg.h>
#include "main.h"

/**
 * my_strcmp - description
 * @s1: chaine de caracteres
 * @s2: chaine de caracteres
 * Desc: Comparer deux chaines
 * Return: Difference de s1 et s2
 */

int my_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}

		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int _putnbr_wrapper(va_list args)
{
	int num = va_arg(args, int);

	return (_putnbr(num));
}
