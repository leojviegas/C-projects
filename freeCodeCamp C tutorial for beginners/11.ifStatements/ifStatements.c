#include <stdio.h>

int getMax(int a, int b, int c)
{
    int result;
    if (a >= b && a >= c) {
        result = a;
    } else if (b >=a && b >= c) {
        result = b;
    } else {
        result = c;
    }
    return result;
}

void getChar()
{
    char letter;
    printf("type a single letter:\n");
    //por alguna razon, en el video dice que
    //hay que poner un espacio antes del %c
    scanf(" %c", &letter);
    printf("you typed: %c", letter);
}

void goToSum()
{
    int a;
    int b;
    int c;
    printf("enter 3 numbers separated with a space, then press Enter\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("the max is: %d", getMax(a, b, c));
}


int main()
{
    //goToSum();

    getChar();
    return 0;
}
