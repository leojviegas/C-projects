/* digite un numero
si el numero supera a 10, multiplique los 10 1ros numeros
sino, sumelos
*/
#include <stdio.h>
int main()
{
    int input = 0;
    printf("insert a number to get its factorial or total sum: \n");
    scanf("%d", &input);

    if (input <= 10)
    {
        printf("your number is smaller than 10, so it'll be factorized\n");
        int acc = 1;
        for (int i = 1; i <= input; i++)
        {
            acc *= i;
        }
        printf("\nResult of %d! is: %d", input, acc);
    }
    else
    {
        printf("your number is greater than 10, so it'll be totally summed up to itself");
        int acc = 0;
        for (int i = 1; i <= input; i++)
        {
            acc += i;
        }
        printf("\nResult of all numbers before %d added together is: %d", input, acc);
    }

    return 0;
}