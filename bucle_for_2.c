#include "lib/utilidades.h"

int main(void)
{
    printf("=== Bucle 1 ===.\n");
    for(int i = 1; i < 4; i++) {
        printf("UNPAZ.\n");
    }

    printf("=== Bucle 2 ===.\n");
    for(int i = 0; i < 3; i++) {
        printf("UNPAZ.\n");
    }

    printf("=== Bucle 3 ===.\n");
    for(int i = 1; i <= 3; i++) {
        printf("UNPAZ.\n");
    }

    printf("=== Bucle 4 ===.\n");
    for(int i = 3; i > 0; i--) {
        printf("UNPAZ.\n");
    }
}
