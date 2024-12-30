/*
    Typedef
*/

#include <stdio.h>

typedef struct
{
    char name[30];
    int age;
} User;

int main()
{
    User user1 = {"Sahil", 21};
    User user2 = {"Sujal", 20};

    printf("%s %d\n", user1.name, user1.age);
    printf("%s %d\n", user2.name, user2.age);
    return 0;
}