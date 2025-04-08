#include <stdio.h>

#define FIL 5
#define COL 10

int main()
{
    int a = 07; 
    int b = 0x11;

    printf("variable impresa como decimal: %d\n", a);
    printf("la misma variable impresa como octal: %o\n", a);

    int tablaMultHasta50[FIL][COL];

    for (int i = 0; i < FIL; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            tablaMultHasta50[i][j] = (i+1) * (j+1);
            printf("%d, ", tablaMultHasta50[i][j]);
        }
        printf("\n");
    }

    return 0;
}