//* hacer array de 10 numeros
// pedirle al usuario que digite un numero para encontrarlo en el array
// indicar si el numero existe en el array o no, y en que posicion está
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arrayLength = sizeof(array) / sizeof(array[0]);
    int numberToFind = 0;
    bool numberFound = false;

    printf("Write a number to find it in the array: \n");
    scanf("%d", &numberToFind);

    for (int i = 0; i < arrayLength && numberFound == false; i++) //agrego el 'numberfound == false' para que corte el loop al hayarlo
    {
        if (numberToFind == array[i])
        {
            numberFound = true;
            printf("Number %d found! at position: [%d]", numberToFind, i);
        }
    }
    if (numberFound == false)
        printf("Number not found");

    return 0;
}