#include "lib/utilidades.h"
int main(void)
{
    int i, j, k;

    i = 5;
    j = 3;
    printf("%d %d\n", i / j, i % j);
    // Imprime "1  2" ya que 1 es 5/3 parte entera y 2 el módulo

    i = 2;
    j = 3;
    printf("%d\n", (i + 10) % j);
    // Imprime "0 " ya que 0 es el módulo o resto de dividir 15 / 4

    i = 7;
    j = 8;
    k = 9;
    printf("%d\n", (i + 10) % k / j); // % y / asociativos a la izq
    // Imprime "1". Queda 17 % 9 / 8 = (17 % 9) / 8 = 8 / 8 = 1

    i = 1;
    j = 2;
    k = 3;
    printf("%d\n", (i + 5) % (j + 2) / k); // div parte entera
    // Imprime "0" ya que 6 % 4 / 3 = (6 % 4) / 3 = 2 / 3 = 0

    i = 7;
    j = 8;
    i *= j + 1;
    printf("%d %d\n", i, j);
    // Imprime "63 8" ya que i *= j + 1 es i = i * (j + 1) = 7 * 9 = 63

    i = j = k = 1;
    i += j += k; // asignación múltiple: asoc a la derecha
    printf("%d %d %d\n", i, j, k);
    // Imprime "3 2 1". k queda igual, j se le suma k vale 2, i suma j

    i = 1, j = 2, k = 3;
    i -= j -= k;
    printf("%d %d %d\n", i, j, k);
    // Imprime "2 -1 3" ya que se resuelve i = i - (j = j - k)

    i = 2, j = 1, k = 0;
    i *= j += k;
    printf("%d %d %d\n", i, j, k);
    // Imprime "2 1 0" ya que se resuelve i = i * (j = j + k)
}