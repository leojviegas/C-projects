#include <stdio.h>
#include <stdlib.h>

/* When you "dereference" a pointer,
you're going to the memory adress
saved inside that pointer variable,
and grabbing whatever value it's inside there*/

int main()
{
    int age;
    age = 30;
    
    int* pAge = &age;

    printf("The memory adress of 'age' is: %p\n", pAge);
    printf("The value stored inside that memory adress is: %d\n", *pAge);
    // cuando se pone el '*' delante de la variable pointer para traer su valor, pensar el '*' como 'value of' o 'value inside of'
    age = 40;
    printf("\nAlso, you cand do this: %p", &*&*&*&*pAge);
    printf("\nAlso, you cand do this: %d", age);
    // referencing and dereferencing again and again

    return 0;
}