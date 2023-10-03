#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void printArray(int arrNum[], int arrNumLength);
void modifyElements(int arrNum[]);
void sumAllElements(int arrNum[]);
void multiplyAllElements(int arrNum[]);
void sumElementsDivisibleBy3(int arrNum[]);
void multiplyBy3(int arrNum[]);

int arrNum[10];
int arrNumLength = sizeof(arrNum) / sizeof(arrNum[0]);
int option = 0;

int main()
{
    printf("Bienvenido al programa para operar con un array de 10 elementos\n");
    printf("Ingrese 10 numeros enteros positivos (separados por espacio o enter): ");

    for (int i = 0; i < arrNumLength; i++)
    {
        scanf("%d", &arrNum[i]);
    }
    printArray(arrNum, arrNumLength);

    while (option != 6)
    {
        printf("\n\nQue desea hacer? Ingrese el numero de la opcion que corresponda:\n");
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
            printf("Opcion 1:\n");
            modifyElements(arrNum);
            printArray(arrNum, arrNumLength);
            break;
        case 2:
            printf("Opcion 2:\n");
            sumAllElements(arrNum);
            break;
        case 3:
            printf("Opcion 3:\n");
            multiplyAllElements(arrNum);
            break;
        case 4:
            printf("Opcion 4:\n");
            sumElementsDivisibleBy3(arrNum);
            break;
        case 5:
            printf("Opcion 5:\n");
            multiplyBy3(arrNum);
            printArray(arrNum, arrNumLength);
            break;
        case 6:
            printf("Opcion 6:\n");
            printf("Gracias por utilizar el programa!\n");
            break;

        default:
            printf("Opcion no valida");
            break;
        }
    }
    system("pause");
    return 0;
}


void modifyElements(int arrNum[])
{
    int indexToModify = -1;
    while (indexToModify < 0 || indexToModify > 9)
    {
        printf("Seleccione el indice del elemento que quiere modificar (del 0 al 9):\n");
        scanf("%d", &indexToModify);
    }
    printf("Que numero quiere insertar en la posicion %d?\n", indexToModify);
    scanf("%d", &arrNum[indexToModify]);
}

void sumAllElements(int arrNum[])
{
    int c = 0;
    for (int i = 0; i < arrNumLength; i++)
    {
        c += arrNum[i];
    }
    printf("La suma de todos los elementos del array es: %d", c);
}

void multiplyAllElements(int arrNum[])
{
    int c = 1;
    for (int i = 0; i < arrNumLength; i++)
    {
        c *= arrNum[i];
    }
    printf("El producto de multiplicar todos los elementos del array es: %d", c);
}

void sumElementsDivisibleBy3(int arrNum[])
{
    int c = 0;
    for (int i = 0; i < arrNumLength; i++)
    {
        if (arrNum[i] % 3 == 0)
        {
            c += arrNum[i];
        }
    }
    printf("La suma de todos los elementos del array divisibles por 3 es: %d", c);
}

void multiplyBy3(int arrNum[])
{
    for (int i = 0; i < arrNumLength; i++)
    {
        arrNum[i] *= 3;
    }
}

void printArray(int arrNum[], int arrNumLength)
{
    printf("\nEl array quedo conformado de la siguiente forma:\narrNum[%d] = {", arrNumLength);
    for (int i = 0; i < arrNumLength; i++)
    {
        printf("%d", arrNum[i]);
        if (i != arrNumLength - 1)
        {
            printf(", ");
        }
        
    }
    printf("}");
}