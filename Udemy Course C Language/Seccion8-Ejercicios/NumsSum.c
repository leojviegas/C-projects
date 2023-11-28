#include <stdio.h>

int main()
{
    int limite = 0;
    int cont = 0;
    int suma = 0;
    printf("hasta que numero queres sumar en bucle?\n");
    scanf("%d", &limite);
    
    while(cont <= limite)
    {
        suma +=cont;
        cont++;
    }
    printf("\nsuma total: %d", suma);
    return 0;
}