#include "lib/utilidades.h"

int main() {

    int n1 = leer_int("Ingresá el 1er número: ");
    int n2 = leer_int("Ingresá el 2do número: ");
    int n3 = leer_int("Ingresá el 3er número: ");
    int n4 = leer_int("Ingresá el 4to número: ");

    int mayor, menor;

    // --- BLOQUE 1: BUSCANDO EL MAYOR ---
    if (n1 >= n2 && n1 >= n3 && n1 >= n4) {
        mayor = n1;
    }
    else if (n2 >= n1 && n2 >= n3 && n2 >= n4) {
        mayor = n2;
    }
    else if (n3 >= n1 && n3 >= n2 && n3 >= n4) {
        mayor = n3;
    }
    else {
        mayor = n4;
    }

    // --- BLOQUE 2: BUSCANDO EL MENOR ---
    if (n1 <= n2 && n1 <= n3 && n1 <= n4) {
        menor = n1;
    }
    else if (n2 <= n1 && n2 <= n3 && n2 <= n4) {
        menor = n2;
    }
    else if (n3 <= n1 && n3 <= n2 && n3 <= n4) {
        menor = n3;
    }
    else {
        menor = n4;
    }

    printf("\nResultados:\n");
    printf("El número MAYOR es: %d\n", mayor);
    printf("El número MENOR es: %d\n", menor);

    return 0;
}