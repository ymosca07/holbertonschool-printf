#include <string.h>
#include <stdarg.h>
#include <stddef.h>

/*Definition de la structure func_t */
typedef struct func {
    char *mod;               
    int (*f)(va_list args);         
	} func_t;

/* Declaration des fonctions utilisees */
int _putchar(va_list args);
int _putstr(va_list args);

int (*get_func(char *s))(va_list args) {
    int i = 0;

    if (s == NULL) {
        return (NULL);
    }


    // Tableau des fonctions //
    func_t func[] = {
        {"c", _putchar},
        {"s", _putstr},
        {NULL, NULL} // Fin du tableau //
    };

    // Parcourir le tableau pour trouver une correspondance //
    while (func[i].mod != NULL) {
        if (strcmp(s, func[i].mod) == 0)
            return (func[i].f); // Retourne le pointeur de fonction associe //

        i++;
    }

    return (NULL); // Si aucune correspondance n'est trouvee //
}
