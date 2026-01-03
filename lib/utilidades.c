#include "utilidades.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>    // Para va_list, va_start, va_end
#include <errno.h>
#include <limits.h>
#include <float.h>

#define INPUT_BUFFER 256

// --- IMPLEMENTACIÓN DE LEER_STRING (La base de la librería) ---
char *leer_string(const char *prompt, ...) {
    // 1. Procesar el prompt con formato
    va_list args;
    va_start(args, prompt);
    vprintf(prompt, args); // Imprime el prompt formateado
    va_end(args);

    char buffer[INPUT_BUFFER];
    if (!fgets(buffer, INPUT_BUFFER, stdin)) {
        return NULL;
    }

    // Eliminar el salto de línea residual de fgets
    size_t len = strlen(buffer);
    if (len > 0 && buffer[len - 1] == '\n') {
        buffer[len - 1] = '\0';
        len--;
    }
    
    // Reserva dinámica de memoria exacta
    char *result = (char*)malloc(len + 1);
    if (!result) return NULL;

    strcpy(result, buffer);
    return result;
}

// --- FUNCIÓN INTERNA AUXILIAR ---
// Esta función ayuda a procesar el formato para las funciones numéricas
static void procesar_prompt(char *dest, size_t size, const char *fmt, va_list args) {
    vsnprintf(dest, size, fmt, args);
}

// --- IMPLEMENTACIÓN DE LEER_INT ---
int leer_int(const char *prompt, ...) {
    char p[INPUT_BUFFER];
    va_list args;
    va_start(args, prompt);
    procesar_prompt(p, sizeof(p), prompt, args);
    va_end(args);

    string s;
    do {
        s = leer_string(p);
        if (s == NULL) return 0;

        char *endptr;
        errno = 0;
        long value = strtol(s, &endptr, 10);
        
        if (endptr == s || *endptr != '\0') {
            printf("Error: Entrada no numerica. Intenta de nuevo.\n");
            free(s);
            continue;
        }
        if ((errno == ERANGE && (value == LONG_MAX || value == LONG_MIN)) || value > INT_MAX || value < INT_MIN) {
            printf("Error: Valor fuera de rango. Intenta de nuevo.\n");
            free(s);
            continue;
        }
        
        free(s);
        return (int)value;
    } while (1);
}

// --- IMPLEMENTACIÓN DE LEER_FLOAT ---
float leer_float(const char *prompt, ...) {
    char p[INPUT_BUFFER];
    va_list args;
    va_start(args, prompt);
    procesar_prompt(p, sizeof(p), prompt, args);
    va_end(args);

    string s;
    do {
        s = leer_string(p);
        if (s == NULL) return 0.0f;

        char *endptr;
        errno = 0;
        float value = strtof(s, &endptr);

        if (endptr == s || *endptr != '\0') {
            printf("Error: Entrada no numerica. Intenta de nuevo.\n");
            free(s);
            continue;
        }
        if (errno == ERANGE) {
            printf("Error: Valor fuera de rango. Intenta de nuevo.\n");
            free(s);
            continue;
        }

        free(s);
        return value;
    } while (1);
}

// --- IMPLEMENTACIÓN DE LEER_DOUBLE ---
double leer_double(const char *prompt, ...) {
    char p[INPUT_BUFFER];
    va_list args;
    va_start(args, prompt);
    procesar_prompt(p, sizeof(p), prompt, args);
    va_end(args);

    string s;
    do {
        s = leer_string(p);
        if (s == NULL) return 0.0;

        char *endptr;
        errno = 0;
        double value = strtod(s, &endptr);

        if (endptr == s || *endptr != '\0') {
            printf("Error: Entrada no numerica. Intenta de nuevo.\n");
            free(s);
            continue;
        }
        if (errno == ERANGE) {
            printf("Error: Valor fuera de rango. Intenta de nuevo.\n");
            free(s);
            continue;
        }
        
        free(s);
        return value;
    } while (1);
}

// --- IMPLEMENTACIÓN DE LEER_CHAR ---
char leer_char(const char *prompt, ...) {
    char p[INPUT_BUFFER];
    va_list args;
    va_start(args, prompt);
    procesar_prompt(p, sizeof(p), prompt, args);
    va_end(args);

    string s;
    do {
        s = leer_string(p);
        if (s != NULL && strlen(s) == 1) {
            char result = s[0];
            free(s);
            return result;
        }
        printf("Error: Ingrese un solo caracter.\n");
        if (s) free(s);
    } while (1);
}