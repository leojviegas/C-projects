#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
//la libreria stdlib (de standard library) provee funciones del sistema 
//como 'system(y aca puede ir cualquier comando que se pueda escribir directamente en la consola)'

int main()
{
    int number = 0;
    int length = 65535;
    int input;
    do
    {
    printf("type 1 to clean console:\n");
    scanf("%d", &input);
    } while (input != 1);
    system("cls"); //cls es un comando que se puede usar en la consola para limpiarla (clear screen)
    system("pause"); //pause genera una pausa en la linea de comandos y avisa al usario para continuar
    return 0;
}