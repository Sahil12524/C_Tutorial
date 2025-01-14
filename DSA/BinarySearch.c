/*
    Binary Search
*/

#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int size, int key)
{
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    size_t size = sizeof(arr) / sizeof(arr[0]);
    int key = 50;
    int index = binarySearch(arr, size, key);
    system("cls");
    if (index != -1)
        printf("Found at index %d\n", index);
    else
        printf("Not found!\n");
    return 0;
}