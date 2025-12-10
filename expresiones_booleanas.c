#include "lib/utilidades.h"

int main(void)
{
    char r;

    int a = 10;
    int b = 20;
    int c = 30;

    if ( ( ((a + b) == c) && (c != 30) ) ) {
        r = 'S';
    } else {
        r = 'N';
    }

    printf("%c\n.", r);
}

