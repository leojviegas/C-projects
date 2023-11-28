#include <stdio.h>
int main()
{
    char letter = 'A';

    do
    {
        printf("The ASCII number for the letter %c is: %d\n", letter, letter);
        letter++;
    } while (letter <= 'z');

    return 0;
}