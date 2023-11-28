#include <stdio.h>
#include <string.h>
/*s         ---------strrchr(string return character)
syntax: strrchr(string, char) devuelve el string que le pasaste como
1er parametro, pero empezando recien desde el ultimo lugar donde haya encontrado
el caracter que le hayas pasado como 2do parametro (que en realidad es el 1er lugar, porque 
empieza analizando de derecha a izquierda)
*/
int main()
{
    char text[] = "example text";
    printf("%s", strrchr(text, 'e')); //devuelve 'ext'


    return 0;
}