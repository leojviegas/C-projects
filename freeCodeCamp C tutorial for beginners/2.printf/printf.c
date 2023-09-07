#include <stdio.h>

int main()
{
    // para imprimir comillas hay que poner backslash (\) antes:
    printf("si quisiera imprimir unas comillas\n");
    printf("tengo que usar un backslash antes de la comilla: \"\n");

    // para imprimir un numero, se pone el % (FORMAT SPECIFIER) y la letra indicando el datatype (i=int, c=char, s=string of chars, f=float,etc), y luego se pasa el número como parámetro.
    //Con los strings pasa lo mismo, pero poniendo %s

    printf("el numero elegido es %i\n", 299);
    printf("%s %i\n\n\n", "y el siguiente es", 300);
    //Es lo mismo que si se imprimir una variable, solo que en vez del numero iría el nombre de la variable, y el % dependiendo de la datatype de la variable

    int numero = 20;
    char letra = 'E';
    char string[32] = "Hola";
    float numeroDecimal = 23.54;

    printf("el numero es %i\n", numero);
    printf("la letra es %c\n", letra);
    printf("el string es %s\n", string);
    printf("y el %s es %f\n", "numero decimal",  numeroDecimal);

    return 0;
}