#include <stdarg.h>
#include <stddef.h>
#include "main.h"

int _putchar_wrapper(va_list args);
int _putstr_wrapper(va_list args);

/**
 * get_func - Description
 * @s: Chaine de caractères représentant le spécificateur
 * Description: Compare specificateur et s
 * Return: NULL ou pointeur
 */

int (*get_func(char *s))(va_list args)
{
	int i = 0;

 /* Tableau des fonctions */
func_t func[] = {
{"c", _putchar_wrapper},
{"s", _putstr_wrapper},
{NULL, NULL} /* Fin du tableau */
};

if (s == NULL)
{
return (NULL);
}

/* Parcourir le tableau pour trouver une correspondance */
while (func[i].mod != NULL)
{
if (my_strcmp(s, func[i].mod) == 0)
return (func[i].f); /* Retourne le pointeur de fonction associe */

i++;
}

return (NULL); /* Si aucune correspondance n'est trouvee */
}
