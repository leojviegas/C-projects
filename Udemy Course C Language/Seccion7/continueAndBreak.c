#include <stdio.h>

/*
El "continue" y el "break" sirven para cuando se está en un loop
y se quiere salir de la iteración actual
(del mismo modo que un "return" en una funcion)

    *"continue" hace terminar la iteracción actual y pasar a la siguiente del loop
    *"break" hace terminar no solo la iteracción actual, sino que tambien hace salir
    del loop directamente
*/
int main()
{
    printf("for loop con un 'continue': ");
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            continue; // Cuando se cumpla la codición i == 5, el programa va a continuar a la siguiente iteracion (irá al i++)
        }
        printf("%d, ", i); // Esto no se ejecuta (y el 5 no se imprime), y pasa a la siguiente iteracion
    }

    printf("\n");
    printf("for loop con un 'break': ");
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break;         // Pero acá cuando se cumpla la condición, no solo se salteará la ejecución de abajo,
        }                  // sino que va a salir del for loop directamente
        printf("%d, ", i); // El 5 no se ejecuta y ninguno de los numeros
    }                      // siguientes tampoco porque ya salió del loop

    return 0;
}