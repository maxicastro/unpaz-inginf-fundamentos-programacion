#include <stdbool.h>
#include "lib/utilidades.h"

int main(void)
{
    int cantidad;
    
    while (true) {
        cantidad = leer_int("Cuántas veces imprimir UNPAZ? ");
        if (cantidad < 0) {
            continue;
        } else {
            break;
        }
    }

    for (int i = 0; i < cantidad; i++) {
        printf("UNPAZ.\n");
    }
}

