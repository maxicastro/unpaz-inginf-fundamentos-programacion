#include "lib/utilidades.h"

int main() {

    string n = leer_string("Ingresá un número de dos cifras: ");

    // --- CASO 1: NÚMEROS MENORES A 10 (00 - 09) ---
    if (n[0] == '0') {
        switch (n[1]) {
            case '0': printf("cero"); break;
            case '1': printf("uno"); break;
            case '2': printf("dos"); break;
            case '3': printf("tres"); break;
            case '4': printf("cuatro"); break;
            case '5': printf("cinco"); break;
            case '6': printf("seis"); break;
            case '7': printf("siete"); break;
            case '8': printf("ocho"); break;
            case '9': printf("nueve"); break;
        }
    }
    // --- CASO 2: DEL 10 AL 19 ---
    else if (n[0] == '1') {
        // Sub-caso: 10 a 15 (Nombres especiales)
        if (n[1] >= '0' && n[1] <= '5') {
            switch (n[1]) {
                case '0': printf("diez"); break;
                case '1': printf("once"); break;
                case '2': printf("doce"); break;
                case '3': printf("trece"); break;
                case '4': printf("catorce"); break;
                case '5': printf("quince"); break;
            }
        } 
        // Sub-caso: 16 a 19 (Prefijo dieci-)
        else {
            printf("dieci");
            switch (n[1]) {
                case '6': printf("séis"); break; // Acento opcional según rigor ortográfico
                case '7': printf("siete"); break;
                case '8': printf("ocho"); break;
                case '9': printf("nueve"); break;
            }
        }
    }
    // --- CASO 3: DEL 20 AL 29 ---
    else if (n[0] == '2') {
        if (n[1] == '0') {
            printf("veinte");
        } else {
            printf("veinti");
            switch (n[1]) {
                case '1': printf("uno"); break;
                case '2': printf("dós"); break; // Acento opcional
                case '3': printf("trés"); break; // Acento opcional
                case '4': printf("cuatro"); break;
                case '5': printf("cinco"); break;
                case '6': printf("séis"); break;
                case '7': printf("siete"); break;
                case '8': printf("ocho"); break;
                case '9': printf("nueve"); break;
            }
        }
    }
    // --- CASO 4: DEL 30 AL 99 ---
    else {
        // Primero imprimimos la DECENA
        switch (n[0]) {
            case '3': printf("treinta"); break;
            case '4': printf("cuarenta"); break;
            case '5': printf("cincuenta"); break;
            case '6': printf("sesenta"); break;
            case '7': printf("setenta"); break;
            case '8': printf("ochenta"); break;
            case '9': printf("noventa"); break;
        }

        // Si la unidad NO es cero, agregamos el " y ..."
        if (n[1] != '0') {
            printf(" y ");
            switch (n[1]) {
                case '1': printf("uno"); break;
                case '2': printf("dos"); break;
                case '3': printf("tres"); break;
                case '4': printf("cuatro"); break;
                case '5': printf("cinco"); break;
                case '6': printf("seis"); break;
                case '7': printf("siete"); break;
                case '8': printf("ocho"); break;
                case '9': printf("nueve"); break;
            }
        }
    }

    printf("\n");
    return 0;
}