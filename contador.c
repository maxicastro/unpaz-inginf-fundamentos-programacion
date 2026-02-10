#include "lib/utilidades.h"
#define CANTIDAD_SENSORES 5
#define TEMP_MAXIMA 90

int main(void) {
   int cantidad_alertas = 0;
   int temperatura;

   for (int i = 1; i <= CANTIDAD_SENSORES; i++) {
       temperatura = leer_int("Ingresá la temperatura del sensor: ");

       if (temperatura > TEMP_MAXIMA) {
           cantidad_alertas++;
           printf("  [!] Alerta registrada.\n");
       }
   }

   printf("Total de sensores en estado crítico: %d\n", cantidad_alertas);
}