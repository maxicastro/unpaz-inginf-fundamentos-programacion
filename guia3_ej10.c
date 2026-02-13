#include "lib/utilidades.h"

int main(void)
{
    int i, j;
    
    // Posibilidad 1: (i == j) ? 0 : (i > j ? 1 : -1)

    i = 1, j = 2;
    printf("%d\n", (i == j) ? 0 : (i > j ? 1 : -1));

    i = 2, j = 1;
    printf("%d\n", (i == j) ? 0 : (i > j ? 1 : -1));

    // Posibilidad 2: (i > j) - (i < j)

    i = 1, j = 2;
    printf("%d\n", (i > j) - (i < j));

    i = 2, j = 1;
    printf("%d\n", (i > j) - (i < j));
}