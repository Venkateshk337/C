#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int guess, guesses = 1, number;
    srand(time(0));
    number = rand() % 100 + 1;
    do
    {
        printf("Guess the number between 1 to 100:\n");
        scanf("%d", &guess);
        if (guess <number)
        {
            printf("Higher number please\n");
        }
        else if (guess > number)
        {
            printf("Lower number please\n");
        }
        else
        {
            printf("you guessed the number\n");
            printf("Number of attept taken to guess the number is %d\n", guesses);
        }
        guesses++;

    } while (guess != number);
    return 0;
}
