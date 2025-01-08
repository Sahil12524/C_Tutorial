/*
    The question is generated by OpenAI GPT-4o

    Section 2: Functions and Structs
    Passing Struct to Functions
    Create a program using a struct called Rectangle with length and width as its members.
    Write functions to:
    Calculate the area (pass by value).
    Modify the dimensions (pass by pointer).

*/

#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    int length, width;
};

void Area(struct Rectangle rect)
{
    int area = rect.length * rect.width;
    printf("Area is %d\n", area);
}

void modifyDimension(struct Rectangle *rect)
{
    rect->length *= 2; // Modify length (double it as an example)
    rect->width *= 2;  // Modify width (double it as an example)
    printf("Dimensions modified: Length = %d, Width = %d\n", rect->length, rect->width);
}

int main()
{
    struct Rectangle rect1 = {2, 5}; // Initialize a Rectangle struct
    system("cls");
    printf("Pass by value:\n");
    Area(rect1); // Pass the struct by value to calculate area
    printf("\nPass by refrence:\n");
    modifyDimension(&rect1); // Pass the struct by reference to modify dimensions
    return 0;
}