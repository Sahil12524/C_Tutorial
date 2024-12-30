/*
    Simple bubble sort program.
    here pointers are not necessary.
    this program should have written without pointers.
*/

#include <stdio.h>

void sort(int (*array)[], int *size);

int main()
{
    int array[] = {5, 3, 7, 9, 1, 2, 8, 4, 6};
    int size = sizeof(array) / sizeof(array[0]);
    sort(&array, &size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}

void sort(int (*array)[], int *size)
{
    int temp;
    for (int i = 0; i < *size - 1; i++)
    {
        for (int j = 0; j < *size - i - 1; j++) // optimized *size - i - 1
        {
            if ((*array)[j] > (*array)[j + 1])
            {
                temp = (*array)[j];
                (*array)[j] = (*array)[j + 1];
                (*array)[j + 1] = temp;
            }
        }
    }
}