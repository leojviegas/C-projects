#include <stdio.h>
#include <stdlib.h>

int main()
{
   int age = 0;
   char name[20];

    printf("ingrese su nombre: ");
    scanf("%s", name);

    printf("Ahora ingrese su edad: ");
    scanf("%d", &age);

    printf("Su nombre es %s y tiene %i anos uwu ewe", name, age);

    return 0;
}