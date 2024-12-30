#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    char questions[][100] =
        {"1. What year did C language debut?: ",
         "2. Who is credited with creating C?: ",
         "3. What is the predecessor of C?: "};

    char options[][100] =
        {"A. 1969", "B. 1972", "C. 1975", "D. 1999",
         "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Brown",
         "A. Objective C", "B. B", "C. C++", "D. C#"};

    char answers[3] = {'B', 'A', 'B'};

    int numberofQuestions = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;

    system("cls");

    printf("Quiz Game\n");
    for (int i = 0; i < numberofQuestions; i++)
    {
        printf("**********************************************\n");
        printf("%s\n", questions[i]);
        printf("**********************************************\n");

        for (int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("%s\n", options[j]);
        }
        printf("Guess: ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        if (guess == answers[i])
        {
            printf("CORRECT!\n");
            score++;
        }
        else
        {
            printf("WRONG!\n");
        }
    }
    printf("**********************************************\n");
    printf("Final Score: %d/%d\n", score, numberofQuestions);
    printf("**********************************************\n");
    return 0;
}