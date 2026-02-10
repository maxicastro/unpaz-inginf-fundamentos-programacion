#include "lib/utilidades.h"
#include <float.h>

int main(void) {
   float tiempo;
   float mejor_tiempo = FLT_MAX;

   for (int i=1; i<=10; i++) {
       tiempo = leer_float("Tiempo: ");

       if (tiempo < mejor_tiempo) {
           mejor_tiempo = tiempo;
       }
   }
   printf("Tiempo de la pole position: %.2f.\n", mejor_tiempo);
}
