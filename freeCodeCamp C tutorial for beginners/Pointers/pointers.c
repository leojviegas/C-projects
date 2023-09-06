#include <stdio.h>
#include <stdlib.h>

    //a pointer is JUST ANOTHER DATATYPE
    //LIKE INT is an integer number or CHAR is a character, a pointer is a memory adress

    //cuando se crea una variable pointer, no se le puede asignar un valor A34F...random
    //asi que lo que se hace es guardar la memory adress de alguna variable ya en uso en el codigo

int main()
{
     //creando la variable 'tipo pointer', que va a almacenar la memory adress de la variable 'age' 
    int age = 30; 
    int* pAge = &age;  //para nombrarla, se suele poner una 'p' adelante y...
    // luego el nombre de la variable cuya posicion en memoria estoy guardando

    printf("The memory adress of 'age' is: %p\n", &age);
    printf("Again, it's: %p\n\n", pAge);
    
    //en vez de imprimir "30", imprime "0061FF1C" 



    return 0;
} 