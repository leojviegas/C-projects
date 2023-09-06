#include <stdio.h>

// cuando se pone FILE, esto es en realidad un pointer a un archivo que ya existe en la PC
//  luego se pone *nombreDelPointer (se pone asterisco como en toda variable tipo pointer)
//  y luego (en este caso), la funcion fopen (file open), para abrir un archivo
// fopen() admite 2 parametros: el 1ro es el nombre del archivo, el 2do es el "mode":
// el 'mode' es para indicar qué queremos hacer con el archivo que estamos abriendo.
// los 3 tipos de modes mas básicos son:
//      'r'(read): para leer el archivo
//      'w'(write): para CREAR un archivo nuevo o SOBREESCRIBIR un archivo existente
//      'a'(append): AGREGAR informacion a un archivo

// en C, cada vez que se abre un achivo, al finalizar se debe cerrar
// con la funcion fclose(), que cierra el archivo y guarda los cambios
int main()
{
    FILE *fpointer = fopen("C:/Users/leojv/Desktop/employees.txt", "w"); // LOOOL SE CREÓ EL .TXT!!
    // si se quiere crear el archivo en otra ruta, agregar la misma reemplazando '\' por '/' o '\\'
  
    // (del mismo modo que printf imprime(escribe) en la consola, fprintf escribe en una archivo)
    fprintf(fpointer, "Jim,salesman, 53\nPam, receptionist, 20");

    //para añadir data sin sobreescribir, usar el mode 'a':
    //'a' agrega una nueva linea de texto al final del archivo
    fopen("employees.txt", "a");
    int marcosAge = 50;
    fprintf(fpointer, "\nMarcos, CEO, %d", marcosAge);
    fclose(fpointer); // como parámetro se pone el pointer del archivo que se quiere cerrar
    return 0;
}