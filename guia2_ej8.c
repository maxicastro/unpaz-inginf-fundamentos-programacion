#include <math.h>
#include "lib/utilidades.h"

int main() {
    float cateto1 = leer_float("Ingresá el primer cateto: ");
    float cateto2 = leer_float("Ingresá el segundo cateto: ");

    // sqrt es raíz cuadrada
    float hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    printf("La hipotenusa es: %.2f\n", hipotenusa);
    return 0;
}