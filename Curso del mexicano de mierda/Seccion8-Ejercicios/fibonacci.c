#include <stdio.h>
// display fibonacci sequence
int main()
{
    int a = 0;
    int b = 1;
    int c;
    for (int i = 0; i < 20; i++)
    {
        c = a + b;
        printf("\n %ld, ", c);
        a = b; 
        b = c;
    }

    return 0;
}