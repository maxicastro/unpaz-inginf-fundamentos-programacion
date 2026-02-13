#include "lib/utilidades.h"

int main() {
    int n = leer_int("Ingresá un número (0 a 9999): ");

    if (n < 0 || n > 9999) {
        printf("Error: Número fuera de rango.\n");
    } else {
        if (n < 10) {
            printf("Tiene 1 dígito.\n");
        } else if (n < 100) {
            printf("Tiene 2 dígitos.\n");
        } else if (n < 1000) {
            printf("Tiene 3 dígitos.\n");
        } else {
            printf("Tiene 4 dígitos.\n");
        }
    }
    return 0;
}