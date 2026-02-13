#include "lib/utilidades.h"

int main() {
    // PASO 1: Leemos el primer número.
    // IMPORTANTE: Al ser el primero, es automáticamente el mayor y el menor.
    int num = leer_int("Ingresá el 1er número: ");
    int mayor = num;
    int menor = num;

    num = leer_int("Ingresá el 2do número: ");
    if (num > mayor) {
        mayor = num;
    }
    if (num < menor) {
        menor = num;
    }

    num = leer_int("Ingresá el 3er número: ");
    if (num > mayor) {
        mayor = num;
    }
    if (num < menor) {
        menor = num;
    }

    num = leer_int("Ingresá el 4to número: ");
    if (num > mayor) {
        mayor = num;
    }
    if (num < menor) {
        menor = num;
    }

    // Resultado Final
    printf("\nResultados:\n");
    printf("El número MAYOR ingresado fue: %d\n", mayor);
    printf("El número MENOR ingresado fue: %d\n", menor);

    return 0;
}