#include <stdio.h>

int fibonacci(int num);

int main()
{
    int number = 0;
    printf("Ingrese un numero: ");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        printf("fibonacci(%d) = %d\n", i, fibonacci(i));
    }

    return 0;
}

int fibonacci(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return (fibonacci(num-1) + fibonacci(num-2));
    }
}