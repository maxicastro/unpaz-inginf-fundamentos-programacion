#include <stdio.h>
#include "lib/utilidades.h"

int main() {
    int dinero = leer_int("Ingresá la cantidad de dinero a retirar (sin centavos): ");
    int cantidad;
    printf("\nDesglose de billetes:\n");

    // Lógica: Dividimos por el billete más grande, imprimimos cantidad,
    // y nos quedamos con el resto para el siguiente billete.
    
    // Billetes de 20.000
    cantidad = dinero / 20000; 
    printf("Billetes de $20000: %d\n", cantidad);
    dinero = dinero % 20000; // Actualizamos el dinero con lo que sobra

    // Billetes de 10.000
    cantidad = dinero / 10000;
    printf("Billetes de $10000: %d\n", cantidad);
    dinero = dinero % 10000;

    // Billetes de 2.000
    cantidad = dinero / 2000;
    printf("Billetes de $2000: %d\n", cantidad);
    dinero = dinero % 2000;

    // Billetes de 1.000
    cantidad = dinero / 1000;
    printf("Billetes de $1000: %d\n", cantidad);
    dinero = dinero % 1000;

    // Billetes de 500
    cantidad = dinero / 500;
    printf("Billetes de $500: %d\n", cantidad);
    dinero = dinero % 500;

    // Billetes de 200
    cantidad = dinero / 200;
    printf("Billetes de $200: %d\n", cantidad);
    dinero = dinero % 200;

    // Billetes de 100
    cantidad = dinero / 100;
    printf("Billetes de $100: %d\n", cantidad);
    dinero = dinero % 100;

    // Billetes de 50
    cantidad = dinero / 50;
    printf("Billetes de $50: %d\n", cantidad);
    dinero = dinero % 50;

    // Billetes de 20
    cantidad = dinero / 20;
    printf("Billetes de $20: %d\n", cantidad);
    dinero = dinero % 20;

    // Billetes de 10
    cantidad = dinero / 10;
    printf("Billetes de $10: %d\n", cantidad);
    dinero = dinero % 10;

    // Monedas
    printf("Monedas de $1: %d\n", dinero);

    return 0;
}