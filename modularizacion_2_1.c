#include "lib/utilidades.h"
#include <unistd.h>

void imprimirUNPAZnVeces(int n);

int main(void) {
   int n = leer_int("Cuántas veces querés imprimir ¡UNPAZ!? ");
   imprimirUNPAZnVeces(n);
}

void imprimirUNPAZnVeces(int n) {
   for (int i = 0; i < n; i++) {
      printf("...\n");
      sleep(2);
      printf("¡UNPAZ!\n");
      sleep(2);
   }
}