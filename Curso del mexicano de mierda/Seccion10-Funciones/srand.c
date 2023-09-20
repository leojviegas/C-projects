#include <stdio.h>
#include <time.h>
#include <math.h>
// srand(time(NULL)).
// srand da un numero aleatorio
int main()
{
    int num = 0;
    //srand(time(NULL));
    

    num = 1 + rand()%((10-1)-1); //este mexicano de mierda no explica una mierda qué hace cada cosa
    
    printf("%d", num);

    return 0;
}