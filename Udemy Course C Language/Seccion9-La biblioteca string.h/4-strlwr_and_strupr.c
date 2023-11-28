#include <stdio.h>
#include <string.h>
//strlwr(string lower) pasa el todo el string a minusculas (como el .toLowerCase de JS)
//strupr(string upper) hace lo opuesto
int main()
{
    char userInput[200];
    printf("insert random text: \n");
    fgets(userInput, 200, stdin);
    printf("lowercaed text: %s\n", strlwr(userInput));
    printf("upercased text: %s\n", strupr(userInput));




    return 0;
}