/*
    Pointer as Function Arguments
    Call by reference.
*/

#include <stdio.h>
#include <stdlib.h>

void Increment(int *a);

int main()
{
    int a = 9;
    Increment(&a);
    system("cls");
    printf("%d\n", a);
    return 0;
}

void Increment(int *a)
{
    // please use proper brackets to avoid unwanted behaviour!
    *a = (*a) + 1;
}