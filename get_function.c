#include <string.h>
#include <stdarg.h>
#include "start_function.c"

int (*get_func(char *s)(va_list args))
{
	int i = 0;

	func_t func[]= {
	{"c", _putchar},
	{"s", _putstr},
	{NULL, NULL}
	};

	while (func[i].mod != NULL)
	{
		if (strcmp(s, func[i].mod) == 0)
		return (func[i].f);

		i++;
	}
	return (NULL);
}
