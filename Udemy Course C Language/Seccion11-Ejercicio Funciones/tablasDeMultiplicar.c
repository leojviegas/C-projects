#include <stdio.h>
#include <stdlib.h>

void mostrarTablaDe(int num, int limite);

int main()
{
    int num = 0;
    int limite= 0;
    printf("Ingrese un numero para ver su tabla de multiplicar desde el 1 hasta el numero que quiera: \n");
    scanf("%d", &num);
    printf("Numero limite?\n");
    scanf("%d", &limite);

    mostrarTablaDe(num, limite);
    system("pause");
    return 0;
}

void mostrarTablaDe(int num, int limite)
{
    for (int i = 1; i <= limite; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
}