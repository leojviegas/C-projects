#include <stdio.h>
#include <stdlib.h>

int main()
{
    // una constante es una variable que NO puede ser modificada
    // se la declara poniendo "const" adelante
    // buena practica: poner las constantes en MAYUSCULAS

    const float PI = 3.141592;

    printf("the first 7 digits of PI are %f\n", PI);
    printf("and its location in memory is %p\n", &PI);

    return 0;
}