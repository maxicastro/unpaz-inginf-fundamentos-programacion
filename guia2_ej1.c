#include "lib/utilidades.h"

int main() {

    float base = leer_float("Ingresá la base del triángulo: ");
    float altura = leer_float("Ingresá la altura del triángulo: ");

    float superficie = (base * altura) / 2;

    printf("La superficie es: %.2f\n", superficie);
}