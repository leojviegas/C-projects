#include <stdio.h>
#include <string.h>
#define nn 164 // ASCII code for 'ñ'
#define NN 165 // ASCII code for 'Ñ'
//TO CREAR FILE NAME WITH 'Ñ', THE NUMBER IS '209', NOT 165 LIKE ABOVE. IDK WHY

void create10Files(); // prototyping the functions below main in orde to call it propertly
void create100Files();
void create100FilesToFindN();
int main()
{
    char response[16];
    char queEsManio[16] = "que es mano?\n";
    queEsManio[9] = nn;

    while (strcmp(response, queEsManio) != 0)
    {
        printf("Disculpe, tiene ma%co?\n", nn);
        fgets(response, 20, stdin);
    }
    if (strcmp(response, queEsManio) == 0)
    {
        create100Files();
        for (int i = 0; i < 1; i++)
        {
            printf("UN HUEVO DE ESTE TAMA%cO ", NN);
            printf("JAJAJAJAJAJAJAJAJA ");
        }
        return 0;
    }
}

void create10Files()
{
    char fileName[64] = "testing/MANO00.txt"; // averiguar como hacer para reemplazar el leojv por cualquiera sea el nombre de usuario
    fileName[10] = 209;

    int unitsDigitLimit = 10;
    int unitsDigitPosition = 13;
    for (int i = 0; i < unitsDigitLimit; i++)
    {
        fileName[unitsDigitPosition] = 48 + i; // incrementing the 'unit's digit' of the file name
        FILE *fpointer = fopen(fileName, "a");

        for (int i = 0; i < 1024; i++) // si quiero que pesesn 1GB c/u, acá poner 1.073.741.824
        {
            fprintf(fpointer, "UN HUEVO DE ESTE TAMAÑO "); // con un solo caracter. si son 2 caracteres, reducir el iterador a la mitad
        }
        fclose(fpointer);
    }
}

void create100Files()
{
    char fileName[64] = "testing/MANO00.txt"; // averiguar como hacer para reemplazar el leojv por cualquiera sea el nombre de usuario
    fileName[10] = 209;                       // changing the 'N' for 'Ñ'

    int unitsDigitLimit = 10;
    int unitsDigitPosition = 13;
    int tensDigitLimit = 10;
    int tensDigitPosition = 12;
    for (int j = 0; j < tensDigitLimit; j++)
    {
        fileName[tensDigitPosition] = 48 + j; // incrementing the 'tens digit'  of the file name

        for (int i = 0; i < unitsDigitLimit; i++)
        {
            fileName[unitsDigitPosition] = 48 + i; // incrementing the 'unit digit' of the file name
            FILE *fpointer = fopen(fileName, "a");
            for (int i = 0; i < 4096; i++) // si quiero que pesesn 1GB c/u, acá poner 1.073.741.824 (imprimiendo un solo caracter. si son 2 caracteres, reducir el iterador a la mitad
            {
                fprintf(fpointer, "UN HUEVO DE ESTE TAMAÑO ");
            }
            fclose(fpointer);
        }
    }
}

void create100FilesToFindN()
{
    char fileName[64] = "testing/MANO00.txt";
    for (int i = 0; i < 10; i++)
    {
        fileName[10] = 209;
        FILE *fpointer = fopen(fileName, "w");
        fprintf(fpointer, "A");
        fclose(fpointer);
    }
}