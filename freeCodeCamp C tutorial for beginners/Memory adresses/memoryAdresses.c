#include <stdio.h>
#include <stdlib.h>

int main()
{
    //para acceder a la posicion/dirección en memoria de una variable al imprimir
    //hay que poner el format specifier %p (de Pointer) y un & al lado de la variable

    int age = 30;
    printf("%p", &age);
    //en vez de imprimir "30", imprime "0061FF1C" 

    int personasEnCasaDeLeo = 3;
    printf("%d", personasEnCasaDeLeo); //"andá la casaDeLeo y decime cuántas personas viven ahi"
    //imprime 3, la cantidad de personas que viven ahi
    printf("%p", &personasEnCasaDeLeo); //andá a la casaDeLeo y decime cual es su direccion, NO lo que hay dentro
    //imprime laCrujia3518, la dirección de la casa donde están "almacenadas" las personas




    return 0;
}