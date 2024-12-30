/*
    Memory Addresses
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 10;
    int b[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    char c = 'C';
    char d = 'D';
    double e;

    system("cls");

    printf("Address of a: %p\nSize: %d bytes\n", &a, sizeof(a));
    printf("\nAddress of b: %p\nSize: %d bytes\n", &b, sizeof(b));
    printf("\nAddress of C: %p\nSize: %d bytes\n", &c, sizeof(c));
    printf("\nAddress of d: %p\nSize: %d bytes\n", &d, sizeof(d));
    printf("\nAddress of e: %p\nSize: %d bytes\n", &e, sizeof(e));
    return 0;
}