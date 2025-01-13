/*
    Arrays
    Use code by un-commenting each one by one.
*/

#include <stdio.h>
#include <stdlib.h>

// Dynamic Array Initialization
/*int main()
{
    unsigned int count;
    system("cls");
    printf("Enter count of index to make in array: ");
    scanf("%u", &count);
    int arr[count];
    size_t size = sizeof(arr) / sizeof(arr[0]);
    for (unsigned int i = 0; i <= size; i++)
    {
        arr[i] = i * i;
        printf("arr[%u]: %u\n", i, arr[i]);
    }
    return 0;
}*/

// Dynamic Array
/*int main()
{
    unsigned int count, table;
    system("cls");
    printf("Enter count of index to allocate memory in heap and number of table: ");
    scanf("%u %u", &count, &table);
    unsigned int *arr = (unsigned int *)malloc(count * sizeof(unsigned int));
    for (unsigned int i = 0; i <= count; i++)
    {
        arr[i] = i * table;
        printf("arr[%u]: \t%u\n", i, arr[i]);
    }
    free(arr);
    return 0;
}*/

// Deletion (from a specific index)
/*int main()
{
    int arr[5] = {1, 2, 3, 4, 5}; // Initial array
    int pos = 2;                  // Delete index 2
    for (int i = pos; i < 4; i++)
    {
        arr[i] = arr[i + 1];
    }
    system("cls");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}*/

// Insertion (at a specific index)
/*int main()
{
    int arr[6] = {1, 2, 4, 5}; // Initial array
    int pos = 2;               // Insert at index 2
    int value = 3;

    for (int i = 4; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = value;
    system("cls");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}*/
