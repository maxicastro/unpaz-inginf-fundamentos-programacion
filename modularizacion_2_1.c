#include "lib/utilidades.h"
#include <unistd.h>

void imprimirUNPAZnVeces(int n);

int main(void) {
   int cantVeces = leer_int("Cuántas veces querés imprimir ¡UNPAZ!? ");
   imprimirUNPAZnVeces(cantVeces);
}

void imprimirUNPAZnVeces(int n) {
   for (int i = 0; i < n; i++) {
      printf("...\n");
      sleep(2);
      printf("¡UNPAZ!\n");
      sleep(2);
   }
}