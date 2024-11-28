#include <unistd.h>
#include <stdarg.h>

int _putchar(char c)
{
	int i = 0;
		write(1, &c, 1);
		i++;
	return (i);
}

int _putstr(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int _putchar_wrapper(va_list args)
{
	char c = (char)va_arg(args, int);

	return (_putchar(c));
}

int _putstr_wrapper(va_list args)
{
	char *str = va_arg(args, char *);

	return (_putstr(str));
}
