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
    return 0;
}