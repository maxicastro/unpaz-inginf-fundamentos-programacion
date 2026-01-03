#include "lib/utilidades.h"

int main(void) {
   float puntajes[3];
   puntajes[0] = 73.0;
   puntajes[1] = 70.0;
   puntajes[2] = 5.40;

   printf("Promedio: %.2f.\n", (puntajes[0] + puntajes[1] + puntajes[2]) / 3);
}
