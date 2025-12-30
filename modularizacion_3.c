#include "lib/utilidades.h"

void imprimirGrilla(int filas, int columnas);
void imprimirFila(int columas);

int main(void) {
    imprimirGrilla(5, 6);
}

void imprimirGrilla(int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        imprimirFila(columnas);
    }
}

void imprimirFila(int columnas) {
    for (int i = 0; i < columnas; i++) {
        printf("#");
    }
    printf("\n");
}