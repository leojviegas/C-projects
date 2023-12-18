#include <stdio.h>
#include <stdlib.h>
// Hacer una matriz de tipo entero preguntando al usuario el numero de filas y el numero de columnas
// rellenar la matriz y luego mostrarla en pantalla

int main()
{

    int matrix[50][50];
    int filas = 0;
    int columnas = 0;

    printf("Escribe el numero de filas (maximo 50): \n");
    scanf("%d", &filas);
    printf("Ahora el numero de columnas (maximo 50): \n");
    scanf("%d", &columnas);

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("Escribe el numero en la posicion [%d][%d]: \n", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d   ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}