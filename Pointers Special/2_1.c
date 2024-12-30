/*
    Generic Pointer or Void Pointer
    here we can't de-refrence it.
    we can't even do pointer arithmatic as well.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1025;
    int *pA = NULL;
    pA = &a;

    system("cls");

    printf("Size of int is %d\n", sizeof(int));
    printf("Address = %p, value = %d\n", pA, *pA);

    // Void Pointer - Generic Pointer
    void *pA0;
    pA0 = pA; // typecast not required for void pointer.

    printf("\nAddress = %p\n", pA0);
    return 0;
}