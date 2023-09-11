// calcular hipotenusa de un traingulo rectángulo, recibiendo como input los otros 2 catetos
#include <stdio.h>
#include <math.h> //libreria de funciones matematicas

int main()
{
    float c1, c2, hipotenusa;

    printf("Inserte el 1er cateto: ");
    scanf("%f", &c1);
    printf("Ahora el 2do cateto: ");
    scanf("%f", &c2);

    hipotenusa = sqrt((c1 * c1) + (c2 * c2));
    printf("La hipotenusa es: %.2f", hipotenusa);
    return 0;
}