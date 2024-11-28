#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct NombreDeLaEstructura  //no sé por qué acá el chabon le pone el typedef al principio si no hace falta
{
    char nombre[50];
    char genero[10];
    int edad;
    bool tieneMascota;
    
};


int main()
{
    typedef int gastos; //con esto estoy definiendo un nuevo "tipo de dato", o sea un datatype pero creado por mi
    gastos comida = 23;
    int presupuesto = 50; //lo puedo usar de la misma manera que uso un int regularmente


    

    return 0;
}