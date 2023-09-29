#include <stdio.h>
// metiendo valores dentro de un array segun el input de usuario, mediante un for loop
int main()
{
    int arrInput[5];
    int arrInputLength = sizeof(arrInput) / sizeof(arrInput[0]); // de esta forma se puede almacenar el length del array en una variable, y es + cómodo

    for (int i = 0; i < arrInputLength; i++) // asks user to enter elements in array
    {
        printf("ingrese un entero p/guardar en posicion %d\n", i);
        scanf("%d", &arrInput[i]); /* guarda cada elemento en una posicion distinta del
                                array porque en cada iteracion, en el [] se le pasa el
                                valor de 'i', muy inteligente
                               */
    }

    printf("Los elementos del array son: ");
    for (int i = 0; i < arrInputLength; i++)
    {
        printf("%d, ", arrInput[i]); // prints each array element
    }

    return 0;
}