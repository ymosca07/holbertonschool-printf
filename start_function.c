#include <unistd.h>

char _putchar(char c)
{
	write(1, &c, 1);

	i++;

	return (c)
}

char *_putstr(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (str);
}
