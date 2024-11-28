#include <stdio.h>
// display fibonacci sequence
int main()
{
    int a = 0;
    int b = 1;
    int c;
    int limite = 0;
    printf("Ingrese un numero: ");
    scanf("%d", &limite);
    for (int i = 0; i < limite; i++)
    {
        c = a + b;
        printf("fibonacci(%d) = %ld\n", i+1, c);
        a = b; 
        b = c;
    }

    return 0;
}