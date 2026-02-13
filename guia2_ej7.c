#include "lib/utilidades.h"

int main() {
    
    // Leemos la fecha completa como un solo texto.
    // Precondición: El usuario DEBE respetar el formato de 10 caracteres.
    string fecha = leer_string("Fecha en formato dd/mm/aaaa: ");

    printf("Formato inglés: ");

    // Imprimimos el AÑO: caracteres en posiciones 6, 7, 8 y 9
    printf("%c%c%c%c", fecha[6], fecha[7], fecha[8], fecha[9]);

    // Imprimimos el separador
    printf("/");

    // Imprimimos el MES: caracteres en posiciones 3 y 4
    printf("%c%c", fecha[3], fecha[4]);

    // Imprimimos el separador
    printf("/");

    // Imprimimos el DÍA: caracteres en posiciones 0 y 1
    printf("%c%c", fecha[0], fecha[1]);
    
    printf("\n");

    return 0;
}