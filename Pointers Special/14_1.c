/*
    Function pointers and callbacks
*/

#include <stdio.h>
#include <stdlib.h> // for qsort
#include <math.h>   // for abs

int compare(int a, int b)
{
    if (a > b)
        return -1; // if -1 then return descending order otherwise return 1 for ascending order
    else
        return 1;
}

int absolute_compare(int a, int b)
{
    if (abs(a) > abs(b))
        return 1;
    return -1;
}

int compareForQsort(const void *a, const void *b)
{
    int A = *((int *)a); // void * a returns void pointer type cast it to integer and dereference to get the actual int
    int B = *((int *)b); // same here as well
    // return A - B;     // if A - B then it returns A as positive it means A is ranked higher and if negative B then B is ranked higher. Right now its going ascending order.
    return abs(A) - abs(B);
}

void BubbleSort(int *A, int n, int (*compare)(int, int)) // simple optimized bubble sort function
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (compare(A[j], A[j + 1]) > 0) // returns 1 if A[j] is greater than A[j + 1]. In this case the swap will take place.
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main()
{
    // int A[] = {3, 6, 1, 4, 2, 5}; // all positive int.
    int A[] = {-31, 22, -1, 50, -6, 4};     // mixed int contains negative too.
    size_t size = sizeof(A) / sizeof(A[0]); // use size_t for storing sizeof any thing.

    system("cls");

    // BubbleSort(A, size, compare); // simple compare

    // BubbleSort(A, size, absolute_compare); // absolute compare

    qsort(A, size, sizeof(int), compareForQsort);

    for (int i = 0; i < size; i++)
        printf("%d ", A[i]);
    return 0;
}