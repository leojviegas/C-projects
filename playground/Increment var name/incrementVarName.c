#include <stdio.h>
#include <string.h>

int main()
{
    // Creating 10 files
    char tenFilesCount[20] = "employees00.txt";

    for (int j = 0; j < 10; j++)
    {
        printf("el contador esta en %d\n", j);
        tenFilesCount[10] = 48 + j;
        printf("%s\n", tenFilesCount);
    }

   // Creating 100 files
    char hundredFilesCount[20] = "employees00.txt";
    for (int i = 0; i < 10; i++)
    {
        hundredFilesCount[9] = 48 + i;
        for (int j = 0; j < 10; j++)
        {
            printf("el contador esta en %d%d\n", i, j);
            hundredFilesCount[10] = 48 + j;
            printf("%s\n", hundredFilesCount);
        }
    }

    return 0;
}