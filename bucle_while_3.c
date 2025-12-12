#include "lib/utilidades.h"

int main(void)
{
    int i = -1;
    while (i <= 5) {
        if (i != 3) {
            printf("El valor de i es: %d.\n", i);
        }
        i++;
        i++;
    }
}

