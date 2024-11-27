#include <unistd.h>
#include "main.h"

/**
* _printf- 
*@format:
*
*
*/

int _printf(const char *format, ...)

{
	int i = 0; /* Index de la chaine de caracteres format */
	int count = 0; /* Nombre de caracteres printes */
	char temp[2]; /* Variable temporaire qui recupere le specificateur, soit format + 1 */
	int (*func)(va_list);
	va_list args;
	va_start(args, format);

	if (format == NULL)
	{
		write(1, "Error!\n", 7);
		return (-1);
	}

	while (format[i] != '\0') /* Parcourir la chaine de caracteres format */
	{
		if (format[i] == '%') /* Sert a verifier le modulo et le specificateur */
		{
			temp[0] = format[i + 1];
			temp[1] = '\0';

			func = get_func(temp);

			if (func != NULL)
			{
				count += func(args);
				i += 2; /* Sert a sauter les deux caracteres % + specificateur */
			}
		}
		
		_putchar(format[i]);
		i++;
		count++;
	}
	va_end(args);
	return (count);
}
