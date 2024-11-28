#include <stdio.h>
#include <stdlib.h>

void decimalToBinary(int numero);

int main()
{
    int numero = 0;
    printf("Escriba un numero para convertirlo a binario: \n");
    scanf("%d", &numero);

    decimalToBinary(numero);

    return 0;
}

void decimalToBinary(int num)
{
    if (num > 1)
    {
        decimalToBinary(num / 2);
    }
    printf("%i", num % 2);
}
/* cada vez que termina una "iteración", este printf SE VUELVE A LLAMAR, porque cada llamado
 pertenece a cada una de las veces en que se entró en la función, por eso funciona

 */
