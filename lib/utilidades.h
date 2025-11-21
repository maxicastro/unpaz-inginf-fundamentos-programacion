// utilidades.h

#ifndef UTILIDADES_H
#define UTILIDADES_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// -----------------------------------------------------------------------
// 1. Definición de 'string' como alias simple a 'char *'
// -----------------------------------------------------------------------

typedef char *string;

// -----------------------------------------------------------------------
// 2. DECLARACIONES DE FUNCIONES SIMPLIFICADAS
// -----------------------------------------------------------------------

/**
 * Lee una cadena de texto (string) del usuario.
 * @param prompt Mensaje a mostrar al usuario.
 * @return string (char*) asignado dinámicamente. DEBE ser liberado por el llamador.
 */
string leer_string(const char *prompt);

/**
 * Lee un único carácter (char) del usuario.
 * @param prompt Mensaje a mostrar al usuario.
 * @return char El carácter leído (o '\0' en caso de error/entrada vacía).
 */
char leer_char(const char *prompt);

/**
 * Lee un entero (int) del usuario, con validación de entrada.
 * @param prompt Mensaje a mostrar al usuario.
 * @return int El valor entero leído.
 */
int leer_int(const char *prompt);

/**
 * Lee un número decimal de precisión simple (float) del usuario, con validación de entrada.
 * @param prompt Mensaje a mostrar al usuario.
 * @return float El valor decimal (float) leído.
 */
float leer_float(const char *prompt);

/**
 * Lee un número decimal de doble precisión (double) del usuario, con validación de entrada.
 * @param prompt Mensaje a mostrar al usuario.
 * @return double El valor decimal (double) leído.
 */
double leer_double(const char *prompt);

#endif // UTILIDADES_H