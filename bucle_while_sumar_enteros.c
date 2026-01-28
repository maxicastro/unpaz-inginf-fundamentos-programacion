#include "lib/utilidades.h"

int main(void)
{
    int n, suma = 0;

    printf("Este programa suma una serie de números enteros.\n\n");
    printf("Ingresá los números uno a uno. Ingresá 0 para terminar.\n");
    n = leer_int("Número: ");

    while (n != 0) {
        suma += n;
        n = leer_int("Número: ");
    }
    printf("La suma es: %d\n", suma);

    return 0;
}