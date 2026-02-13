#include <math.h>
#include "lib/utilidades.h"

int main() {
    printf("Calculadora de Raíces (ax^2 + bx + c)\n");
    float a = leer_float("Ingresá a: ");
    float b = leer_float("Ingresá b: ");
    float c = leer_float("Ingresá c: ");

    if (a == 0) {
        printf("No es una ecuación cuadrática (a=0).\n");
    } else {
        float discriminante = (b * b) - (4 * a * c);

        if (discriminante > 0) {
            float x1 = (-b + sqrt(discriminante)) / (2 * a);
            float x2 = (-b - sqrt(discriminante)) / (2 * a);
            printf("Dos raíces reales distintas: %.2f y %.2f\n", x1, x2);
        } else if (discriminante == 0) {
            float x = -b / (2 * a);
            printf("Una raíz real única (doble): %.2f\n", x);
        } else {
            printf("No existen raíces reales (raíces complejas).\n");
        }
    }
    return 0;
}