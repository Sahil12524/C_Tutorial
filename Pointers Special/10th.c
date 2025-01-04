/*
    Pointers and multi dimensional arrays
*/

#include <stdio.h>
#include <stdlib.h>

void Func(int (*c)[2][2])
{
    printf("%d\n", *(c[1][1]));
}

int main()
{
    int c[3][2][2] = {{{2, 5}, {7, 9}}, {{3, 4}, {6, 1}}, {{0, 8}, {11, 13}}};
    system("cls");
    printf("%p\n%p\n%p\n%p\n", c, *c, c[0], &c[0][0]);
    printf("%d\n", *(c[0][0] + 1));
    Func(c);
    return 0;
}