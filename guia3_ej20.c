#include "lib/utilidades.h"

int main() {

    int pesoInicial = leer_int("Ingresá tu peso actual (en gramos): ");
    int distancia = leer_int("Distancia recorrida (en metros): ");
    float tiempo = leer_float("Tiempo realizado (en segundos): ");

    // Cálculo de Peso
    // Fórmula: (distancia * 100) / 50  => simplificado: distancia * 2
    int pesoPerdido = distancia * 2;
    int pesoFinal = pesoInicial - pesoPerdido;

    printf("\n--- Resultados Físicos ---\n");
    printf("Peso perdido: %d gramos.\n", pesoPerdido);
    printf("Peso final: %d gramos.\n", pesoFinal);

    // Análisis de Vitaminas (Condiciones Independientes)
    // Usamos IFs separados porque las condiciones se pueden sumar.
    // Si pierde 500g, es > 300 Y > 450, necesita ambas vitaminas.
    
    if (pesoPerdido > 300) {
        printf(">> RECOMENDACIÓN: Necesitás Vitamina A.\n");
    }
    if (pesoPerdido > 450) {
        printf(">> RECOMENDACIÓN: Necesitás Vitamina C.\n");
    }

    // Análisis de Récords (Condiciones Excluyentes/Jerárquicas)
    // Preguntamos primero por el caso más exigente (el tiempo más bajo).
    
    if (tiempo < 15) {
        // Si hizo menos de 15, automáticamente hizo menos de 25.
        printf("Se batió AMBOS récords (Panamericano y Olímpico).\n");
    } 
    else if (tiempo < 25) {
        // Si llegamos acá, es porque NO hizo < 15, pero sí < 25.
        printf("¡FELICITACIONES! Batiste el récord Olímpico.\n");
    } 
    else {
        printf("No se batieron récords en esta carrera.\n");
    }

    return 0;
}