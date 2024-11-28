#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[5];
    int total = 0;
    int numbersLength = sizeof(numbers) / sizeof(numbers[0]);
    int averageNumber;
    printf("Insert 5 positive numbers to find its average: \n");

    for (int i = 0; i < numbersLength; i++)
    {
        scanf("%d", &numbers[i]);
        total += numbers[i];
    }
    averageNumber = total / numbersLength;
    printf("The average of all numbers is %d\n", averageNumber);

    system("pause");
    return 0;
}