#include <unistd.h>

int _putchar(char c)
{
	int i = 0;
		write(1, &c, 1);
		i++;
	return (i);
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
