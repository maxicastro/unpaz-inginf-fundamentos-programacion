#include "lib/utilidades.h"

int main(void) {
    float puntajes[100];
    float total_puntajes;

    for (int i = 0; i < 100; i++) {
        puntajes[i] = leer_float("Ingrese el puntaje: ");
    }

    for (int i = 0; i < 100; i++) {
        total_puntajes = total_puntajes + puntajes[i];
    }

    printf("Promedio: %2f.\n", total_puntajes / 100);
}
