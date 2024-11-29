#include <unistd.h>
#include <stdarg.h>

/**
 * _putchar - description
 * @c: caracter
 * Desc: imprimer c
 * Return: i
 */

int _putchar(char c)
{
	int i = 0;

	if (c == '\0')
		return (1);

	write(1, &c, 1);
	i++;

	return (i);
}

/**
 * _putstr - description
 * @str: chaine de caracteres
 * Desc: imprimer str
 * Return: i
 */

int _putstr(char *str)
{
	int i = 0;
	
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (-1);
	}

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

/**
 * _putchar_wrapper - description
 * @args: arguments
 * Desc: putchar en bon format
 * Return: _putchar(c)
 */

int _putchar_wrapper(va_list args)
{
	char c = (char)va_arg(args, int);

	return (_putchar(c));
}

/**
 * _putstr_wrapper - description
 * @args: arguments
 * Desc: putstr en bon format
 * Return: _putstr(str)
 */

int _putstr_wrapper(va_list args)
{
	char *str = va_arg(args, char *);

	return (_putstr(str));
}

/**
 * _putnbr - description
 * @num: integer
 * Desc: putnbr pour entier
 * Return: len
 */

int _putnbr(int num)
{
	int len = 0;

	if (num == '\0')
	return (0);

	if (num == -2147483648)
	{
		len += _putstr("-2147483648");
		return (len);
	}

	if (num < 0)
	{
		len += _putchar('-');
		num = -num;
	}

	if (num / 10 != 0)
	{
		len += _putnbr(num / 10);
	}
	len += _putchar((num % 10) + '0');
	return (len);
}
