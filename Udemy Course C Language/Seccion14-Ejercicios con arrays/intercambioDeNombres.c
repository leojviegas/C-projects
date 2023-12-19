#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//hacer 2 arrays de cadenas de caracteres
//almacenar 2 nombres cada uno dentro de su respectiva variable
//y luego intercambiar el contenido de los arrays

int main()
{
    char nombre1[20] = "primeriardo";
    char nombre2[20] = "segundano";
    char placeHolder[20];

    printf("Escriba el 1er nombre: \n");
    fgets(nombre1, 20, stdin);
    strtok(nombre1, "\n");
    printf("\n");
    
    printf("Ahora escriba el 2do nombre: \n");
    scanf("%s", &nombre2);
    printf("\n");
    
    printf("Names before swap:\n");
    printf("nombre1: %s\n", nombre1);
    printf("nombre2: %s\n", nombre2);
    printf("\n");
    printf("Names after swap:");
    printf("\n");
    
    strcpy(placeHolder, nombre1);
    strcpy(nombre1, nombre2);
    strcpy(nombre2, placeHolder);

    printf("nombre1: %s\n", nombre1);
    printf("nombre2: %s\n", nombre2);



    return 0;
}