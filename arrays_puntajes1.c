#include "lib/utilidades.h"

float calcular_promedio(int cantidad, float numeros[]);

int main(void) {
    const int CANTIDAD = 100;
    float puntajes[CANTIDAD];
    float promedio;

    for (int i = 0; i < CANTIDAD; i++) {
        puntajes[i] = leer_float("Ingrese el %d puntaje: ", i + 1);
    }

    promedio = calcular_promedio(CANTIDAD, puntajes);

    printf("Promedio: %.2f.\n", promedio);
}

float calcular_promedio(int cantidad, float numeros[]) {
    float suma = 0;

    for (int i = 0; i < cantidad; i++) {
        suma = suma + numeros[i];
    }
    return suma / cantidad;
}