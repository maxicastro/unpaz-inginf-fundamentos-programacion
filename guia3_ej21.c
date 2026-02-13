#include "lib/utilidades.h"

int main() {
    printf("--- Comparador de Fechas ---\n");

    // 1. Ingreso de la Primera Fecha
    int d1 = leer_int("Primera fecha - Ingresá el día: ");
    int m1 = leer_int("Primera fecha - Ingresá el mes: ");
    int a1 = leer_int("Primera fecha - Ingresá el año: ");

    // 2. Ingreso de la Segunda Fecha
    int d2 = leer_int("Segunda fecha - Ingresá el día: ");
    int m2 = leer_int("Segunda fecha - Ingresá el mes: ");
    int a2 = leer_int("Segunda fecha - Ingresá el año: ");

    // 3. Lógica de Comparación
    // Resultado: mapea -1 a fecha1 es mayor, 0 son iguales, 1 fecha2 es mayor
    int resultado = 0;

    if (a1 > a2) {
        resultado = -1;
    } 
    else if (a1 < a2) {
        resultado = 1;
    } 
    else {
        // Años iguales, desempatamos por mes
        if (m1 > m2) {
            resultado = -1;
        } 
        else if (m1 < m2) {
            resultado = 1;
        } 
        else {
            // Meses iguales, desempatamos por día
            if (d1 > d2) {
                resultado = -1;
            } 
            else if (d1 < d2) {
                resultado = 1;
            } 
            else {
                resultado = 0;
            }
        }
    }

    // 4. Salida de Resultados
    // !0 es verdadero
    if (!resultado) {
        printf("Las fechas son exactamente iguales.\n");
    } 
    else if (resultado == 1) {
        printf("La fecha %d/%d/%d viene antes en el calendario que la fecha %d/%d/%d.\n", 
               d1, m1, a1, d2, m2, a2);
    } 
    else {
        printf("La fecha %d/%d/%d viene antes en el calendario que la fecha %d/%d/%d.\n", 
               d2, m2, a2, d1, m1, a1);
    }

    return 0;
}