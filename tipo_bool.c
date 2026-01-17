#include "lib/utilidades.h"

int main(void) {
   int valor1 = 1;
   bool valor2 = true;
   int valor3 = 0;
   bool valor4 = false;

   if (valor1 == valor2) {
       printf("1 de tipo int es igual a un tipo bool con valor true\n");
   } else {
       printf("1 de tipo int NO es igual a un tipo bool con valor true.\n");
   }

   if (valor3 == valor4) {
       printf("0 de tipo int es igual a un tipo bool con valor false.\n");
   } else {
       printf("0 de tipo int NO es igual a un tipo bool con valor false\n");
   }
}
