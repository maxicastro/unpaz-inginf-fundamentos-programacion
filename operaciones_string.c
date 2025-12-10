#include <string.h>
#include "lib/utilidades.h"

int main(void)
{
    printf("Longitud de UNPAZ: %zu\n", strlen("UNPAZ"));

    string s1 = "Texto Fijo";
    string s2 = "Otro Texto";
    printf(
        "Comparación s1 vs \"Texto Fijo\": %d\n",
        strcmp(s1, "Texto Fijo"));
    printf(
        "Comparación s1 vs s2: %d\n",
        strcmp(s1, s2));

    char nombre_completo[20] = "Ana ";
    printf("String antes de strcat: %s\n", nombre_completo);
    strcat(nombre_completo, "Perez");
    printf("String después de strcat: %s\n", nombre_completo);
    printf("Primer carácter: %c\n", nombre_completo[0]);
    printf("Quinto carácter: %c\n", nombre_completo[4]);
}