#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 10;
    int b = 15;
    int *pA = NULL; // Good practice, always declare pointer variable as NULL.
    pA = &a;        // Passing address of variable a in pointer variable *pA.

    system("cls");

    printf("Value of variable a is %d\n", a);
    printf("Address of variable a is %p\n", &a);
    printf("\nValue of variable *pA is %d\n", *pA);
    printf("*pA holds the address of a is %p\n", pA);
    printf("\nThis shows us that variable *pA now points to variable a\n");

    // lets have some fun with these.
    *pA = b; // Changed the value of a by passing the value of b to the *pA.
    /*
        Here what happened is we passed the value of b to pointer which is pointing to variable a
        so the value of a will be changed instead.
    */
    printf("\nValue of variable a is %d\n", a);
    printf("*pA holds the address of a is %p\n", pA);

    pA = &b;
    /*
        Here we are passing address of variable b to the *pA
        so the pA will hold the address of variable b instead of variable a.
    */
    printf("\nValue of variable b is %d\n", b);
    printf("Address of variable b is %p\n", &b);
    printf("Value of variable *pA is %d\n", *pA);
    printf("*pA holds the address of b is %p\n", pA);

    printf("\nAddress of *pA is %p\n", &pA); // Prints the address of *pA.

    return 0;
}