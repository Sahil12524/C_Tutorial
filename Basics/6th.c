#include <stdio.h>
void birthday(char name[], int age)
{
    printf("Hello, Happy Birthday Mr.%s", name);
    printf("\nYou are now %d yrs old.", age);
}
int main()
{
    int age;
    char name[30];
    birthday("Sahil", 22);
    return 0;
}