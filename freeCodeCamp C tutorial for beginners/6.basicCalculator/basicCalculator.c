#include <stdio.h>

int main()
{
    double num1 = 0;
    double num2 = 0;
    double result = 0;
    char operation[10];
    

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("What do you want to do? (add/subtr/mult/div)\n");
    scanf("%s", operation);
    if (strcmp(operation, "add") == 0)
    {
        result = num1 + num2;
        printf("Result: %.2f", result);
    }
    else if (strcmp(operation, "subtr") == 0)
    {
        result = num1 - num2;
        printf("Result: %.2f", result);
    }
    else if (strcmp(operation, "mult") == 0)
    {
        result = num1 * num2;
        printf("Result: %.2f", result);
    }
    else if (strcmp(operation, "div") == 0)
    {
        result = num1 / num2;
        printf("Result: %.2f", result);
    }
    else {
        printf("error: operation unknown");
    }
    
    getch();    //el getch() es para que al abrir el .exe
                //haga una pausa antes de cerrar
    return 0;
}