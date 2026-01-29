#include "lib/utilidades.h"
#define NUMERO_SECRETO 42

int main(void)
{
    int intento;

    do {
        intento = leer_int("¿Cuál es tu número? ");

        if (intento > NUMERO_SECRETO) {
            printf("Incorrecto. El número secreto es MENOR.\n");
        } 
        else if (intento < NUMERO_SECRETO) {
            printf("Incorrecto. El número secreto es MAYOR.\n");
        }

    } while (intento != NUMERO_SECRETO);

    printf("¡Felicitaciones! Adivinaste el número %d.\n", NUMERO_SECRETO);
}