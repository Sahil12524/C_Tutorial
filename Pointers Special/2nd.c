// Pointer types, pointer arithmatic, void pointers

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        32 bits 1025 BIN representation:
        byte 3   byte 2   byte 1   byte 0
        00000000 00000000 00000100 00000001
        1 byte   1 byte   1 byte   1 byte
        total 4 bytes
        so pA0 will consider 00000001 = 1
        and pA0+1 will consider 00000100 = 4
        rest are off bits.
    */
    int a = 1025;
    int *pA = NULL;
    pA = &a;

    system("cls");

    printf("Size of int is %d bytes\n", sizeof(int));
    printf("Address = %p, value = %d\n", pA, *pA);
    printf("Address = %p, value = %d\n", pA + 1, *(pA + 1));

    char *pA0 = NULL;
    pA0 = (char *)pA; // typecast

    printf("\nSize of char is %d bytes\n", sizeof(char));
    printf("Address = %p, value = %d\n", pA0, *pA0);           // 00000001 = 1
    printf("Address = %p, value = %d\n", pA0 + 1, *(pA0 + 1)); // 00000100 = 4

    return 0;
}