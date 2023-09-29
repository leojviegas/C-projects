#include <stdio.h>
#include <Windows.h>

int contarHastaCero(int n);
int main()
{
    int n = 0;
    printf("Ingrese numero a empezar: ");
    scanf("%d", &n);
    contarHastaCero(n);

    return 0;
}

int contarHastaCero(int n)
{
    if (n <= 0)
    {
        printf("se llego a 0");
    }
    else
    {
        printf("%d\n", n);
        Sleep(50);
        contarHastaCero(n-1);
    }
}
