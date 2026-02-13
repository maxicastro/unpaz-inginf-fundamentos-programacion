#include <math.h> // Necesario para pow() y M_PI
#include "lib/utilidades.h"

int main() {
    float radio = leer_float("Ingresá el radio de la esfera: ");

    // pow(base, exponente) eleva el radio al cubo.
    // Usamos 4.0/3.0 para forzar división con decimales.
    // M_PI es una constante definida en math.h con el valor de Pi.
    double volumen = (4.0 / 3.0) * M_PI * pow(radio, 3);

    printf("El volumen de la esfera es: %.4f\n", volumen);
    
    return 0;
}