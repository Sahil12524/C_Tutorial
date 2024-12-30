#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 10;
    int guess;
    int guesses = 0;
    int answer;

    srand(time(0));                // uses current time as a seed.
    answer = (rand() % MAX) + MIN; // generate random rumbers beteween MIN and MAX

    system("cls");
    //  printf("%d", answer);
    do
    {
        printf("Enter a guess: ");
        scanf("%d", &guess);

        if (guess > answer)
        {
            printf("Guess too high!!\n");
        }
        else if (guess < answer)
        {
            printf("Guess too low!\n");
        }
        else
        {
            printf("Correct!!!\n");
        }
        guesses++;
    } while (guess != answer);

    printf("***********************\n");
    printf("Answer: %d\n", answer);
    printf("Guesses: %d\n", guesses);
    printf("***********************\n");

    return 0;
}