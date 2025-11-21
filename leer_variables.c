// #include <stdio.h>
// #include <stdlib.h>
#include "lib/utilidades.h" 

int main() {
    // Declaración usando el tipo 'string'
    string nombre = leer_string("Ingresá tu nombre: "); 
    int edad = leer_int("Ingresá tu edad (solo numero): ");
    double saldo = leer_double("Ingresá tu saldo bancario: ");
    bool es_estudiante = true;
    
    printf("\n--- Resumen ---\n");
    printf("Hola, %s.\n", nombre);
    printf("Tienes %d años.\n", edad);
    printf("Tu saldo es: $%.2f\n", saldo);
    printf("Estudiante: %s\n", es_estudiante ? "Si" : "No");

    free(nombre); 
    
    return 0;
}