#include "lib/utilidades.h"

int main(void)
{
    char c = leer_char("¿Aceptás los términos? ");

    if (c == 's' || c == 'S')
    {
        printf("Aceptado.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("No aceptado.\n");
    }
}

