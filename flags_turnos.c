#include "lib/utilidades.h"

int main(void)
{
    bool turno_jugador_1 = true; // Estado inicial
    printf("--- Simulación de Turnos ---\n");

    for (int i = 1; i <= 4; i++)
    {
        if (turno_jugador_1)
        {
            printf("Ronda %d: Juega el Humano\n", i);
        }
        else
        {
            printf("Ronda %d: Juega la Máquina\n", i);
        }
        // Invertimos la bandera para la próxima vuelta
        turno_jugador_1 = !turno_jugador_1;
    }
}
