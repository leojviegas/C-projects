#include <stdio.h>
// tablas (o 2D arrays). (uno puede hacer arrays de las dimensiones que quiera)
int main()
{
    int oddNumbers[3][5] = {{11, 13, 15, 17, 19}, {21, 23, 25, 17, 29}, {31, 33, 35, 37, 39}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d   ", oddNumbers[i][j]);
        }
        printf("\n");
    }

    int oddNumbersLength = sizeof(oddNumbers) / sizeof(oddNumbers[0][0]);
    
    printf("total size of the 2D array: %d bytes\n", sizeof(oddNumbers));
    printf("2D array total length: %d\n", oddNumbersLength);
    printf("size of the 1st element (another array): %d bytes", sizeof(oddNumbers[0]));

    return 0;
}