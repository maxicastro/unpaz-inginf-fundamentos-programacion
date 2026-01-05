#include "lib/utilidades.h"
#include <string.h>

int main (void) {
    
    string nombre = leer_string("Nombre: ");

    printf("El nombre ingresado es: ");

    for (int i = 0; i < strlen(nombre); i++) {
        printf("%c", nombre[i]);
    }

    printf(".\n");
}