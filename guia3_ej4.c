#include "lib/utilidades.h"

int main() {
    printf("--- Verificador de Suma ---\n");

    // Solicitamos los tres números
    int n1 = leer_int("Ingresá el primer número: ");
    int n2 = leer_int("Ingresá el segundo número: ");
    int n3 = leer_int("Ingresá el tercer número: ");

    // Evaluamos caso por caso
    if (n1 == n2 + n3) {
        printf("%d es la suma de %d y %d\n", n1, n2, n3);
    } 
    else if (n2 == n1 + n3) {
        printf("%d es la suma de %d y %d\n", n2, n1, n3);
    } 
    else if (n3 == n1 + n2) {
        printf("%d es la suma de %d y %d\n", n3, n1, n2);
    } 
    else {
        // Si llegamos acá, ninguna combinación funcionó
        printf("Ningún número es la suma de los otros dos\n");
    }

    return 0;
}