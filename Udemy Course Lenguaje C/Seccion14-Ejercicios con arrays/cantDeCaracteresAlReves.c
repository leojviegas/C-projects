// leer una cadena de caracteres y que devuelva el num. de caracteres que tiene ducha cadena,
// e imprimirla al revez
#include <stdio.h>
#include <string.h>

int main()
{
    char arrayOrigen[100] = "";
    char arrayDestino[100] = "";
    printf("Ingrese un texto: ");
    fgets(arrayOrigen, 50, stdin);
    strtok(arrayOrigen, "\n");

    int arrayOrigenLength = strlen(arrayOrigen);

    printf("El length de arrayOrigen es de %d\n", arrayOrigenLength);
    printf("Array al revez: ");

    for (int i = arrayOrigenLength-1, j= 0; i >= 0; i--, j++) //inicializando 2 contadores en el for y sumandolos ambos al final
    {
        arrayDestino[j] = arrayOrigen[i];
    }

    printf("%s", arrayDestino);

    return 0;
}