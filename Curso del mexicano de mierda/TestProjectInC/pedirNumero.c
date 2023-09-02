#include <stdio.h>

int pedirNumero() {
	//pide un numero al usuario
    int a = 0;

    printf("escriba un numero entero (sin decimales)\n");
	scanf("%i", &a);
	return a;
}

int main() {
	int resultado = pedirNumero();
	if (resultado <= 50) {
		printf("el numero que ingreso es %i, y es menor o igual a 50", resultado);
	}
	else {
		printf("el numero que ingreso es %i, y es mayor a 50\n\n", resultado);
	}
    printf("Por cierto, sabia que la direccion de memoria donde esta guardado su numero es %p?", &resultado);
    scanf("");
	return 0;
}