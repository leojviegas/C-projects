#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

// el archivo se puede leer de una linea a la vez
// con fgets
int main()
{

    char currentLine[512] = "";
    FILE *fpointer = fopen("fileToRead.txt", "r");

    /* el EOF (End Of File), vale -1, y se alcanza cuando se llega al final del archivo.
    Abajo se esta usando para cortar el loop y que deje de imprimir
    */
    int i = 0;

    while (fscanf(fpointer, "%s", currentLine) != EOF)
    {
        fgets(currentLine, 512, fpointer);
        printf("Line %d: %s", i + 1, currentLine);
        i++;
    }
    if (fscanf(fpointer, "%s", currentLine) == EOF)
    {
        printf("\nEOF (End Of File) reached");
    }

    fclose(fpointer);
    return 0;
}