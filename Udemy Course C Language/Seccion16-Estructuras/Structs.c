#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct NombreDeLaEstructura // no sé por qué acá el chabon le pone el typedef al principio si no hace falta
{
    int Variable_1;
    int Variable_2;
    int Variable_N;
};

struct persona
{
    char nombre[30];
    char apellido[30];
    char sexo;
    short unsigned int edad;
    bool isAlive;
};

void creandoTipoDeDato();
void crearPersona();

int main()
{
    creandoTipoDeDato();
    crearPersona();

    return 0;
}

void creandoTipoDeDato()
{
    //! Definimos un nuevo tipo llamado "MiTipoDeDato"
    //! Esto solo es otra manera de declarar un entero
    typedef int MiTipoDeDato;

    //* Ahora podemos crear variables del tipo "MiTipoDeDato"
    MiTipoDeDato Variable1;
    //* Pero tambien podemos seguir usando int
    int Variable2;
    printf("Escribe 2 enteros\n");
    scanf("%d %d", &Variable1, &Variable2);
    printf("\nNumeros digitados: %d, %d", Variable1, Variable2);
    printf("\n\n");

    struct NombreDeLaEstructura estructura1;
    estructura1.Variable_1 = 2;
    estructura1.Variable_2 = 4;
    estructura1.Variable_N = 69420;
}
void crearPersona()
{

    struct persona persona1;
    strcpy(persona1.nombre, "Leo");
    strcpy(persona1.apellido, "Viegas");
    persona1.edad = 27;
    persona1.sexo = 'M';
    persona1.isAlive = true;
    printf("%s %s %d %c %d", persona1.nombre, persona1.apellido, persona1.edad, persona1.sexo, persona1.isAlive);
}