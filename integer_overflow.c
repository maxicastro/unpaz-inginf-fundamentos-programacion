#include <stdio.h>
#include <limits.h>

int main(void) {
    int contador = 2147483640;

    printf("Contando ...\n");
    
    for (int i = 0; i < 15; i++) {
        contador++;
        printf("Valor actual: %d\n", contador);
        if (contador == INT_MAX) {
            printf("Llegamos al límite de int! \n");    
        }
    }
}