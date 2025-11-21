// utilidades.c

#include "utilidades.h"
#include <string.h> 
#include <ctype.h> 
#include <errno.h> 
#include <limits.h>     
#include <stdbool.h>
#include <math.h> // Necesario para la comprobación de límites de FLT_MAX/FLT_MIN si se requiere más adelante

#define INPUT_BUFFER 256 

// ------------------------------------------------------------------------
// IMPLEMENTACIÓN BASE: leer_string
// ------------------------------------------------------------------------
char *leer_string(const char *prompt) {
    printf("%s", prompt);

    char buffer[INPUT_BUFFER];
    if (!fgets(buffer, INPUT_BUFFER, stdin)) {
        return NULL;
    }

    size_t len = strlen(buffer);

    // 1. Elimina el salto de línea si existe
    if (len > 0 && buffer[len - 1] == '\n') {
        buffer[len - 1] = '\0';
        len--;
    }
    
    // 2. Asigna memoria del tamaño exacto y copia el string
    char *result = (char*)malloc(len + 1);
    if (!result) return NULL;

    strcpy(result, buffer);
    return result;
}

// ------------------------------------------------------------------------
// IMPLEMENTACIÓN NUEVA: leer_char
// ------------------------------------------------------------------------
char leer_char(const char *prompt) {
    // Usamos leer_string para obtener la entrada del usuario
    string s = leer_string(prompt); 

    // Chequeamos si el string leído es exactamente un carácter
    if (s == NULL || strlen(s) != 1) {
        printf("Error: Se esperaba un solo carácter. Intenta de nuevo.\n");
        if (s) free(s); // Liberar si se asignó pero no se usó
        
        // Loop simple para forzar reentrada si la entrada es inválida
        do {
            s = leer_string(prompt);
        } while (s == NULL || strlen(s) != 1);
    }
    
    char result = s[0];
    free(s); // Liberamos la memoria asignada por leer_string
    return result;
}

// ------------------------------------------------------------------------
// IMPLEMENTACIÓN: leer_int
// ------------------------------------------------------------------------
int leer_int(const char *prompt) {
    string s; 
    
    do {
        s = leer_string(prompt);
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
            printf("Error: Valor fuera del rango INT. Intenta de nuevo.\n");
            free(s);
            continue;
        }
        
        free(s);
        return (int)value;
        
    } while (1); 
}

// ------------------------------------------------------------------------
// IMPLEMENTACIÓN NUEVA: leer_float
// ------------------------------------------------------------------------
float leer_float(const char *prompt) {
    string s; 
    
    do {
        s = leer_string(prompt);
        if (s == NULL) return 0.0f;

        char *endptr;
        errno = 0;
        // Usamos strtof para convertir directamente a float
        float value = strtof(s, &endptr);

        if (endptr == s || *endptr != '\0') {
            printf("Error: Entrada no numerica. Intenta de nuevo.\n");
            free(s);
            continue; 
        }
        // Nota: Las comprobaciones de rango de float (FLT_MAX/FLT_MIN) son más complejas,
        // confiamos en que strtof maneje ERANGE si es necesario.
        if (errno == ERANGE) {
             printf("Error: Valor demasiado grande/pequeño para float. Intenta de nuevo.\n");
             free(s);
             continue;
        }

        free(s);
        return value;
        
    } while (1);
}

// ------------------------------------------------------------------------
// IMPLEMENTACIÓN: leer_double
// ------------------------------------------------------------------------
double leer_double(const char *prompt) {
    string s; 
    
    do {
        s = leer_string(prompt);
        if (s == NULL) return 0.0;

        char *endptr;
        errno = 0;
        
        // Usamos strtod para convertir a double
        double value = strtod(s, &endptr);

        if (endptr == s || *endptr != '\0') {
            printf("Error: Entrada no numerica. Intenta de nuevo.\n");
            free(s);
            continue; 
        }
        if (errno == ERANGE) {
            printf("Error: Valor demasiado grande/pequeño para double. Intenta de nuevo.\n");
            free(s);
            continue;
        }
        
        free(s);
        return value;
        
    } while (1);
}