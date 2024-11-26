#include <unistd.h>
#include "get_function.c"
#include "start_func.c"

/**
* _printf- 
*@format:
*
*
*/

int _printf(const char *format, ...)

{
	int i = 0; // Index de la chaine de caracteres format //
	int j = 0; // Valeur a retourner (taille du retour) //
	va_list args;
	va_start(args, format);

	while (format[i] != '\0') // Parcourir la chaine de caracteres format //
	{
		if ((format[i] == "%") // Sert a verifier le modulo et le specificateur //
		&& ((format[i + 1] == 'c')
		|| (format[i + 1] == 'd')
		|| (format[i + 1] == 'i')))
		{
			va_arg(args, int);
			j++;

			i = i + 2;
		}
		if ((format[i] >= 'A' && format[i] <= 'Z') // Sert a imprimer des lettres //
		|| (format[i] >= 'a' && format[i] <= 'z'))
		{
			_putchar(i);
			j++;
		}
		else if(format[i] >= '0' && format[i] <= '9') // Sert a imprimer des chiffres //
		{
			_putchar(i);
			j++;
		}
		else // Sert a imprimer une erreur //
		{
			write(1, "This is an error\n", 17);
		}
		i++;
		va_end(args);

		return (j);
	}
}
