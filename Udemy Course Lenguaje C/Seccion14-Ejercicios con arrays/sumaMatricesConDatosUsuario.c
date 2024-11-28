#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void askRows1Colums1();
void askRows2Colums2();
void fillMatrix1();
void fillMatrix2();
void printMatrix1();
void printMatrix2();
void addMatrices();
void substractMatrices();

int matrix1[50][50] = {0};
int rows1 = 0;
int colums1 = 0;
int matrix2[50][50] = {0};
int rows2 = 0;
int colums2 = 0;
int option = 0;

int main()
{
    askRows1Colums1();
    fillMatrix1();
    printMatrix1();

    askRows2Colums2();
    fillMatrix2();
    printMatrix2();

    printf("What do you want to do now? Choose an option\n1)Add them\n2)Substract them\n3)Nothing\n");
    scanf("%d", &option);
    while (option < 1 || option > 3)
    {
        printf("ERROR: Invalid option\n");
        scanf("%d", &option);
    }

    switch (option)
    {
    case 1:
        if (rows1 == rows2 && colums1 == colums2)
        {
            addMatrices();
        }
        else
        {
            printf("ERROR: Both matrices have to have same number of rows and colums\n");
        }
        break;

    case 2:
        if (rows1 == rows2 && colums1 == colums2)
        {
            substractMatrices();
        }
        else
        {
            printf("ERROR: Both matrices have to have same number of rows and colums\n");
        }
        break;

    default:
        printf("Thanks for using our program!\n");
        system("pause");
        break;
    }

    return 0;
}

void askRows1Colums1()
{
    printf("Insert rows for matrix 1 (max 50): \n");
    scanf("%d", &rows1);
    printf("Insert columms for matrix 1 (max 50): \n");
    scanf("%d", &colums1);
}

void askRows2Colums2()
{
    printf("Insert rows for matrix 2 (max 50): \n");
    scanf("%d", &rows2);
    printf("Insert columms for matrix 2 (max 50): \n");
    scanf("%d", &colums2);
}

void fillMatrix1()
{
    printf("Filling matrix1: \n"); // filling matrix 1
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < colums1; j++)
        {
            printf("Write number at position [%d][%d]: \n", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
}

void fillMatrix2()
{
    printf("Filling matrix2: \n"); // filling matrix 1
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < colums2; j++)
        {
            printf("Write number at position [%d][%d]: \n", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
}
void printMatrix1()
{
    printf("Matrix 1 completed: \n");
    for (int i = 0; i < rows1; i++) // printing matrix 1
    {
        for (int j = 0; j < colums1; j++)
        {
            printf("%i ", matrix1[i][j]);
        }
        printf("\n");
    }
}

void printMatrix2()
{
    printf("Matrix 2 completed: \n");
    for (int i = 0; i < rows2; i++) // printing matrix 1
    {
        for (int j = 0; j < colums2; j++)
        {
            printf("%i ", matrix2[i][j]);
        }
        printf("\n");
    }
}

void addMatrices()
{
    int ResultingMatrix[2][2];

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < colums1; j++)
        {
            ResultingMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Resulting Matrix:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < colums1; j++)
        {
            printf("%i ", ResultingMatrix[i][j]);
        }
        printf("\n");
    }
}

void substractMatrices()
{
    int ResultingMatrix[2][2];

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < colums1; j++)
        {
            ResultingMatrix[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    printf("Resulting Matrix:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < colums1; j++)
        {
            printf("%i ", ResultingMatrix[i][j]);
        }
        printf("\n");
    }
}