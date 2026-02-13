#include "lib/utilidades.h"

int main() {

    int cant50 = leer_int("Cantidad de billetes de $50: ");
    int cant100 = leer_int("Cantidad de billetes de $100: ");
    int cant500 = leer_int("Cantidad de billetes de $500: ");

    long total = cant50 * 50 + cant100 * 100 + cant500 * 500;
    int precio = 1000;

    printf("Dinero ingresado: $%ld\n", total);

    if (total < precio) {
        printf("No hubo venta. Faltan $%ld.\n", precio - total);
    }
    else {
        if (total == precio) {
            printf("Venta sin vuelto. ¡Disfrutá tu gaseosa!\n");
        }
        else {
            printf("Venta con vuelto. Vuelto: $%ld\n", total - precio);
        }
    }
    return 0;
}
