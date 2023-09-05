#include <stdio.h>
/*muy parecido a la anterior,
 pero con +-* / en vez de las palabras */

int main()
{
    double num1 = 0;
    double num2 = 0;
    double result = 0;
    char operator = '0';
    

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator: (+, -, *, /)\n");
    scanf(" %c", &operator);
    while(operator != '+' && operator != '-' && operator != '*' &&operator != '/')
    {
        printf("ERROR: operation unknown\n");
        printf("Enter operator: (+, -, *, /)\n");
        scanf(" %c", &operator);
    }
    printf("Enter second number: ");
    scanf("%lf", &num2);

    if (operator == '+')
    {
        result = num1 + num2;
        printf("Result: %.2f", result);
    }
    else if (operator == '-')
    {
        result = num1 - num2;
        printf("Result: %.2f", result);
    }
    else if (operator == '*')
    {
        result = num1 * num2;
        printf("Result: %.2f", result);
    }
    else if (operator == '/')
    {
        result = num1 / num2;
        printf("Result: %.2f", result);
    }
    
    getch();    //el getch() es para que al abrir el .exe
                //haga una pausa antes de cerrar
    return 0;
}