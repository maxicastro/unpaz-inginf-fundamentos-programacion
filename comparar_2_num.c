#include "lib/utilidades.h"

int main(void)
{
    int a = leer_int("Ingresá un número: ");
    int b = leer_int("Ingresá otro número: ");

    if (a > b)
    {
        printf("El número mayor es %d\n", a);
    }
    else if (a < b)
    {
        printf("El número mayor es %d\n", b);
    }
    else
    {
        printf("Los números son iguales %d\n", a);
    }
}