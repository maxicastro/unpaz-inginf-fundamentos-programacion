#include "lib/utilidades.h"

#define EXAMENES 4
#define ESTUDIANTES 10

int main (void) {

    int comision_notas[EXAMENES][ESTUDIANTES] = {0};

    comision_notas[0][8] = 6;
    comision_notas[2][4] = 10;
    comision_notas[1][9] = 1;
    comision_notas[0][3] = 7;
    comision_notas[3][0] = 4;

    for (int i = 0; i < EXAMENES; i++) {
        printf("Examen: %d.\n", i + 1);
        for (int j = 0; j < ESTUDIANTES; j++) {
            if (comision_notas[i][j] != 0) {
                printf("Estudiante %d - Nota: %d.\n", j + 1, comision_notas[i][j]);
            }
        }
    }
}