/*
    Linear Search
*/

#include <stdio.h>
#include <stdlib.h>

int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    size_t size = sizeof(arr) / sizeof(arr[0]);
    int key = 30;
    int index = linearSearch(arr, size, key);
    system("cls");
    if (index != -1)
        printf("Found at index %d\n", index);
    else
        printf("Not found!\n");
    return 0;
}