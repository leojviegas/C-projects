#include <stdio.h>
#include <string.h>

int main()
{
    char nombre1[30];
    int edad1;
    char nombre2[30];
    int edad2;
    char nombre3[30];
    int edad3;
    char nombre4[30];
    int edad4;
    char nombre5[30];
    char nombre6[30];
    char nombre7[30];
    char nombre8[30];

    printf("ingrese nombre1\n");
    fgets(nombre1, 30, stdin);
    strtok(nombre1, "\n");
    // scanf("%d", &edad1);

    printf("ingrese nombre2\n");
    fgets(nombre2, 30, stdin);
    strtok(nombre1, "\n");
    // scanf("%d", &edad2);

    printf("ingrese nombre3\n");
    fgets(nombre3, 30, stdin);
    strtok(nombre3, "\n");
    // scanf("%d", &edad3);

    printf("ingrese nombre4\n");
    fgets(nombre4, 30, stdin);
    strtok(nombre4, "\n");
    // scanf("%d", &edad4);

    printf("ingrese nombre5\n");
    fgets(nombre5, 30, stdin);
    strtok(nombre5, "\n");

    printf("ingrese nombre6\n");
    fgets(nombre6, 30, stdin);
    strtok(nombre6, "\n");

    printf("ingrese nombre7\n");
    fgets(nombre7, 30, stdin);
    strtok(nombre7, "\n");

    printf("ingrese nombre8\n");
    fgets(nombre8, 30, stdin);
    strtok(nombre8, "\n");

    printf("Nombre 1: %s\n", nombre1);
    printf("Nombre 2: %s\n", nombre2);
    printf("Nombre 3: %s\n", nombre3);
    printf("Nombre 4: %s\n", nombre4);
    printf("Nombre 5: %s\n", nombre5);
    printf("Nombre 6: %s\n", nombre6);
    printf("Nombre 7: %s\n", nombre7);
    printf("Nombre 8: %s\n", nombre8);

    return 0;
}