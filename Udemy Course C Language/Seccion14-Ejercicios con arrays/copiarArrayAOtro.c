#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arrSource[7] = {10, 20, 30, 40, 50, 60, 70};
    int arrDestination[7];
    int arrSourceLength = sizeof(arrSource) / sizeof(arrSource[0]);

    printf("The arrDestination ends up populated like this: \n");
    for (int i = 0; i < arrSourceLength; i++)
    {
        arrDestination[i] = arrSource[i];
        printf("%d, ", arrDestination[i]);
    }

    return 0;
}