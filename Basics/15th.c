/*
    array of struct
*/

#include <stdio.h>

struct Student
{
    char name[30];
    int age;
};

int main()
{
    struct Student student1 = {"Sahil", 21};
    struct Student student2 = {"Rohan", 22};
    struct Student student3 = {"Darshu", 23};

    struct Student students[] = {student1, student2, student3}; // Array of struct

    for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
    {
        printf("%s %d\n", students[i].name, students[i].age);
    }
    return 0;
}