// Crear un programa que tenga un array de 100 numeros aleatorios entre 1 y 1000
// una vez creado organizarlo de tal manera que almacene los
// numeros pares en un array y losimpares en otro

// POSIBLE SOLUCION:
// usar el math random dentro de un for loop para guardar 100 nums aleatorios entre 1 y 1000
// luego crear 2 arrays vacios
//  y luego ir a otro for loop y un if dentro, donde si es par lo meta en un array, sino en el otro

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#define ARRLENGTH 100
int main()
{
    srand(time(NULL));
    int limiteInf = 1;
    int limiteSup = 1000;
    int arrayBase[ARRLENGTH] = {0};
    int arrayPares[ARRLENGTH] = {0};
    int arrayImpares[ARRLENGTH] = {0};

    printf("Todos los numeros generados aleatoriamente: \n");
    for (int i = 0; i < ARRLENGTH; i++) // llenando arrayBase de números
    {
        int n = limiteInf + rand() % ((limiteSup + 1) - limiteInf);
        arrayBase[i] = n;
        printf("%d, ", n);
    }
    printf("\n\n");
    for (int i = 0, j = 0, k = 0; i < ARRLENGTH; i++) // repartiéndolos entre los arrays según pares e impares
    {
        if (arrayBase[i] % 2 == 0)
        {
            arrayPares[j] = arrayBase[i];
            j++;
        }
        else
        {
            arrayImpares[k] = arrayBase[i];
            k++;
        }
    }

    printf("\n");
    // imprimiendo todos los de arrayPares y luego los impares
    int sizeofArrayPares = sizeof(arrayPares) / sizeof(arrayPares[0]);
    printf("Pares: ");
    for (int i = 0; i < ARRLENGTH; i++)
    {
        printf("%d, ", arrayPares[i]);
    }
    printf("\n");

    printf("Impares: ");
    for (int i = 0; i < ARRLENGTH; i++)
    {
        printf("%d, ", arrayPares[i]);
    }
    return 0;
}