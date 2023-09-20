#include <stdio.h>
#include <windows.h>
/*
esto es prototipar, declarar la funcion antes para que
el programa la pueda leer antes de llegar a main
y saber que existe
*/
int integerSum(int a, int b);
void showIntSumResult(int resultado); // acordarse de poner el datatype de los parametros
void saludar();
void printSizeOf();


int main()
{
    int resultOfSum = integerSum(3, 9);
    showIntSumResult(resultOfSum);
    saludar();

    return 0;
}

int integerSum(int a, int b)
{
    int x = a + b;
    if (x % 2 == 0)
    {
        saludar();
    }
    return x;
}
void showIntSumResult(int resultado)
{
    printf("The result of the previous sum is: %d", resultado);
}
void saludar()
{
    printf("\nhola ");
}

