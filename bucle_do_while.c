#include <stdbool.h>
#include "lib/utilidades.h"

int main(void)
{
    int cantidad;

    do {
        cantidad = leer_int("Cuántas veces imprimir UNPAZ? ");
    }
    while (cantidad < 0);

    for (int i = 0; i < cantidad; i++)
    {
        printf("UNPAZ.\n");
    }
}