#include <stdio.h>
#include <stdlib.h>

int main()
{
    // OJO
    // si se opera entre 2 int, va a devolver un int SIEMPRE
    // si se opera entre 1 int y 1 float, va a devolver float

    // por eso acá en vez de devolver un float o un double (3.333333), devuelve un int, porque se está operando entre 2 int
    printf("%f\n", 10 / 3.0);

    // funciones matematicas nativas de C
    // pow (power of: potencia de)
    printf("pow %f\n", pow(3, 3));

    // sqrt (square root)
    printf("sqrt %f\n", sqrt(49));

    //ceil (ceiling, redondeando para arriba)
    printf("ceil %f\n", ceil(3.1416));

    //floor (redondeando para abajo)
    printf("floor %f\n", floor(3.1416));
    return 0;
}