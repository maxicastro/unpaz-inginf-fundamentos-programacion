#include "lib/utilidades.h"

int main(void)
{
    int cantidad = leer_int("Cuántas veces imprimir UNPAZ? ");
    for (int i = 0; i < cantidad; i++) {
        printf("UNPAZ.\n");
    }
}

