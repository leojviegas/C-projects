#include <stdio.h>
#include <string.h>

int main()
{
    char arrNombreUsuario[20];
    char arrDestination[20];
    printf("Escriba un nombre: ");
    fgets(arrNombreUsuario, 20, stdin);
    strtok(arrNombreUsuario, "\n");

    strcpy(arrDestination, arrNombreUsuario);

    printf("La variable arrDestination ahora contiene el valor: %s", arrDestination);



    return 0;
}