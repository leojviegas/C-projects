#include <stdio.h>
#include <stdlib.h>

int main()
{

char color[20];
char pluralNoun[20];
char verb[20];
char celebrityF[20];
char celebrityL[20];


//NOTA: el &(ampersand) no es obligatorio en strings
//pero si en los otros tipos de datos
printf("insert a color: ");
scanf("%s", &color);
printf("insert a plural noun: ");
scanf("%s", pluralNoun);
printf("now insert a verb: ");
scanf("%s", &verb);
printf("insert the name of a celebrity: ");
scanf("%s%s", celebrityF, celebrityL);

printf("\nroses are %s\n", color);
printf("%s are blue\n", pluralNoun);
printf("i %s %s %s\n", verb, celebrityF, celebrityL);


    return 0;
}