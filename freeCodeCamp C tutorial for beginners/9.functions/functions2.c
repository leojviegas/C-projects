#include <stdio.h>

int main()
{
    char nombreUsuario[20];
    int edadUsuario = 0;
    printf("cual es tu nombre?\n");
    scanf("%s", &nombreUsuario);
    printf("y tu edad?\n");
    scanf("%d", &edadUsuario);

    saludar(nombreUsuario, edadUsuario);

    return 0;
}

void saludar(char nombre[], int edad)
{
    printf("Hola %s, tenes %d annos\n", nombre, edad);
}
