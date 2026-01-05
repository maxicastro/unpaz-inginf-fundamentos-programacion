#include "lib/utilidades.h"

int main (void) {
    
    string nombre = leer_string("Nombre: ");

    int n = 0;
    while (nombre[n] != '\0') {
        n++;
    }

    printf("%d\n", n);
}