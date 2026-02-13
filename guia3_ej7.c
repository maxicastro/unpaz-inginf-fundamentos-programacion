#include "lib/utilidades.h"

int main(void)
{
    int i, j ,k;

    i = 3; j = 4; k = 5;
    printf("Salida: %d ", i < j || ++j < k);
    printf("| Valores finales: %d %d %d\n", i, j, k);
    // Salida: 1 | Valores finales: 3 4 5. 3<4 es true, true todo el OR, no ejecuta el resto.

    i = 7; j = 8; k = 9;
    printf("Salida: %d ", i - 7 && j++ < k);
    printf("| Valores finales: %d %d %d\n", i, j, k);
    // Salida: 0 | Valores finales: 7 8 9. 7-7 es 0, false, false todo el AND, no ejecuta el resto.

    i = 7; j = 8; k = 9;
    printf("Salida: %d ", (i = j) || (j = k));
    printf("| Valores finales: %d %d %d\n", i, j, k);
    // OJO: asignaciones, no comparaciones.
    // i = j es i=8 asigna 8 a i y devuelve 8 que es true, true todo el OR, no ejecuta el resto.
    // Salida: 1 | Valores finales: 8 8 9.

    i = 1; j = 1; k = 1;
    printf("Salida: %d ", ++i || ++j && ++k);
    printf("| Valores finales: %d %d %d\n", i, j, k);
    // Salida: 1 | Valores finales: 2 1 1.
    // Precedencia el AND entonces resuelve ++i || (++j && ++k).
    // Aumenta i a 2, es true, true todo el OR, no ejecuta el resto ni evalúa el AND.
}