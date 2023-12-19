/* hacer un array de 10 numeros desdordenados
luego ordenalos con el metodo burbuja
despues perdir un dato a buscar y
utilizar la busqueda binaria para determinar si existe o no
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int array[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int arrayLength = sizeof(array) / sizeof(array[0]);
    int aux = 0;
    

    printf("Unsorted array: \n");
    for (int i = 0; i < arrayLength; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("\n");

    // metodo "burbuja" para ordenar el array
    for (int i = 0; i < arrayLength; i++)
    {
        for (int j = 0; j < arrayLength-1; j++) //importante el -1 acá, porque sino...
        {
            if (array[j] > array[j + 1])
            {
                aux = array[j];
                array[j] = array[j + 1]; //...acá se va a pasar de los límites del array
                array[j + 1] = aux;
            }
        }
    }

    printf("Sorted array: \n");
    for (int i = 0; i < arrayLength; i++)
    {
        printf("%d, ", array[i]);
    }
    // la busqueda binaria/logarítmica es más rapida que al busqueda normal (secuencial)
    // porque va logarítmicamente buscando el numero, dividiendo a la mitad el array en cada iteración
    // importante: el array tiene que estar ORDENADO de antemano, sino no va funcionar

    int numberToFind = 0;
    bool numberFound = false;
    int inf = array[0];
    int sup = array[arrayLength - 1];
    int mitad = 0;
    printf("The array was sorted. Type a number to find in inside the array: \n");
    scanf("%d", &numberToFind);

    while (inf <= sup)
    {
        mitad = (inf + sup) / 2;
        if (array[mitad] == numberToFind)
        {
            numberFound = true;
            break;
        }
        else if (array[mitad] > numberToFind)
        {
            sup = mitad;
        }
        else if (array[mitad] < numberToFind)
        {
            inf = mitad;
        }
    }
    if (numberFound = true)
    {
        printf("Number %d found! at position: [%d]", numberToFind, array[mitad-1]);
    }
    else
        printf("Number not found");

    return 0;
}