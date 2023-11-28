#include <stdio.h>

int main()
{
    int limite = 0;
    printf("insert int limit\n");
    scanf("%d", &limite);

    printf("\n mulitples of 5: \n");
    for (int i = 0; i < limite; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}
