#include <stdio.h>

// el archivo se puede leer de una linea a la vez
// con fgets
int main()
{

    char line[255];
    FILE *fpointer = fopen("employeesCopy.txt", "r");

    fgets(line, 255, fpointer);
    printf("The 1st line of the file is: %s", line);
    fgets(line, 255, fpointer); // cada vez que se usa, se incrementa fpointer, y  VA A LEER LA SIGUIENTE LINEA
    // porque el puntero cuando "apunta al archivo" apunta a la 1ra linea del mismo
    printf("The 2nd line of the file is: %s", line);

    fclose(fpointer);
    return 0;
}