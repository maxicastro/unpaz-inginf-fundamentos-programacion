#include "lib/utilidades.h"

int main(void)
{
    int i, j ,k;

    i = 10;
    j = 5;
    printf("%d\n", !i < j);
    // Imprime "1".
    // Resuelve (!i) < j que es !10 que es 0 entonces 0 < 5 vale 1.
    // De un uso muy común en la práctica similar sería !(i < j), el compilador
    // tira el warning: "logical not is only applied to the left hand side of comparison"

    i = 2;
    j = 1;
    printf("%d\n", !!i + !j);
    // Imprime 1.
    // Resuelve (!(!i)) + (!j) -> (!(!2)) + (!1) -> (!0) + 0 -> 1 + 0.

    i = 5;
    j = 0;
    k = -5;
    printf("%d\n", i && j || k);
    // Imprime 1.
    // Resuelve (i && j) || k que es (5 && 0) || -5 que es 0 || -5 que es 0 || 1.

    i = 1;
    j = 2;
    k = 3;
    printf("%d\n", i < j || k);
    // Imprime 1.
    // Resuelve (i < j) || k que es (1 < 2) || 3 que es 1 || 3.
}