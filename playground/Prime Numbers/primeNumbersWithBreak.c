#include <stdio.h>
#include <stdlib.h>

/*
El mismo código de numeros primos que está en el playground pero
implementando lo de continue (y break posiblemente)
*/
int main()
{
    int firstNum = 1;
    int secondNum = 100;

    printf("Find all prime numbers in a range of numbers\n");
    printf("Insert first positive (not 0) integer of the range: \n");
    scanf("%d", &firstNum);
    while (firstNum <= 0)
    {
        printf("ERROR: first number can't be less than or equal to 0: \n");
        scanf("%d", &firstNum);
    }

    printf("now insert up to what number you want to find prime numbers: \n");
    scanf("%d", &secondNum);
    while (secondNum <= firstNum)
    {
        printf("ERROR: second number can't be less than or equal to first number: \n");
        scanf("%d", &secondNum);
    }
    printf("the prime numbers from %d to %d are: \n", firstNum, secondNum);
    for (int i = firstNum; i <= secondNum; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if (j == i)
            {
                printf("%d, ", i);
            }
            if (i % j == 0)
            {
                break;
            }
        }
    }
    printf("\n");
    system("pause");
    return 0;
}

/*
PSEUDOCÓDIGO

todos los numeros primos del 1 al 100

puntero i para el numero objetivo
    puntero j para dividir al numero i por todos los nums entre j e i
        bucle para dividir i por 1 hasta si mismo (j va a ir valiendo desde 1 hasta el mismo i)
                si al dividir algun numero j por i, el modulo da 0
                    ese numero I ya no es primo, CONTINUAR con el siguiente I
                    evidentemente si lo de arriba no se cumplio hasta que j llegue a
                    valer lo mismo que I, es porque se encontro un primo, IMPRIMILO







*/