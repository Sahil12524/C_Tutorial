#include <stdio.h>
#include <stdbool.h>

int bubbleSort(int *arr, size_t size)
{
    int temp;
    bool swapped;
    bool alreadySorted = true;
    for (int i = 0; i < size - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
                alreadySorted = false;
            }
        }
        if (!swapped)
            break;
    }
    return alreadySorted ? 0 : 1;
}

void display(int *arr, size_t size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    // int arr[] = {25, 20, 15, 10, 5, 0};
    int arr[] = {0, 5, 10, 15, 20, 25};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    if (!size)
    {
        printf("Array is empty\n!");
        return 0;
    }

    printf("Elements detected: %ld\n", size);
    printf("Before Sort:\n");
    display(arr, size);

    printf("\nAfter Sort:\n");
    int status = bubbleSort(arr, size);
    if (!status)
    {
        printf("Array is already sorted.\n");
        return 0;
    }
    display(arr, size);

    return 0;
}