// This is a number guessing game by Debatra
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random, guess;
    int attempts = 1;

    srand(time(NULL));         // Seed the random number generator
    random = rand() % 100 + 1; // Generate a random number between 1 and 100

    printf("Welcome to the Number Guessing Game by Debatra!\n");

    do
    {
        printf("Please enter a number between 1 and 100: ");
        scanf("%d", &guess);

        if (guess < random)
        {
            printf("Guess a larger number!\n");
        }
        else if (guess > random)
        {
            printf("Guess a smaller number!\n");
        }
        else
        {
            printf("GG! You successfully guessed the number in %d attempts!\n", attempts);
        }
        attempts++;
    } while (guess != random);

    return 0;
}
