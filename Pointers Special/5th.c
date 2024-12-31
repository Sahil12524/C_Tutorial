/*
    Pointer and arrays.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *pA = NULL;
    pA = a; // Note: Array variables do not require ampersand (&).
    system("cls");
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        printf("Index = %d\nAddress = %p\nValue = %d\n\n", i, pA + i, (*pA) + i);
    }
    return 0;
}