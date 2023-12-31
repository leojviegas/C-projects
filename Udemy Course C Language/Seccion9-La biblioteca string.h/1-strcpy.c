#include <stdio.h>
#include <string.h> // libreria que ofrece funciones para trabajar con strings
// strcpy ('string copy'), copia el string del segundo parametro en la variable del 1ro
// strcpy(variableDestino, "string o variable fuente")
// la capacidad de la variable 'char randomName[x]' de destino debe ser igual o mayor que la de fuente (el numero de elementos)
int main()
{
    char sourceVar[] = "exampleString1";
    char destinationVar1[15];
    char destinationVar2[15];
    strcpy(destinationVar1, sourceVar);
    printf("The string copied from sourceVar to 'destinationVar1' is:\n%s", destinationVar1);

    strcpy(destinationVar2, "exampleString2");
    printf("\n\nThe string on destinationVar2 (passing the string directly as a parameter in strcpy) is:\n%s\n", destinationVar2);

    printf("\nsize of sourceVar: %d", sizeof(destinationVar1));
    printf("\nstring length of sourceVar: %d", strlen(destinationVar1));
    /*it has 'a character less' that its size because of the null terminator */

    return 0;
} // antes no andaba Y AHORA SI: leer este post que hice para entender porque paja de comentar todo devuelta:
  //  https://www.reddit.com/r/C_Programming/comments/16htnjf/strange_behaviour_with_strcpy_not_working_if/