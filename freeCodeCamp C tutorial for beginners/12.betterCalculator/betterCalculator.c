#include <stdio.h>
/*muy parecido a la anterior,
 pero con +-* / en vez de las palabras */

int main()
{
    double num1 = 0;
    double num2 = 0;
    double result = 0;
    char operator= '0';

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator: (+, -, *, /, %%)\n");
    scanf(" %c", &operator);
    while (operator!= '+' && operator!= '-' && operator!= '*' && operator!= '/' && operator!= '%')
    {
        printf("ERROR: operation unknown\n");
        printf("Enter operator: (+, -, *, /, %%)\n");
        scanf(" %c", &operator);
    }
    printf("Enter second number: ");
    scanf("%lf", &num2);

    if (operator== '+')
    {
        result = num1 + num2;
        printf("Result: %.2f", result);
    }
    else if (operator== '-')
    {
        result = num1 - num2;
        printf("Result: %.2f", result);
    }
    else if (operator== '*')
    {
        result = num1 * num2;
        printf("Result: %.2f", result);
    }
    else if (operator== '/')
    {
        result = num1 / num2;
        printf("Result: %.2f", result);
    }
    else if (operator== '%') //revisar por qué no funciona bien el operador este
    {
        int iNum1 = num1;
        int iNum2 = num2;
        result = iNum1 % iNum2;
        printf("Result: %d", result); //si hago 10 % 3 me tendria que dar 1 pero me da 0
    }

    getch(); // el getch() es para que al abrir el .exe
             // haga una pausa antes de cerrar
    return 0;
}