/*
    Part 2 of Character arrays and pointers.
*/

#include <stdio.h>
#include <stdlib.h>

// Remember char name[] can be also written as char *name
void print(const char *name) // this function is read only function. mostly used for just reading the elements and not edit.
{
    // name[0] = 'S';  // This line is invalid for readonly pointers
    while (*name != '\0')
    {
        printf("%c", *name);
        name++;
    }
    printf("\n");
}

int main()
{
    char name[10] = "Rohan"; // String gets stored in the space for array
    system("cls");
    print(name);
    return 0;
}