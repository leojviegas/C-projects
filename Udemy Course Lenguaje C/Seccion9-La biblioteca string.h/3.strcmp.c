#include <stdio.h>
#include <string.h>

/*
compara 2 strings (caracter a caracter), y si ambos son iguales devuelve 0
si son diferentes (si encuentra un par de caracteres que no son iguales), NO devuelve 0

*/
int main()
{
    char fruta[23] = "banana";
    char fruta2[23] = "banana";

    if (strcmp(fruta, fruta2) == 0)
    {
        printf("los strings son iguales");
    }
    else
    {
        printf("los strings NO son iguales");
    }
    return 0;
}