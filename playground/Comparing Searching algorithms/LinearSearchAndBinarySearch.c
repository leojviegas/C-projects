#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
#define ARRLENGTH 10000

void linearSearch();
void binarySeach();

int array[ARRLENGTH];
int limiteInf = 1;
int limiteSup = 100000;
int numberToFind = 0;
int option = 0;

int main()
{
    srand(time(NULL));

    for (int i = 0; i < ARRLENGTH; i++) // populating the array
    {
        int n = limiteInf + rand() % ((limiteSup + 1) - limiteInf);
        array[i] = n;
    }

    for (int i = 0; i < ARRLENGTH; i++) // sorting the array
    {
        for (int j = i + 1; j < ARRLENGTH; j++)
        {
            if (array[i] > array[j])
            {
                int aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
        printf("%d, ", array[i]);
    }
    printf("\nAlgorithm of %d elements has been created and sorted\n", ARRLENGTH);
    while (numberToFind < 1 || numberToFind > limiteSup)
    {
        printf("Type a number between %d and %d to find it (or not) in the array\n", limiteInf, limiteSup);
        scanf("%d", &numberToFind);
    }

    while (option != 1 && option != 2)
    {
        printf("Type '1' if you want to find it using Linear Search.\n Type '2' for Binary Seach\n");
        scanf("%d", &option);
    }
    if (option == 1)
    {
        linearSearch();
    }
    else
    {
        binarySeach();
    }
    return 0;
}

void linearSearch()
{
    bool numberFound = false;
    for (int i = 0; i < ARRLENGTH && numberFound == false; i++) // agrego el 'numberfound == false' para que corte el loop al hayarlo
    {
        if (numberToFind == array[i])
        {
            numberFound = true;
            printf("Number %d found! at position: [%d]", numberToFind, i);
        }
    }
    if (numberFound == false)
        printf("Number not found");
}

void binarySeach()
{
    bool numberFound = false;
    int i_inf = 0;
    int i_sup = ARRLENGTH - 1;
    int i_mitad = 0;

    while (i_inf <= i_sup)
    {
        i_mitad = i_inf + (i_sup - i_inf) / 2;
        if (array[i_mitad] == numberToFind)
        {
            numberFound = true;
            break;
        }
        else if (array[i_mitad] > numberToFind)
        {
            i_sup = i_mitad - 1;
        }
        else if (array[i_mitad] < numberToFind)
        {
            i_inf = i_mitad + 1;
        }
    }
    if (numberFound == true)
    {
        printf("Number %d found! at position: [%d]", numberToFind, i_mitad);
    }
    else
    {
        printf("Number not found");
    }
}