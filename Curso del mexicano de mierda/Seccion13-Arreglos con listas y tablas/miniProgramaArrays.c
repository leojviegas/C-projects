#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main()
{
    int arrNum[10];
    int arrNumLength = sizeof(arrNum) / sizeof(arrNum[0]);
    int option = 0;
    printf("Bienvenido al programa para operar con un array de 10 elementos\n");
    printf("Ingrese 10 numeros enteros positivos (separados por espacio o enter): ");

    for (int i = 0; i < arrNumLength; i++)
    {
        scanf("%d", &arrNum[i]);
    }

    printf("\nEl array quedo conformado de la siguiente forma:\narrNum");
    for (int i = 0; i < arrNumLength; i++)
    {
        printf("[%d]", arrNum[i]);
    }

    printf("\n\nQue desea hacer? Ingrese el numero de la opcion que corresponda: \n\n");
    printf("1) Ingresar o modificar elementos del array\n");
    printf("2) Mostrar la suma de los elementos\n");
    printf("3) Realizar la multiplicacion de los elementos\n");
    printf("4) Realizar la suma solo de los elementos divisibles entre 3\n");
    printf("5) Multiplicar por 3 cada elemento del array\n");
    printf("6) Salir\n");

    scanf("%d", &option);

    switch (option)
    {
    case 1:
        /* code */
        break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;
    case 4:
        /* code */
        break;
    case 5:
        /* code */
        break;
    case 6:
        /* code */
        break;

    default:
        printf("Opcion no valida");
        break;
    }

    return 0;
}

void modifyElements()
{
}
void sumAllElements()
{
}
void multiplyElements()
{
}
void sumElementsDivisibleBy3()
{
}
void multiplyBy3()
{
}
