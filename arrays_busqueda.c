#include "lib/utilidades.h"
#include <stdbool.h>

bool buscar_numero(int cantidad, int numeros[], int num);

int main (void) {
    
    int numeros[] = {10, 20, 5, 30, 40};

    printf("Números en el arreglo: ");
    for (int i = 0; i < 5; i++) {
        printf(" %d", numeros[i]);
    }
    printf(".\n");

    int num = leer_int("Ingresá el número a buscar: ");

    bool encontrado = buscar_numero(5, numeros, num);

    if (encontrado) {
        printf("Número encontrado.\n");
    } else {
        printf("Número no encontrado!\n");
    }
}

bool buscar_numero(int cantidad, int numeros[], int num){
    bool encontrado = false;

    for (int i = 0; i < 5; i++) {
        if (numeros[i] == num) {
            encontrado = true;
            break;
        }
    }
    return encontrado;
}