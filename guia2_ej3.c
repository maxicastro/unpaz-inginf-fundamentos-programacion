#include "lib/utilidades.h"

int main() {
    int horas = leer_int("Ingresá la cantidad de horas trabajadas: ");
    float tarifa = leer_float("Ingresá la tarifa por hora: ");
    float tasa = leer_float("Ingresá la tasa de impuestos (0.1 a 0.9): ");

    float bruto = horas * tarifa;
    float impuesto = bruto * tasa;
    float neto = bruto - impuesto;

    printf("\n--- Liquidación ---\n");
    printf("Total Bruto: $%.2f\n", bruto);
    printf("Impuestos:   $%.2f\n", impuesto);
    printf("Total Neto:  $%.2f\n", neto);

    return 0;
}