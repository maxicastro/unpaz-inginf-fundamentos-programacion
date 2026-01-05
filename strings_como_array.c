#include "lib/utilidades.h"

int main(void) {
    char color[5] = "azul";
    
    printf("String: %s.\n", color);
    for (int i = 0; i < 5; i++) {
        printf("Caracter número %d - Como char %c.\n", i + 1, color[i]);
        printf("Caracter número %d - Como número %d.\n", i + 1, color[i]);
    }
}