#include "lib/utilidades.h"

int main() {
    int minutos = leer_int("Duración de la llamada (en minutos): ");
    int costoTotal, excedente, costoExcedente;

    // Tarifa Plana para llamadas cortas
    if (minutos <= 3) {
        costoTotal = 10;
    } 
    else {
        // También se puede hacer costoTotal = 10 + (minutos - 3) * 2;
        excedente = minutos - 3;
        costoExcedente = excedente * 2;
        costoTotal = 10 + costoExcedente;
    }

    printf("Por una llamada de %d minutos, debés pagar: $%d\n", minutos, costoTotal);

    return 0;
}