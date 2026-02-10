#include "lib/utilidades.h"

int main(void)
{
    int numero;
    int total = 0;
    char continuar;

    do {
        numero = leer_int("Ingresá un número para sumar: ");
        total += numero;
        printf("Total parcial: %d\n", total);

        continuar = leer_char("¿Querés sumar otro número?: ");

    } while (continuar == 's' || continuar == 'S');

    printf("Resultado final de la suma: %d\n", total);
    return 0;
}
