#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Un problema con scanf es que al introducir strings con espacios, CORTA en el 1er espacio que encuentra
    //para eso, en vez de scanf se usa fgets

    char fullName[40];
    printf("Ingrese su nombre COMPLETO: ");
    fgets(fullName, 40, stdin);
    printf("Su nombre completo es %s", fullName);



 


  

    return 0;
}