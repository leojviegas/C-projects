#include <stdio.h>

int main()
{
    char buen[20] = "buen";
    char ardo[20] = "ardo";

    printf("silaba1: %s\n", buen);
    printf("silaba2: %s\n", ardo);

    strcat(buen, ardo);
    printf("palabra entera: %s\n", buen);

    
    return 0;
}