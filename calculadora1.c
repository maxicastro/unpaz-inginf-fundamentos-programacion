#include "lib/utilidades.h"

int menu(void);

int main(void) {

    int x = leer_int("Ingresá un número: ");
    int y = leer_int("Ingresá otro número: ");
    int opcion_elegida;
    do {
        opcion_elegida = menu();
        switch (opcion_elegida)
        {
            case 1:
                printf("La suma de los dos números es: %d.\n", x + y);
                break;
            case 2:
                printf("La resta de los dos números es: %d.\n", x - y);
                break;
        }
    } while (opcion_elegida != 3);
    printf("Saliendo!");
}

int menu(void) {
    int opcion;
    
    do {
        printf("\n=== Menu - Ingresá la opción deseada ===\n");
        printf("1. Sumar.\n");
        printf("2. Restar.\n");
        printf("3. Salir.\n");
        opcion = leer_int("Ingresá la opción elegida: ");
    } while (opcion < 1 || opcion > 3);

    return opcion;
}