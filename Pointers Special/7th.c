/*
    Character arrays and pointers
*/

#include <stdio.h>
#include <stdlib.h>

void print(char *name)
{
    while (*name != '\0')
    {
        printf("%c", *name);
        name++;
    }
    printf("\n");
}
int main()
{
    char name[] = "Sahil";
    system("cls");
    print(name);
    return 0;
}