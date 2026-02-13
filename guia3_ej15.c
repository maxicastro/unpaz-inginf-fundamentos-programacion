#include "lib/utilidades.h"

int main() {

    int velocidad = leer_int("Ingresá la velocidad del viento (km/h): ");

    if (velocidad < 0) {
        printf("Error: La velocidad no puede ser negativa.\n");
    } 
    else {
        printf("Descripción: ");
        
        if (velocidad < 1) {
            printf("Calma");
        } 
        else if (velocidad <= 6) { 
            // Si llegamos acá, seguro es >= 1. 
            // Chequeamos el límite superior del rango (2-6).
            printf("Aire ligero");
        } 
        else if (velocidad <= 50) { 
            // Rango 7-50
            printf("Brisa suave a fuerte");
        } 
        else if (velocidad <= 87) { 
            // Rango 51-87
            printf("Vendaval");
        } 
        else if (velocidad <= 117) { 
            // Rango 88-117
            printf("Tormenta");
        } 
        else { 
            // Rango Más de 117
            printf("Huracán");
        }
        
        printf("\n");
    }

    return 0;
}