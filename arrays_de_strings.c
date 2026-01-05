#include "lib/utilidades.h"

int main (void)
{
    string palabras[2];
    palabras[0] = "Hola";
    palabras[1] = "Chau";

    printf("%s\n", palabras[0]);
    printf("%s\n", palabras[1]);

    printf("1er char de la palabra 1: %c.\n", palabras[0][0]);
    printf("3er char de la palabra 1: %c.\n", palabras[0][2]);
    printf("2do char de la palabra 2: %c.\n", palabras[1][1]);
    printf("4to char de la palabra 2: %c.\n", palabras[1][3]);

    // Imprimiendo la primera palabra completa
    for (int i = 0; i < 4; i ++) {
        printf("%c", palabras[0][i]);
    }
    printf("\n");
}