// sumar un numero y restar el siguiente
#include <stdio.h>

int main()
{
    int limite = 0;
    int resultado = 0;
    printf("hasta que numero queres sumar y restar en bucle?\n");
    scanf("%d", &limite);

    int x = 0; // x es el acumulador
    for (int i = 1; i < limite; i++)
    {
        if (i % 2 != 0)
        {
            x -= i;
        }
        else if (i % 2 == 0)
        {
            x += i;
        }
    }
    resultado = x;
    printf("\nresultado: %d", resultado);
    return 0;
}