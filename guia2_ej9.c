#include <math.h>
#include "lib/utilidades.h"

int main() {
    double x = leer_double("Ingresá un valor para x: ");
    
    // Polinomio: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
    double resultado = 3 * pow(x, 5) 
                     + 2 * pow(x, 4) 
                     - 5 * pow(x, 3) 
                     - pow(x, 2) 
                     + 7 * x 
                     - 6;

    printf("Valor del polinomio 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 evaluado en %.2f: %.4f\n", x, resultado);
    return 0;
}