#include <stdio.h>
#include <string.h>
int main()
{

    // create10Files(); // Creating 10 files
    create100Fiels();

    return 0;
}

void create10Files()
{
    char fileName[64] = "C:/Users/leojv/Desktop/test/employees00.txt"; // averiguar como hacer para reemplazar el leojv por cualquiera sea el nombre de usuario

    for (int j = 0; j < 10; j++)
    {
        fileName[38] = 48 + j; // incrementing the last '0' of the file name
        FILE *fpointer = fopen(fileName, "w");
        fprintf(fpointer, "Texto de prueba para el archivo");
        fclose(fpointer);
    }
}

void create100Fiels()
{
    char fileName[64] = "C:/Users/leojv/Desktop/test/employees00.txt";
    for (int i = 0; i < 10; i++)
    {
        fileName[37] = 48 + i; // incrementing the first '0' of the file name
        for (int j = 0; j < 10; j++)
        {
            fileName[38] = 48 + j; // incrementing the last '0' of the file name
            FILE *fpointer = fopen(fileName, "w");
            fprintf(fpointer, "Texto de prueba para el archivo");
            fclose(fpointer);
        }
    }
}