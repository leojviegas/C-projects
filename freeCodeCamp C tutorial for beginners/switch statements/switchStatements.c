#include <stdio.h>
// el switch sirve para comparar un valor contra muchos otros
// la sintaxis es casi igual que en javascript (creo que es igual)
int main()
{
    char grade;
    printf("ingrese su nota de la A a la F\n");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("muy bien");
        break;
    case 'B':
        printf("bien");
        break;
    case 'C':
        printf("regular");
        break;
    case 'D':
        printf("regular");
        break;
    case 'E':
        printf("bastante regular");
        break;
    case 'F':
        printf("desaprobado");
        break;
    default:
    printf("ERROR: nota desconocida");
        break;
    }

    return 0;
}