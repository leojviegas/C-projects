#include <stdio.h>
#include <stdlib.h>
int main()
{
   unsigned char letter = 0;
    printf("The corresponding ASCII numbers for every character\n");
    for (int i = 0; i <= 255; i++)
    {
        letter = i;
        printf("Number %d --- character: %c\n", letter, letter);
    }
    return 0;
}