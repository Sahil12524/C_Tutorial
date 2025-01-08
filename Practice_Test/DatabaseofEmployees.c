/*
    The question is generated by OpenAI GPT-4o

    Database of Employees
    Create a program using a struct called Employee with the following members:

    id (integer)
    name (string of max length 50)
    salary (float)
    Write a program to:

    Store details of multiple employees using an array of structs.
    Find and display the employee with the highest salary.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employees
{
    int id;
    char name[50];
    float salary;
};

void clearInputBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

int main()
{
    struct Employees emp[3];
    size_t size = sizeof(emp) / sizeof(emp[0]);
    float highestSalary = 0.0;
    int highestIndex = -1;

    system("cls");

    for (int i = 0; i < size; i++)
    {
        printf("Enter name of employee: ");
        fgets(emp[i].name, 50, stdin);
        emp[i].name[strcspn(emp[i].name, "\n")] = '\0';

        printf("Enter id of employee: ");
        scanf("%d", &emp[i].id);

        printf("Enter salary of employee: ");
        scanf("%f", &emp[i].salary);

        clearInputBuffer();
    }

    for (int i = 0; i < size; i++)
    {
        printf("\nName of employee: %s", emp[i].name);
        printf("\nId of employee: %d", emp[i].id);
        printf("\nSalary of employee: %.2f\n", emp[i].salary);

        if (emp[i].salary > highestSalary)
        {
            highestSalary = emp[i].salary;
            highestIndex = i;
        }
    }

    if (highestIndex != -1)
    {
        printf("\nThe highest salary is %.2f of %s\n", emp[highestIndex].salary, emp[highestIndex].name);
    }

    return 0;
}