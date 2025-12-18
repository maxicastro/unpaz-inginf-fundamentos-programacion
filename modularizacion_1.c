#include "lib/utilidades.h"
#include<unistd.h>

void imprimirUNPAZ(void);

int main(void) {
   for (int i = 0; i < 3; i++) {
       imprimirUNPAZ();
   }
}

void imprimirUNPAZ(void) {
   printf("...\n");
   sleep(2);
   printf("¡UNPAZ!\n");
   sleep(2);
}