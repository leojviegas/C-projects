#include <stdio.h>

int main()
{
    printf("the prime numbers from 1 to 100 are: \n");

    for (int i = 2; i < 98; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                i++;
                j = 1;
            }
        }
        printf("%d\n", i);
    }

    return 0;
}