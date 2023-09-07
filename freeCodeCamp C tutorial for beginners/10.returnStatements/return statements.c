#include <stdio.h>

float cubeNumber(float number)
{
    return number * number * number;
}

int main()
{
    float input = 0;
    printf("insert a number to be cubed (power of 3): ");
    scanf("%f", &input);
    printf("result: %.2f", cubeNumber(input));
    return 0;
}
