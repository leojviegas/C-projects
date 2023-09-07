#include <stdio.h>
#include <stdlib.h>

int main()
{
//arrays en C
    int arrayNumerosPrimos[] = {2, 3, 5, 7, 11, 13, 19};
    arrayNumerosPrimos[0] = 237;
    printf("%d", arrayNumerosPrimos[0]);

//si no se agregan elementos al array al declararlo
//hay que indicar cuantos elementos puede contener

    int tresColectivosRandom[3];
    tresColectivosRandom[1] = 237;
    tresColectivosRandom[2] = 343;
    tresColectivosRandom[3] = 87;

    printf("Colectivos random: %d, %d, %d", tresColectivosRandom[1], tresColectivosRandom[2], tresColectivosRandom[3]);




    return 0;
}