#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// el archivo se puede leer de una linea a la vez
// con fgets
int main()
{

    char currentLine[512] = "";
    char lastLine[512] = "";
    bool endOfFile = false;
    FILE *fpointer = fopen("fileToRead.txt", "r");

    for (int i = 0; endOfFile == false; i++)
    {
        fgets(currentLine, 512, fpointer);
        if (strcmp(currentLine, lastLine) == 0){ /* si ambos son iguales es porque se llego al final del archivo, 
                                                    y se cambia la variable a true para cortar el loop*/
            endOfFile = true;
        }
        else
        {
            printf("Line %d: %s", i + 1, currentLine);
            strcpy(lastLine, currentLine); //asignando "string" currenLine a lastLine
        }
    } // cada vez que se usa 'fgets', se incrementa fpointer, y  VA A LEER LA SIGUIENTE LINEA
      // porque el puntero cuando "apunta al archivo" apunta a la 1ra linea del mismo
    fclose(fpointer);
    return 0;
}