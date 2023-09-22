#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>
//numero random del 1 a 10
int main()
{
    srand(time(NULL)); //esto se pone para "semillear" a la función rand() con el tiempo actual, para que sea verdaderamente aleatorio
    int li = 1;  // limite inferior
    int ls = 10; // limite superior
    for (int i = 0; i < 10; i++)
    {
        int n = li + rand() % ((ls + 1) - li);
        printf("%d, ", n);
       // Sleep(500);
    }
    printf("\n");
    return 0;
}
