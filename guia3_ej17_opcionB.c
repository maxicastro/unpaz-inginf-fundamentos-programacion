#include "lib/utilidades.h"

int main() {
    int n = leer_int("Ingresá un número de dos cifras (0-99): ");

    int decenas = n / 10;
    int unidades = n % 10;

    // --- GRUPO 1: IRREGULARES (0 al 15) ---
    // Estos tienen nombres únicos y no siguen un patrón fijo.
    if (n >= 0 && n <= 15) {
        switch (n) {
            case 0: printf("cero"); break;
            case 1: printf("uno"); break;
            case 2: printf("dos"); break;
            case 3: printf("tres"); break;
            case 4: printf("cuatro"); break;
            case 5: printf("cinco"); break;
            case 6: printf("seis"); break;
            case 7: printf("siete"); break;
            case 8: printf("ocho"); break;
            case 9: printf("nueve"); break;
            case 10: printf("diez"); break;
            case 11: printf("once"); break;
            case 12: printf("doce"); break;
            case 13: printf("trece"); break;
            case 14: printf("catorce"); break;
            case 15: printf("quince"); break;
        }
    }
    // --- GRUPO 2: PREFIJO DIECI (16 al 19) ---
    else if (n >= 16 && n <= 19) {
        printf("dieci");
        switch (unidades) {
            case 6: printf("seis"); break;
            case 7: printf("siete"); break;
            case 8: printf("ocho"); break;
            case 9: printf("nueve"); break;
        }
    }
    // --- GRUPO 3: LOS VEINTE (20 al 29) ---
    else if (n >= 20 && n <= 29) {
        if (n == 20) {
            printf("veinte");
        } else {
            printf("veinti");
            switch (unidades) {
                case 1: printf("uno"); break;
                case 2: printf("dós"); break;
                case 3: printf("trés"); break;
                case 4: printf("cuatro"); break;
                case 5: printf("cinco"); break;
                case 6: printf("séis"); break;
                case 7: printf("siete"); break;
                case 8: printf("ocho"); break;
                case 9: printf("nueve"); break;
            }
        }
    }
    // --- GRUPO 4: REGULARES (30 al 99) ---
    // Patrón: "Nombre de Decena" + " y " + "Unidad"
    else if (n >= 30 && n <= 99) {
        // A. Imprimir la Decena
        switch (decenas) {
            case 3: printf("treinta"); break;
            case 4: printf("cuarenta"); break;
            case 5: printf("cincuenta"); break;
            case 6: printf("sesenta"); break;
            case 7: printf("setenta"); break;
            case 8: printf("ochenta"); break;
            case 9: printf("noventa"); break;
        }

        // B. Imprimir la Unidad (si no es cero)
        if (unidades != 0) {
            printf(" y ");
            switch (unidades) {
                case 1: printf("uno"); break;
                case 2: printf("dos"); break;
                case 3: printf("tres"); break;
                case 4: printf("cuatro"); break;
                case 5: printf("cinco"); break;
                case 6: printf("seis"); break;
                case 7: printf("siete"); break;
                case 8: printf("ocho"); break;
                case 9: printf("nueve"); break;
            }
        }
    } 
    else {
        printf("Error: Número fuera de rango (debe ser de dos cifras).");
    }

    printf("\n");
    return 0;
}