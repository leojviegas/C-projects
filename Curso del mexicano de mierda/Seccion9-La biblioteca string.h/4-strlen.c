#include <stdio.h>
#include <string.h>

/* se usa para medir el largo del string (que recordar, es un array de caracteres
en realidad), SIN contar el "null terminator" (el caracter que está al final de
todos los strings para indicarle al programa que "terminó el array").

OJO: no confundir cno sizeof(), que mide 'la capacidad' del array donde está
contenido dicho string, mas allá de su largo.
*/
int main()
{

    char arrString[20] = "ejemplo"; /*acá hay 7 caracteres,
                                    sin contar el null terminator*/
    char userInput[200];

    printf("%s\n", arrString);

    /*acá le doy al for loopcomo limite el lengh
    del mismo array, para que no pierda tiempo
    imprimiendo los 4 indexes vacio: 20(size of array) - 16 (length of string inside)
    */
    for (int i = 0; i < strlen(arrString); i++)
    {
        printf("%c, ", arrString[i]);
    }
    printf("\nel length del string en arrString es de %d", strlen(arrString));
    printf("\nel tamanno/capacidad de arrString es de %d", sizeof(arrString));

    printf("\n\n");
    printf("\nEscribi lo que quieras: ");
    fgets(userInput, 200, stdin);
    strtok(userInput, "\n"); // Para sacarle el \n que ocurre cada vez que introducis un string
    printf("\nEl largo del string que escribiste es de: %d", strlen(userInput));

    return 0;
}