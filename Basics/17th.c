#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    system("cls");
    srand(time(0));

    int rNumber = (rand() % 6) + 1; // Here 6 is numbers of side of a dice cube. Just an example!
    printf("%d", rNumber);

    return 0;
}