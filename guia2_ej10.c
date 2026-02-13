#include <stdio.h>
#include "lib/utilidades.h"

int main() {
    int codigo = leer_int("Ingresá el código del producto: ");
    float precio = leer_float("Ingresá el precio unitario: ");
    // Para la fecha usamos string aquí para simplificar, o el método del Ej 7
    string fecha = leer_string("Ingresá la fecha de compra: ");

    printf("\nInformación:\n");
    printf("Producto\n%d\n", codigo);
    printf("Precio Unitario\n$%.2f\n", precio);
    printf("Fecha de compra\n%s\n", fecha);

    // Para respetar 100% el formato de la consigna
    // Encabezados de las columnas
    // %-15s: Reserva 15 lugares y alinea a la IZQUIERDA el texto "Producto"
    // %-20s: Reserva 20 lugares y alinea a la IZQUIERDA el texto "Precio Unitario"
    printf("%-15s %-20s %s\n", "Producto", "Precio Unitario", "Fecha de compra");

    // Fila de valores
    // %-15d: Reserva 15 lugares para el código int
    // $%-19.2f: Ponemos el signo $ manual. Reservamos 19 lugares para el float (total 20 con el $)
    // %.2f: Asegura que se vean 2 decimales siempre
    printf("%-15d $%-19.2f %s\n", codigo, precio, fecha);

    return 0;
}