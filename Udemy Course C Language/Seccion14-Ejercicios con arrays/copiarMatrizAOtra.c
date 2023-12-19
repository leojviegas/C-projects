// Hacer un amatriz de tipo entero de 2*2, llenarla de numeros
// y luego copiar todo su contendio hacia otra matriz
#include <stdio.h>
#include <stdlib.h>

void imprimirMatriz(int matriz[2][2], char texto[2]);

int main()
{

    int matriz1[2][2] = {{1, 2}, {3, 4}};
    int matriz2[2][2] = {0};
    
    imprimirMatriz(matriz1, "\nmatriz1: \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matriz2[i][j] = matriz1[i][j];
        }
    }

    imprimirMatriz(matriz2, "\nmatriz2: \n");
    return 0;
}

void imprimirMatriz(int matriz[2][2], char texto[2])
{
    printf("%s", texto);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }
}