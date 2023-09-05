#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombreUsuario[20];
    int edadUsuario = 0;
    printf("Escribi tu nombre:\n");
    scanf("%s", &nombreUsuario);
    
    printf("que edad tenes?\n");
    scanf("%d", &edadUsuario);
    saludar(nombreUsuario, edadUsuario);

    return 0;
}

void saludar(char nombre[], int edad)
{
    printf("Hola, %s! Tenes %d anios", nombre, edad);
}