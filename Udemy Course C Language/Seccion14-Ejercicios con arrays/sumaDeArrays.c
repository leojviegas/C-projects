#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>


int main()
{
    int arr1[4] = {1, 2, 3, 4};
    int arr2[4] = {7, 9, 11, 13};    
    int arrDestination[4];

    for (int i = 0; i < 4; i++)
    {
        arrDestination[i] = arr1[i] + arr2[i];
        printf("arrDestination position no.%d: %d\n", i, arrDestination[i]);
    }
    

    return 0;
}
