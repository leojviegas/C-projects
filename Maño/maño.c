#include <stdio.h>
#include <string.h>
#define N 164  // ñ
#define NN 165 // Ñ

int main()
{
    char response[16];
    char queEsManio[16] = "que es mano?\n";
    queEsManio[9] = N;

    while (strcmp(response, queEsManio) != 0)
    {
        printf("Disculpe, tiene ma%co?\n", N);
        fgets(response, 20, stdin);
    }
    if (strcmp(response, queEsManio) == 0)
    {
        for (int i = 0; i < 30048; i++)
        {
            printf("UN HUEVO DE ESTE TAMA%cO ", NN);
        }
        for (int i = 0; i < 30048; i++)
        {
            printf("JAJAJAJA");
        }

        return 0;
    }
}