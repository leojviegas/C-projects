#include <stdio.h>
#include <stdlib.h>

// a pointer is JUST ANOTHER DATATYPE
// LIKE INT is an integer number or CHAR is a character, a pointer is a memory adress

// cuando se crea una variable pointer, no se le puede asignar un valor A34F...random
// asi que lo que se hace es guardar la memory adress de alguna variable ya en uso en el codigo

int main()
{
    int age = 30;
    // creando la variable de tipo 'integer pointer', que va a almacenar la memory adress de la variable 'age'
    // es buena idea leer el '*' como 'pointer to' o 'pointing to'. O sea, 'int*' es 'pointer to integer' o 'pointing to integer'
    int *pAge = &age;    // para nombrarla, se suele poner una 'p' adelante y
                         //  luego el nombre de la variable cuya posicion en memoria se está guardando
    int **ppAge = &pAge; // y esto pasa a ser 'pointer to pointer to integer'

    printf("\nLa variable 'de tipo int' 'age' contiene el valor: %d\n", age);
    printf("Y la direccion en memoria de la variable 'age' (donde esta guardada fisicamente) es: %p", &age);
    printf("\nLo unico que hice fue 'guardar la direccion de memoria' de 'age' en otra variable, 'pAge' (de 'poining to 'age'')");
    printf("\nAca esta de nuevo, la variable 'de tipo puntero' 'pAge' vale: %p", pAge);
    printf("\n\nAlso, can i show (and later store) that 'pAge' variable in another variable? Let me try: %p", &pAge);
    printf("\nYes! I can. here it is again: The pointer variable 'ppAge' contains the value: %p", ppAge);

    int numberOfPets = 2;
    int *pNumberOfPets;
    pNumberOfPets = &numberOfPets;
    printf("\n%p", pNumberOfPets); // en vez de imprimir "30", imprime "0061FF1C"

    return 0;
}