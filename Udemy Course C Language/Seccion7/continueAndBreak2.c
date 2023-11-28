#include <stdio.h>

int main()
{
    for (int i = 1; i < 10; i++)
    {
        printf("%d: ", i);

        for (int j = 1; j <= i; j++)
        {
            if (j % 3 == 0)
            {
                break;
            }
            printf("%dXD ", j);
        }
        printf("\n");
    }

    return 0;
}