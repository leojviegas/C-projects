#include <stdio.h> //libreria
#include <stdbool.h>

void saludar() {

	printf("hola\n");
}

bool esMenorAUno() {
	int x = 0;
	if (x < 1) {
		return true;
	}
	else {
		return false;
	}
}

void variables() {
	int a = 123; // 4 bytes
	char b = 'a'; // 1 byte
	float c = 1.5; // 4 bytes
	double d = 1.555555555555555555; //8 bytes
	short e = 2; //2 bytes
	unsigned int f = 134; //4 bytes

	printf("variable entero: %i\n", a);
	printf("variable caracter: %c\n", b);
	printf("variable flotante: %.2f\n", c);
	printf("variable double: %lf\n", d);
	printf("variable short: %i\n", e);
	printf("variable unsigned int: %i\n", f);
		
}

