#include <stdio.h>

void sortNumbers(int n1, int n2, int n3);

int main()
{
    int n1, n2, n3;
    n1 = 19;
    n2 = 10;
    n3 = 5;
    printf("\nEscriba 3 numeros que quiera ordenar de menor a mayor (oprima 'enter' o 'espacio' luego de cada numero)\n");
    //scanf("%d %d %d", &n1, &n2, &n3);
    sortNumbers(n1, n2, n3);

    return 0;
}

void sortNumbers(int n1, int n2, int n3)
{
    int numbers[] = {n1, n2, n3};
    int numbersLength = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < numbersLength - 1; i++)
    {
        for (int j = i + 1; j < numbersLength; j++)
        {
            if (numbers[i] > numbers[j])
            {
                int smaller = numbers[j]; // se encontro un numero mas chico, asi que lo guardo en una variable random
                numbers[j] = numbers[i];  // pongo el que estaba al principio en el lugar que antes estaba el mas chico pero ahora se puede sobreescribir
                numbers[i] = smaller;     // y finalmente pongo el más chico en el lugar del principio
            }
        }
    }
    printf("Los numeros ordenados son: %d, %d, %d", numbers[0], numbers[1], numbers[2]);
}