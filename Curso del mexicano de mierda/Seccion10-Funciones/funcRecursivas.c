#include <stdio.h>
#include <math.h>
// una funcion recursiva es una funcion que se llama a si misma
int a(int x);
long factorial(int num);
int main()
{
    int x = 4;
    int num = 31;

    int resultado = a(x);
    printf("el resultado es %d", resultado);

    long numFactorial = factorial(num); // calculo de numero factorial con funcion recursiva
    printf("\n el resultado del factorial de %d es %d", num, numFactorial);
    return 0;
}

int a(int x)
{
    if (x = 5)
    {
        return x;
    }
    else
    {
        a(x++); // se vuelve a llamar dentro de la misma funcion (se incrementa cada vez)
    }
}

long factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}