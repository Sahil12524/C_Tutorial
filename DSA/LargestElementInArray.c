/*
    Largest Element in the Array
*/

#include <stdio.h>
#include <stdlib.h>

int largestElement(int arr[], int size)
{
    int largest = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int arr[] = {6, 1, 3, 4, 2, 5};
    size_t size = sizeof(arr) / sizeof(arr[0]);
    system("cls");
    printf("Largest %d\n", largestElement(arr, size));
    return 0;
}