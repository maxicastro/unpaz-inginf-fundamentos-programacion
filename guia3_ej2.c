#include <stdio.h>
#include "lib/utilidades.h"
int main()
{
    int i, j, k;

    i = 5;
    printf("%d ", i++ * 2); // i se multiplica a 2 valiendo 5
    printf("%d\n", i);      // Imprime "10 6"

    i = 5;
    printf("%d ", ++i * 2); // i se multiplica a 2 valiendo 6
    printf("%d\n", i);      // Imprime "12 6"

    i = 10, j = 5;
    printf("%d ", i++ + ++j); // suma: i valor 10 y j aumentado a 6
    printf("%d %d\n", i, j);  // Imprime "16 11 6"

    i = 7, j = 8;
    printf("%d ", i++ * --j); // multiplica i valor 7 y j decrementado a 7
    printf("%d %d\n", i, j);  // Imprime “49 8 7”

    i = 3, j = 4, k = 5;
    k = i++ - --j;                 // i aumenta desp de la asignación
    printf("%d %d %d\n", i, j, k); // k vale o (3 - (4 - 1))
    // Imprime "4 3 0"

    i = 5;
    j = --i * 3 - 2;
    printf("%d %d\n", i, j);
    // Imprime "4 10" ya que i decrementa a 4 -> 4*3=12 y 12-2=10

    i = 5;
    j = 3 + 2 * i++;
    printf("%d %d\n", i, j);
    // Imprime "6 13" ya que i aumenta desp de la asignación

    i = 7;
    j = 10 - 3 * i--;
    printf("%d %d\n", i, j);
    // Imprime "6 -11" ya que i decrementa antes de multiplicar
}
