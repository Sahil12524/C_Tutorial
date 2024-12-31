/*
    Arrays as function arguments.
*/

#include <stdio.h>
#include <stdlib.h>

int sumOfElements(int *a, int size);
void doubleofElements(int *a, int size);

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int sizeofArr = sizeof(a) / sizeof(a[0]);
    int total = sumOfElements(a, sizeofArr); // stores the sum of elements.
    system("cls");

    printf("Original elements: ");
    for (int i = 0; i < sizeofArr; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nSun of elements: %d\n", total);

    doubleofElements(a, sizeofArr); // prints the unmodified array elements.

    for (int i = 0; i < sizeofArr; i++) // prints the modified array elements.
    {
        printf("%d ", a[i]);
    }

    return 0;
}

int sumOfElements(int *a, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    return sum;
}

void doubleofElements(int *a, int size)
{
    printf("Without modifying elements: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i] * 2);
    }

    printf("\nModifying the elements directly: ");
    for (int i = 0; i < size; i++)
    {
        a[i] = a[i] * 2; // <- direct modification of array.
    }
}