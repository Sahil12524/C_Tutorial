/*
    Function pointers and callbacks
*/

#include <stdio.h>
#include <stdlib.h>

void A()
{
    printf("Hello\n");
}

void B(void (*ptr)())
{
    ptr(); // callback
}

int main()
{
    void (*p)() = NULL;
    p = A;

    system("cls");
    // A is a callback function
    B(p); // can be written like this
    B(A); // or like this too
    return 0;
}