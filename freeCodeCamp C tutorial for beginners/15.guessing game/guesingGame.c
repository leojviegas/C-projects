#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretNumber = 5;
    int userGuess;
    int guessCount = 0;
    int guessLimit = 3;

    printf("What is the secret number? (between 1 and 10)\n");
    scanf("%d", &userGuess);
    guessCount++;

    while (userGuess != secretNumber && guessCount != guessLimit)
    {
        printf("Incorrect! Try again\n");
        scanf("%d", &userGuess);
        guessCount++;
    }

    if (userGuess == secretNumber)
    {
        printf("Correct! You've won the game");
    }
    else
    {
        printf("You've lost!");
    }

    return 0;
}