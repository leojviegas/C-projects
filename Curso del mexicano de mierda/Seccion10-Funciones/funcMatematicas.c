#include <stdio.h>
#include <math.h> //Algunas funciones amtematicas de math.h

double PI = 3.1415;
int main()
{
  
    printf("ceil(3.1415): %.2f\n", ceil(PI));   // ceiling: redondea un numero con coma hacia abajo
    printf("floor(3.1415): %.2f\n", floor(PI)); // floor: idem pero hacia abajo
    printf("fabs(-13): %.2f\n", fabs(-13));     // find absolute: devuleve el equivalente positivo de un negativo
    printf("sqrt(49): %.2f\n", sqrt(49));       // square root: devuelve la raiz cuadrada
    printf("fmod(10, 9): %.2f\n", fmod(10, 9)); // find module: devuelve el modulo de ambos numeros, como n1 % n2
    printf("pow(4, 3): %.2f\n", pow(4, 3));     // power: eleva el 1er numero a la potencia del 2do

    return 0;
}