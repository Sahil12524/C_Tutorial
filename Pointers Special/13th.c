/*
    Function pointers in C
*/

#include <stdio.h>
#include <stdlib.h>

void sayHello(char *name)
{
    printf("Hello %s\n", name);
}

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int (*pAdd)(int, int) = NULL;
    pAdd = &add; // & is not really necessary you can write pAdd = add; and its still valid.
    int sum = pAdd(2, 3);

    void (*pSayHello)(char *) = NULL;
    pSayHello = &sayHello; // same here as well no need to put &

    system("cls");

    printf("sum is %d\n", sum);

    pSayHello("World");
    pSayHello("Sahil Bhandari");
    return 0;
}