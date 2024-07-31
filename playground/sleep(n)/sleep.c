#include <stdio.h>
#include <Windows.h>
int main()
{
    //Sleep() sirve para esperar X cantidad de segundos entre una linea y la siguiente

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i+1);
        Sleep(1000);//va a esperar 1000 milisegundo (osea 1 segundo) entre cada iteracion del loop. 
                    //OJO LA S VA EN MAYUSCULAS SINO NO ANDA
    }
    return 0;
}