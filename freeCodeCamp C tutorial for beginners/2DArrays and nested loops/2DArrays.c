#include <stdio.h>
#include <stdlib.h>

int main()
{
    // cuando se hacen arrays multidimensionales, hay que poner el limite (bounds)
    // de todas las dimensiones, salvo la 1ra que es opcional como en un array normal
    float nums[4][5] = {
        {0.0, 0.2, 0.4, 0.6, 0.8},
        {1.0, 1.2, 1.4, 1.6, 1.8},
        {2.0, 2.2, 2.4, 2.6, 2.8},
        {3.0, 3.2, 3.4, 3.6, 3.8},
    };

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%.2f   ", nums[i][j]);
        }
        printf("\n");
    }
    return 0;
}