// con la suma de matrices (arrays bidimensionales), se suman los elementos de 2 o más matrices y el resultado se almacena en una sola.
// Solo se puede efectuar entre matrices con la misma dimiensión (las que tienen el mismo numero de filas y el mismo número de columnas)


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void sumarMatrices(int arr1[2][2], int arr2[2][2]);

int main()
{
    int arr1[2][2] = {{2, 4}, {1, 3}};
    int arr2[2][2] = {{20, 40}, {10, 30}};

    sumarMatrices(arr1, arr2);
    


 
    return 0;
}

void sumarMatrices(int arr1[2][2], int arr2[2][2])
{
    int suma[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            suma[i][j] = arr1[i][j] + arr2[i][j]; //sumando los numeros en la misma posicion de ambos arrays en el array de destino
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%i ", suma[i][j]); //imprimiendo
        }
        printf("\n");
    }
}