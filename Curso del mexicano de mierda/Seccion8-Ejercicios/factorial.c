#include <stdio.h>

int main()
{
    int input = 0;
    int acc = 1;

    printf("insert a number to get its factorial: \n");
     scanf("%d", &input);
    printf("you inserted: %d\n", input);

    for (int i = 1; i <= input; i++)
    {
        acc *= i;
    }

    printf("\nResult of %d! is: %d", input, acc);
    return 0;
}