#include <stdio.h>
#include <string.h>
int main()
{
    char a[9] = "fo"; //en el ultimo de todos, se tiene que pensar bien el size
    char b[7] = "ot"; 
    char c[5] = "ba";
    char d[3] = "ll";

    strcat(a, strcat(b, strcat(c, d)));

    printf("%s", a);
    //imprime footbal correctamente

    return 0;
}