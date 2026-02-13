#include "lib/utilidades.h"

int main(void)
{
    int i, j, k;

    i = 2; j = 3; k = i * j == 6;
    printf("%d\n", k);
    // Imprime "1" (true) ya que * tiene precedencia sobre ==

    i = 5; j = 10; k = 1;
    printf("%d\n", k > i < j);
    // Imprime "1". Relacionales misma precedencia, asocian a la izq (k > i) < j

    i = 3; j = 2; k = 1;
    printf("%d\n", i < j == j < k);
    // Imprime "1" ya que los relacionales tienen más precedencia que la igualdad.

    i = 3; j = 4; k = 5;
    printf("%d\n", i % j + i < k);
    // Imprime "0". Resuelve ((i % j) + i) < k 
}