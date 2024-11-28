#include <stdio.h>
#include <windows.h>
/*
esto es prototipar, declarar la funcion antes para que
el programa la pueda leer antes de llegar a main
y saber que existe
(en realidad si yo compilo sin hacerlo, acá me deja, PERO
me tira una advertencia: "warning: implicit declaration of function")
*/
int integerSum(int a, int b);
void showIntSumResult(int resultado); // acordarse de poner el datatype de los parametros
void saludar();
void printEsPar();


int main()
{
    saludar();
    int resultOfSum = integerSum(3, 9); //le pasas los valores de los parametros, pero los declaras ABAJO
    showIntSumResult(resultOfSum); //llamando a otra función, esta vez le paso como parámetro una variable (en este caso, el retorno de la funcion anterior)

    return 0;
}

int integerSum(int a, int b) //las variables quedan declaradas ACÁ
{
    int x = a + b;
    if (x % 2 == 0)
    {
        printEsPar(); //Una funcion siendo llamada desde dentro de otra función
    }
    return x;
}

void showIntSumResult(int resultado)
{
    printf("El resultado de la suma es: %d", resultado);
}

void saludar()
{
    printf("\nHola\n");
}

void printEsPar()
{
    printf("El resultado va a ser par!\n");
}
