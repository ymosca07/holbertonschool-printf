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
	char temp[2]; /* Variable temporaire qui recupere le specificateur, soit format + 1 */
	int (*func)(va_list) = get_func(temp);
	va_list args;
	va_start(args, format);

	while (format[i] != '\0') /* Parcourir la chaine de caracteres format */
	{
		if (format[i] == '%') /* Sert a verifier le modulo et le specificateur */
		{
			temp[0] = format[i + 1];
			temp[1] = '\0';

			i += 2; /* Sert a sauter les deux caracteres % + specificateur */
			i += func(args);
		}
		else /* Sert a imprimer une erreur */
		{
			write(1, "This is an error\n", 17);
			return (-1);
		}
		i++;
	}
	va_end(args);
	return (i);
}
