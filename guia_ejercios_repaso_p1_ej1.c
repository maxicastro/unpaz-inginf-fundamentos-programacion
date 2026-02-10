#include "lib/utilidades.h"

#define CONSUMO_BAJA 150
#define CONSUMO_ALTA 400
#define RESERVA_TECNICA 100

int main(void)
{
    int saldo_datos, opcion_elegida, costo_episodio;

    bool seguir_mirando = true;
    bool puede_seguir_mirando = true;
    bool puede_ver_episodio;

    // Configuración del saldo inicial
    do
    {
        saldo_datos = leer_int("Ingresá tu saldo de datos disponible (MB): ");
        if (saldo_datos < 500)
        {
            printf("Error: Necesitás al menos 500 MB para empezar la maratón.\n");
        }
    } while (saldo_datos < 500);

    printf("\n>>> Iniciando maratón con %d MB disponibles.\n", saldo_datos);

    while (saldo_datos > RESERVA_TECNICA && seguir_mirando)
    {

        printf("\n=========================\n");
        printf("Datos restantes: %d MB\n", saldo_datos);

        // Elegir calidad del video
        do
        {
            printf("Elegí calidad del próximo episodio:\n");
            printf(" 1. Baja Calidad (150 MB)\n");
            printf(" 2. Alta Calidad (400 MB)\n");
            opcion_elegida = leer_int("Opción: ");

            if (opcion_elegida != 1 && opcion_elegida != 2)
            {
                printf("Opción inválida. Elegí 1 o 2.\n");
            }
        } while (opcion_elegida != 1 && opcion_elegida != 2);

        costo_episodio = opcion_elegida == 1 ? CONSUMO_BAJA : CONSUMO_ALTA;

        // Calcula si el saldo disponible alcanza: debe quedar al menos la reserva técnica
        puede_ver_episodio = saldo_datos - costo_episodio >= RESERVA_TECNICA;

        if (puede_ver_episodio)
        {

            printf("\n  Reproduciendo episodio... [Consumiendo %d MB]\n", costo_episodio);
            for (int i = 10; i <= 100; i += 10)
            {
                printf("  %d%%... ", i);
            }
            saldo_datos = saldo_datos - costo_episodio;
            printf("\n  episodio finalizado. Saldo restante: %d MB.\n\n", saldo_datos);

            // Calcular cómo continuar dependiendo si queda saldo suficiente o no.

            // Puede seguir mirando si le alcanza al menos para ver en baja calidad.
            puede_seguir_mirando = saldo_datos - CONSUMO_BAJA >= RESERVA_TECNICA;
            if (puede_seguir_mirando)
            {
                do
                {
                    printf("Elegí una opción para continuar:\n");
                    printf(" 1. Mirar otro episodio.\n");
                    printf(" 2. Salir.\n");
                    opcion_elegida = leer_int("Opción: ");

                    if (opcion_elegida != 1 && opcion_elegida != 2)
                    {
                        printf("Opción inválida. Elegí 1 o 2.\n");
                    }
                } while (opcion_elegida != 1 && opcion_elegida != 2);
                seguir_mirando = opcion_elegida == 1;
            }
            else
            {
                printf("Con los datos consumidos ya no es posible mirar más episodios.\n");
                seguir_mirando = false;
            }
        }
        else
        {
            printf("[ALERTA] No tenés datos suficientes para esta calidad.\n");
            printf("Intentá con calidad Baja o finalizá la sesión.\n");

            do
            {
                printf("Elegí una opción para continuar:\n");
                printf(" 1. Volver a intentarlo.\n");
                printf(" 2. Salir.\n");
                opcion_elegida = leer_int("Opción: ");

                if (opcion_elegida != 1 && opcion_elegida != 2)
                {
                    printf("Opción inválida. Elegí 1 o 2.\n");
                }
            } while (opcion_elegida != 1 && opcion_elegida != 2);
            seguir_mirando = opcion_elegida == 1;
        }
    }

    printf("Te sobraron: %d MB.\n", saldo_datos);
}
