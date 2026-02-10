#include "lib/utilidades.h"

int main(void) {
   int fuerza_g_leida;
   int fuerza_g_maxima = 0;

   for (int i=0; i<5; i++) {
       fuerza_g_leida = leer_int("Puntaje: ");

       if (fuerza_g_leida > fuerza_g_maxima) {
           fuerza_g_maxima = fuerza_g_leida;
       }
   }
   printf("Máxima fuerza G registrada: %d\n", fuerza_g_maxima);
}
