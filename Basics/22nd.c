/*
    Pointer
*/

#include <stdio.h>
#include <stdlib.h>

int printAge(int age)
{
    printf("\nWithout pointer\n");
    printf("Your age is %d\n", age);
}

int printAgeUsingPTR(int *pAge)
{
    printf("\nWith pointer\n");
    printf("Your age is %d\n", *pAge);
}

int main()
{
    int age = 10;
    int *pAge = NULL; // Good practice, always declare pointer variable as NULL.
    pAge = &age;

    system("cls");

    printf("Address of age: %p\n", &age);
    printf("Value of age: %d\n", age);

    printf("\nAddress of *pAge: %p\n", pAge);
    printf("Value of *pAge: %d\n", *pAge); // de-refrence the pointer pAge using *

    printAge(age);
    printAgeUsingPTR(pAge);
    return 0;
}