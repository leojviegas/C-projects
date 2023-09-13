#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
        bool isNotPrime = false;
        for (int j = 2; j <= i && isNotPrime == false; j++)
        {
            if (i % j == 0)
            {
                isNotPrime = true;
            }
            if (j == i)
            {
                printf("%d, ", i);
            }
        }
    }
    printf("\n");
    system("pause");
    return 0;
}