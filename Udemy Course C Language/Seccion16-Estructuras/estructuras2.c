#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct Persona
{
    char nombre[20];
    int edad;
    bool isAlive;
};

int main()
{

    struct Persona persona1, persona2, persona3; // acá estoy diciendo: voy a definir una nueva variable tipo "Persona", "llamada persona3"
    persona1.edad = 26;
    persona1.isAlive = true;
    strcpy(persona1.nombre, "Leonardo"); //(porque el tipo persona lo creé yo al crear la struct Persona)

    persona2.edad = 33;
    persona2.isAlive = true;
    strcpy(persona2.nombre, "Mariana");

    persona3.edad = 45;
    persona3.isAlive = false;
    strcpy(persona3.nombre, "Ricardo Fort");

    printf("nombre de persona1: %s\n", persona1.nombre);
    printf("edad: %d\n", persona1.edad);
    printf("Esta vivo?: %d\n", persona1.isAlive);

    return 0;
}