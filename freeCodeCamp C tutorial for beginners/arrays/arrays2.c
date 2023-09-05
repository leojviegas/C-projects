#include <stdio.h>

int main()
{
    int tenPrimeNumbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%d\n", tenPrimeNumbers[3]);
    tenPrimeNumbers[3] = 68658706;

    printf("%d\n", tenPrimeNumbers[3]);

    // cuando haces un string (variable nameString) en realidad estas haciendo un array de caracteres
    // y C te lo hace facil de escribir, pero en realidad lo que esta pasando es lo de la variable name

    char nameInString[] = "Leo";
    printf("%s\n", nameInString);

    printf("\n\n");

    char nameInArray[10] = {'L', 'e', 'o'};
    printf("%c%c%c\n", nameInArray[0], nameInArray[1], nameInArray[2]);

    return 0;
}
