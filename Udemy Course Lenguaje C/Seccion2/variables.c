//directivas de pre procesador y variables
#include <stdio.h> //libreria
#include <stdbool.h>
#include "tiposDeDatos.c"
#define PI 3.1416 //macro

/*los MACROS son para declarar "cosas"
que vamos a usar a lo largo de todo el codigo*/


int y = 5; //variable global

int main() {
	//sumando 3 variables: la loca, la global y el macro "PI"
	int x = 10; //variable local
	float suma = 0;
	suma = PI + x + y;
	printf("la suma es: %f \n", suma);

	 saludar();
	 variables();

	int q = 0;
	float w = 0;
	char e;

	printf("Escribe el valor de la variable 'q' (int)\n");
	scanf("%i",&q);
	printf("El valor que escribiste es: %i\n", q);

	printf("Ahora escribe el valor de la variable 'w' (float)\n");
	scanf("%f", &w);
	printf("El valor que escribiste es: %.3f\n", w);

	printf("Y por ultimo, escribe el valor de la variable 'e' (char)\n");
	scanf(" %c",&e);
	printf("El valor que escribiste es: %c\n", e);



	return 0;
}