/*
    Reverse an Array
*/

#include <stdio.h>
#include <stdlib.h>

void reverseArray(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    size_t size = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, size);
    system("cls");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}