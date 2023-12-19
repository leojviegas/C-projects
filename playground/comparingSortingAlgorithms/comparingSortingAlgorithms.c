#include <stdio.h>

int main()
{
    int superArray[10000] = {0};
    for (int i = 0; i < 10000; i++)
    {
        superArray[i] = i;
        printf("%d, ", superArray[i]);
    }
    


    int arrayLength = sizeof(superArray) / sizeof(superArray[0]);
    int aux = 0;

    // metodo "burbuja"
    
    for (int i = 0; i < arrayLength; i++)
    {
        for (int j = 0; j < arrayLength; j++)
        {
            if (superArray[j] > superArray[j + 1])
            {
                aux = superArray[j];
                superArray[j] = superArray[j + 1];
                superArray[j + 1] = aux;
            }
        }
    }
    

    // metodo de la manera que yo lo conocía antes
    /*
    for (int i = 0; i < arrayLength; i++)
    {
        for (int j = i + 1; j < arrayLength; j++)
        {
            if (superArray[i] > superArray[j])
            {
                aux = superArray[i];
                superArray[i] = superArray[j];
                superArray[j] = aux;
            }
        }
    }
*/
    return 0;
}