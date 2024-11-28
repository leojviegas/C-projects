#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct Persona
{
    char nombre[20];
    int edad;
    bool isAlive;
}
persona1 = {"Leonardo", 26, true}, // acá el chabón como que las declara e inicializa(define) acá, antes del main, ES más rapido, sí.
persona2 = {"Mariana", 33, true},
persona3 = {"Ricardo Fort", 45, false};

int main() // la otra es declararlas acá como hice en freeCodeCamp.../structs.c
{
    printf("nombre de persona3: %s\n", persona1.nombre);
    printf("edad: %d\n", persona1.edad);
    printf("Esta vivo?: %d\n", persona1.isAlive);

    return 0;
}