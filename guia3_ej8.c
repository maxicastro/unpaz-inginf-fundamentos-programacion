#include "lib/utilidades.h"

int main(void)
{
    int i;

    i = 17;
    printf("Si i = 17: %d\n", i >= 0 ? i : -i);
    // Imprime 17 ya que 17 es mayor que cero entonces imprime i.

    i = -17;
    printf("Si i = -17: %d\n", i >= 0 ? i : -i);
    // Imprime 17 ya que -17 no es mayor que cero entonces imprime -(-17).
}