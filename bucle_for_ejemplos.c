// ejemplos slides
#include "lib/utilidades.h"

int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        printf("|=");
    }
    printf("|\n");

    for (int i = 0; i < 4; i++)
    {
        printf("  <>  \n");
    }
    printf("<><><>\n");
    printf("  <>  \n");

    // Por cada fila
    for (int i = 0; i < 5; i++) {
        // Por cada columna
        for (int j = 0; j < 6; j++) {
            printf("#");
        }
        // Final de la fila
        printf("\n");
    }

    // Por cada fila
    for (int fila = 0; fila < 5; fila++) {
        // Por cada columna
        for (int col = 0; col < 6; col++) {
            printf("#");
        }
        // Final de la fila
        printf("\n");
    }
}