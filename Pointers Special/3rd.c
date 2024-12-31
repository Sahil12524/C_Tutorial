/*
    Pointer to Pointer and
    Pointer to Pointer to Pointer
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    int *pX = NULL;
    pX = &x;
    *pX = 6;
    int **qPX = NULL;
    qPX = &pX;
    int ***rQPX = NULL;
    rQPX = &qPX;
    system("cls");
    printf("%d\n", *pX);
    printf("%p\n", *qPX);
    printf("%d\n", *(*qPX));
    printf("%p\n", *(*rQPX));
    printf("%d\n", *(*(*rQPX)));
    ***rQPX = 10;
    printf("x = %d\n", x);
    **qPX = *pX + 2;
    printf("x = %d\n", x);
    return 0;
}