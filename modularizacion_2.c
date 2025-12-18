#include "lib/utilidades.h"
#include <unistd.h>

void imprimirUNPAZnVeces(int n);

int main(void)
{
   imprimirUNPAZnVeces(3);
}

void imprimirUNPAZnVeces(int n)
{
   for (int i = 0; i < n; i++)
   {
      printf("...\n");
      sleep(2);
      printf("¡UNPAZ!\n");
      sleep(2);
   }
}