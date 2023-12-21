#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct Persona
{
    char nombre[20];
    int edad;
};

int main()
{
    struct Persona persona1, persona2;
    printf("Escribe tu nombre: \n");
    fgets(persona1.nombre, 20, stdin);
    strtok(persona1.nombre, "\n");
    printf("Ahora tu edad: \n");
    scanf("%d", &persona1.edad);
    
    fflush(stdin); //averiguar BIEN QUE HACE ESTO, porque sin esto no funciona.
                    //aparentemente se "llenó el buffer de entrada" (averiguar bien qué significa que se haya "llenado")

    printf("Escribe el nombre de otra persona: \n");
    fgets(persona2.nombre, 20, stdin);
    strtok(persona2.nombre, "\n");
    printf("Ahora su edad: \n");
    scanf("%d", &persona2.edad);

    printf("Tu nombre es: %s\n", persona1.nombre);
    printf("Tu edad es: %d\n", persona1.edad);

    printf("El nombre de la otra persona es: %s\n", persona2.nombre);
    printf("Su edad: %d\n", persona2.edad);
    system("pause");

    return 0;
}