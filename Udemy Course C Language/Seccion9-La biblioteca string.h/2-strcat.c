#include <stdio.h>
#include <string.h>
/*strcat sirve para concatenar 2 strings en uno solo
sintaxis: strcat(stringDeDestino, String-fuente-a-ser-agregado-a-destino)
no se crea un nuevo string, sino que
al string de destino se le agrega el string fuente
*/
int main()
{
    char nombreCompleto[60] = "";
    char nombre1[70] = "Leonardo";  //en el ultimo de todos, se tiene que pensar bien el size
    char nombre2[70] = "Joaquin";
    char apellido[70] = "Viegas";

    // concatenamos
    strcat(nombreCompleto, nombre1);
    strcat(nombreCompleto, "_");
    strcat(nombreCompleto, apellido);

    //tambien seria válido:
   // strcat(nombreCompleto, strcat(nombre1, strcat(nombre2, apellido)));

    printf("%s", nombreCompleto);
    return 0;
}
// ¾ugo(L■   aLeonardo-Viegas