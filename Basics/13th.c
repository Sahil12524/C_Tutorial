/*
    Structures
*/
#include <stdio.h>
#include <string.h>

struct User
{
    char name[30];
    int age;
};

int main()
{
    struct User user1, user2;

    strcpy(user1.name, "Sahil");
    user1.age = 21;

    strcpy(user2.name, "Sujal");
    user2.age = 20;

    printf("%s %d\n", user1.name, user1.age);

    printf("%s %d", user2.name, user2.age);
    return 0;
}