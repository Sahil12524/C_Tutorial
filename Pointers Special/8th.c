/*
    Part 2 of Character arrays and pointers.
*/

#include <stdio.h>
#include <stdlib.h>

// Remember char name[] can be also written as char *name
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
    // char name[10] = "Rohan"; // String gets stored in the space for array
    char *name = "Rohan"; // string gets stored as an constant during the compile time.
    // name[0] = 'S'; // meaning this line is not valid and will not gonna change the char R to S with an error access violation
    system("cls");
    print(name);
    return 0;
}