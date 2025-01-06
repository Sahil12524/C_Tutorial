/*
    Pointers as function return

    do not return directly like &c from add.
    we need malloc to allocate the memory in heap and return that pointer.
    Remember to free dynamically allocated memory to avoid memory leaks.
*/
#include <stdio.h>
#include <stdlib.h>

int *add(int *a, int *b) // return a pointer to integer from this function
{
    int *c = NULL;
    c = (int *)malloc(sizeof(int)); // Dynamically allocate memory for one integer.
    if (c == NULL)                  // Check if memory allocation was successful.
    {
        return NULL; // Return NULL to indicate failure.
    }
    *c = (*a) + (*b);
    return c; // returns address the address of c to add function
}

int main()
{
    int a = 10, b = 15;
    int *sum = NULL;
    sum = add(&a, &b); // collects the address from add function
    system("cls");
    if (sum != NULL) // Check if memory allocation was successful.
    {
        printf("Sum is %d, address it holds %p\n", *sum, sum); // dereference sum to print the value
        free(sum);                                             // Free the allocated memory to avoid memory leak.
        sum = NULL;                                            // Set pointer to NULL after freeing to prevent dangling pointer.
    }
    else
    {
        printf("Memory allocation failed.\n");
    }
    return 0;
}