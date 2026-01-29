#include "lib/utilidades.h"
#define PIN_CORRECTO 5423

int main(void)
{
    int pin_ingresado;
    int intentos = 0;

    do {
        pin_ingresado = leer_int("Ingresá tu PIN de 4 dígitos: ");
        intentos++;

        if (pin_ingresado != PIN_CORRECTO) {
            printf("PIN incorrecto. Intento %d de 3.\n", intentos);
        }

    } while (pin_ingresado != PIN_CORRECTO && intentos < 3);

    // Al salir, verificamos por qué salió del bucle
    if (pin_ingresado == PIN_CORRECTO) {
        printf("¡Acceso concedido!.\n");
    } else {
        printf("Usuario bloqueado por seguridad.\n");
    }
}