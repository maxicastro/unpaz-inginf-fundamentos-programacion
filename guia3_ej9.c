#include "lib/utilidades.h"

int main(void)
{
    int i = 1;
    printf("Salida: ");
    switch (i % 3)
    {
    case 0:
        printf("cero");
    case 1:
        printf("uno");
    case 2:
        printf("dos");
    }
    printf("\n");

    // Imprime "unodos" ya que 1 % 3 es 1
    // Va al case 1, imprime "uno"
    // El case no tiene break entonces ejecuta el código del case 2
    // y finalmente ejecuta el printf("\n")
}