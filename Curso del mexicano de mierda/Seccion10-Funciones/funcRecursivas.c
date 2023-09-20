#include <stdio.h>
#include <math.h>
// una funcion recursiva es una funcion que se llama a si misma
long getFactorial(int num);

int main()
{
    int input = 0;
    printf("Escriba un numero positivo para obtener su factorial\n");
    scanf("%d", &input);

    long numFactorial = getFactorial(input); // cálculo de numero factorial con funcion recursiva
    printf("El resultado de %d! es: %d", input, numFactorial);
    return 0;
}

long getFactorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return (n * getFactorial(n - 1)); // se vuelve a llamar dentro de la misma funcion)
    }
}