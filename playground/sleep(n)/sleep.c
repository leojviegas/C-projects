#include <stdio.h>
int main()
{
    //sleep sirve para esperar X cantidad de segundos entre una linea y la siguiente

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
        sleep(1); //va a esperar 1 segundo entre cada iteracion del loop
    }
    return 0;
}