#include <stdio.h>
#include <string.h>
int main()
{
    create10Files(); // Creating 10 files
    // create100Files();
    // create1000Files();
    return 0;
}

void create10Files()
{
    char fileName[64] = "testFile00.txt"; // averiguar como hacer para reemplazar el leojv por cualquiera sea el nombre de usuario

    for (int i = 0; i < 10; i++)
    {
        fileName[9] = 48 + i; // incrementing the 'unit's digit' of the file name
        FILE *fpointer = fopen(fileName, "a");
        for (int i = 0; i < 1024; i++) // si quiero que pesesn 1GB c/u, acá poner 1.073.741.824
        {
            fprintf(fpointer, "A"); //con un solo caracter. si son 2 caracteres, reducir el iterador a la mitad
        }
        fclose(fpointer);
    }
}

void create100Files()
{
    char fileName[64] = "testFile00.txt";
    for (int j = 0; j < 10; j++)
    {
        fileName[8] = 48 + j; // incrementing the 'tens digit'  of the file name
        for (int i = 0; i < 10; i++)
        {
            fileName[9] = 48 + i; // incrementing the 'unit digit' of the file name
            FILE *fpointer = fopen(fileName, "w");
            fprintf(fpointer, "Texto de prueba para el archivo");
            fclose(fpointer);
        }
    }
}

void create1000Files()
{
    char fileName[64] = "testFile00.txt";

    for (int k = 0; k < 10; k++)
    {
        fileName[7] = 48 + k; // incrementing the 'hundred's digit' of the file name
        for (int j = 0; j < 10; j++)
        {
            fileName[8] = 48 + j; // incrementing the 'ten's digit' of the file name
            for (int i = 0; i < 10; i++)
            {
                fileName[9] = 48 + i; // incrementing the 'unit's digit' of the file name
                FILE *fpointer = fopen(fileName, "a");
                fprintf(fpointer, "JA");
                fprintf(fpointer, "JA");
                fclose(fpointer);
            }
        }
    }
}