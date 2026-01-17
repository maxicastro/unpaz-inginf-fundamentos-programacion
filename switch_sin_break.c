#include "lib/utilidades.h"

int main(void) {
    int calificacion = 3;
    switch (calificacion) {
        case 4:
            printf("Excelente.\n");
        case 3:
            printf("Bueno.\n");
        case 2:
            printf("Promedio.\n");
        case 1:
            printf("Pobre.\n");
        case 0:
            printf("Reprobado.\n");
        default:
            printf("Calificación inválida.\n");
    }
}

