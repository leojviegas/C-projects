#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>
// numero random del 1 a 10
int main()
{
                        /*   esto del srand(time(NULL)se pone para "semillear" a la función rand()
                            (srand vendria a ser 'seed rand(seed number here)' con el tiempo actual, para que tome eso como base(semilla)
                             y sea verdaderamente aleatorio
                         */
    srand(time(NULL));  
    int limiteInf = 1;  // limite inferior
    int limiteSup = 10; // limite superior (igual luego los voy a cambiar pidiéndoselos al usuario)
    int opcion = 0;
    printf("Bienvenido al random number generator.\n");
    printf("Presione '1' para generar 10 numeros aleatorios.\nPresione '2' para salir.\n");
    scanf("%d", &opcion);

    while (opcion != 1 && opcion != 2)
    {
        printf("Opcion no valida\n");
        printf("Presione '1' para generar 10 numeros aleatorios.\nPresione '2' para salir.\n");
        scanf("%d", &opcion);
    }

    while (opcion == 1)
    {
        printf("ingrese limite inferior (mayor o igual a 0)\n");
        scanf("%d", &limiteInf);
        printf("Ingrese limite superior\n");
        scanf("%d", &limiteSup);

        for (int i = 0; i < 10; i++)
        {
            int n = limiteInf + rand() % ((limiteSup + 1) - limiteInf); // poner atención en dónde se ponen el límite inferior y el superior
            printf("%d, ", n);
            Sleep(100); // milisegundos (ms)
        }
        printf("\n");
        printf("Presione '1' para generar 10 numeros aleatorios.\nPresione '2' para salir.\n");
        scanf("%d", &opcion);
    }
    return 0;
}