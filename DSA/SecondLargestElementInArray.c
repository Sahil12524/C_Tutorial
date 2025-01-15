/*
    Second Largest Element In Array
    https://www.youtube.com/watch?v=37E9ckMDdTk
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int secondLargest;
    int secondSmallest;
} SecondOrderElements;

int secondLargest(int arr[], int size)
{
    int largest = arr[0];
    int slargest = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
}

int secondSmallest(int arr[], int size)
{
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < ssmallest)
        {
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}

SecondOrderElements getSecondOrderElements(int size, int arr[])
{
    SecondOrderElements result;
    result.secondLargest = secondLargest(arr, size);
    result.secondSmallest = secondSmallest(arr, size);
    return result;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    size_t size = sizeof(arr) / sizeof(arr[0]);
    system("cls");
    SecondOrderElements result = getSecondOrderElements(size, arr);
    printf("Second Largest: %d\n", result.secondLargest);
    printf("Second Smallest: %d\n", result.secondSmallest);
    return 0;
}