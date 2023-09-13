#include <stdio.h>
/*
1 = I
5 = V
10 = X
50 = L
100 = C
500 = D
1000 = M


*/
int main()
{
    int numero = 0;
    int unidades, decenas, centenas, miles;
    printf("introduzca un numero entero positivo (de hasta 4 digitos, no mas): \n");
    scanf("%d", &numero);
    int numeroOriginal = numero; //para poder mostrarlo al final no-modificado

    unidades = numero % 10;
    numero = numero / 10;
    decenas = numero % 10;
    numero = numero / 10;
    centenas = numero % 10;
    numero = numero / 10;
    miles = numero % 10;
    numero = numero / 10;

    printf("unidades: %d", unidades);
    printf("\ndecenas: %d", decenas);
    printf("\ncentenas: %d", centenas);
    printf("\nmiles: %d", miles);

    printf("\n\nEste es el numero %d en numeros romanos: ", numeroOriginal);
    switch (miles)
    {
    case 1:printf("M"); break;
    case 2: printf("MM"); break;
    case 3:printf("MMM"); break;
    case 4:printf("MMMM"); break;
    case 5:printf("MMMMM"); break;
    case 6:printf("MMMMMM"); break;
    case 7:printf("MMMMMMM"); break;
    case 8:printf("MMMMMMMM"); break;
    case 9:printf("MMMMMMMMM"); break;
    default: break;
    }
    
    switch (centenas)
    {
    case 1:
       printf("C"); break;
    case 2:
       printf("CC"); break;
    case 3:
        printf("CCC"); break;
    case 4:
       printf("CD"); break;
    case 5:
       printf("D"); break;
    case 6:
       printf("DC"); break;
    case 7:
       printf("DCC"); break;
    case 8:
       printf("DCCC"); break;
    case 9:
       printf("CM"); break;
    default: break;
    }
    
    switch (decenas)
    {
    case 1:
        printf("X"); break;
    case 2:
        printf("XX"); break;
    case 3:
        printf("XXX"); break;
    case 4:
       printf("XL") ; break;
    case 5:
       printf("L") ; break;
    case 6:
       printf("LX") ; break;
    case 7:
       printf("LXX") ; break;
    case 8:
       printf("LXXX") ; break;
    case 9:
      printf("XC")  ; break;
    default: break;
    }

    switch (unidades)
    {
    case 1:
        printf("I"); break;
    case 2:
        printf("II"); break;
    case 3:
        printf("III"); break;
    case 4:
        printf("IV"); break;
    case 5:
        printf("V"); break;
    case 6:
        printf("VI"); break;
    case 7:
        printf("VII"); break;
    case 8:
        printf("VIII"); break;
    case 9:
        printf("IX"); break;
    default: break;
    }
    if(numeroOriginal <= 3999)
    {
        printf("\nTener en cuenta que, en realidad, el maximo numero que se podria escribir con la notacion romana tradicional, es 3999,\n");
        printf("Ya que segun la regla, no se puede escribir mas de 3 veces seguidas el mismo simbolo (de aqui el limite de MMMCMXCIX)");
    }
    return 0;
}