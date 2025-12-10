#include "lib/utilidades.h"
#include "string.h"

int main(void)
{
    printf("%d.\n", strcmp("AAA", "AAA"));
    printf("%d.\n", strcmp("AAA", "aaa"));
    printf("%d.\n", strcmp("AAA", "ZAA"));
    printf("%d.\n", strcmp("DAA", "AAA"));
    printf("%d.\n", strcmp("123", "456"));
    printf("%d.\n", strcmp("JCP", "456"));
    printf("%d.\n", strcmp("UNP", "UNPAZ"));
    printf("%d.\n", strcmp("UNPAZ", "UNP"));
}