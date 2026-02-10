#include "lib/utilidades.h"

int main(void) {
   int puntos_actuales;
   int record_mundial;
   bool es_primera_lectura = true;

   for (int i=0; i<5; i++) {
       puntos_actuales = leer_int("Puntaje: ");

       if (es_primera_lectura || puntos_actuales > record_mundial) {
           record_mundial = puntos_actuales;
           es_primera_lectura = false;
       }
   }
   printf("Record mundial: %d\n", record_mundial);
}
