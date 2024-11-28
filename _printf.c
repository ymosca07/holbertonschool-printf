#include <unistd.h>
#include "main.h"

/**
* _printf - description
* @format: chaine de caracteres
* Desc: imprime en fonction des specificateurs %
* Return: count (nb de caracteres imprimes)
*/

int _printf(const char *format, ...)
{
	int i = 0; /* Index de la chaine de caracteres format */
	int count = 0; /* Nombre de caracteres printes */
	char temp[2]; /* Variable temporaire qui recupere le specificateur */
	int (*func)(va_list);
	va_list args;

	va_start(args, format);
	while (format[i] != '\0') /* Parcourir la chaine de caracteres format */
	{
		if (format[i] == '%') /* Verif quand i est % */
		{
			temp[0] = format[i + 1];
			temp[1] = '\0';
			if (format[i + 1] == '\0')
			return (0);
			func = get_func(temp);
			if (func != NULL)
			{ count += func(args);
				i += 2; /* Sert a sauter les deux caracteres % + specificateur */
			}
			else if (format[i + 1] == '%')
			{ _putchar(temp[0]);
				count += 2;
				i += 2;
			}
			else /* Specificateur invalide */
			{ _putchar('%');
				_putchar(temp[0]);
				count += 2;
				i += 2;
			}
		}
		else
		{ _putchar(format[i]); /* Imprimer si different de % */
			i++;
			count++;
		}
	}
	va_end(args);
	return (count); /* Nombre de caracteres imprimes */
}
