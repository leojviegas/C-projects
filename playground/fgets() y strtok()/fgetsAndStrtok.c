#include <stdio.h>
#include <string.h>
int main()
{
    char nombre[20];
    char signo[20];
    printf("escriba un nombre\n");
    fgets(nombre, 20, stdin);
    // al usar fgets, el programa te guarda tambien el "enter" que das al final
    // que en realidad, el enter es los caracteres '\n'
    printf("escriba un signo\n");
    fgets(signo, 20, stdin);

    printf("lo 1ro fue: %s, que es un nombre\n", nombre);
    printf("y lo 2do fue: %s, que es un signo", signo);
    // por eso acá al imprimir hay un salto de linea en medio del string

    char ejemplo[10];
    printf("\nescribi lo siguiente tal cual se muestra: ejemplo\n");
    fgets(ejemplo, 10, stdin);

    if (stricmp(ejemplo, "ejemplo") == 0)
    {
        printf("\nlos dos strings son iguales");
        printf("\nla palabra a escribir era 'ejemplo' y escribiste: '%s'\n", ejemplo);
    }
    else
    {
        printf("\nlos strings NO son iguales");
        printf("\nla palabra a escribir era 'ejemplo' y escribiste: '%s'\n", ejemplo);
    } // Por eso al comprarar un string de entrada con otro ya dado siempre va a fallar
    // porque le está agregando al final del string de entrada el \n al final
    // Para solucionar eso (si no se quiere usar scanf), se usa strtok()

    // strtok() va a cortar el string pasado en el 1er parametro
    // en donde sea que encuentre el/los caracter/es pasado en el 2do parametro
    char ejemplo2[10];
    printf("\nVuelva a escribir lo siguiente tal cual se muestra: ejemplo2\n");
    fgets(ejemplo2, 10, stdin);
    strtok(ejemplo2, "\n"); //se le pasa como parameto el "\n", para que corte y saque el salto de linea
    if (stricmp(ejemplo2, "ejemplo2") == 0)
    {
        printf("\nAhora si los dos strings son iguales -porque se uso strtok()-");
        printf("\nla palabra a escribir era 'ejemplo2' y escribiste: '%s'", ejemplo2);
    }
    else
    {
        printf("\nlos strings continuan NO siendo iguales");
        printf("\nla palabra a escribir era 'ejemplo2' y escribiste: '%s'", ejemplo2);
    }
    return 0;
}