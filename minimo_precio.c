#include "lib/utilidades.h"

int main(void) {
   float precio;
   float precio_mas_bajo;
   bool primer_precio = true;

   do {
       precio = leer_float("Precio: ");
       if (precio == 0) break;

       if (primer_precio || precio < precio_mas_bajo) {
           precio_mas_bajo = precio;
           primer_precio = false;
       }
   } while (precio != 0);
}
