#include <stdio.h>
int main()
{
    int a = 5, b = 4, c;
    c = a & b;
    printf("%d\n", c);
    c = a | b;
    printf("%d\n", c);
    c = a ^ b;
    printf("%d\n", c);
    c = ~a;
    printf("%d\n", c);
    return 0;
}
/*
    0 0 0 0
    8 4 2 1
    AND (&)
    0 1 0 1 = 5
    0 1 0 0 = 4
    0 1 0 0 = 4

    OR (|)
    0 0 0 0
    8 4 2 1
    0 1 0 1 = 5
    0 1 0 0 = 4
    0 1 0 1 = 5

    EXOR (^)
    0 0 0 0
    8 4 2 1
    0 1 0 1 = 5
    0 1 0 0 = 4
    0 0 0 1

    NOT (~) 2's complement
    0 0 0 0
    8 4 2 1
    0 1 0 1 = 5
*/