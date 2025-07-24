/*
	malloc, calloc, realloc, free

	Dynamic Memory Allocation in C
	---------------------------------
	This program demonstrates the use of dynamic memory allocation functions in C:
	- malloc: Allocates a block of memory of a specific size.
	- calloc: Allocates a block of memory for an array and initializes all elements to 0.
	- realloc: Resizes a previously allocated block of memory.
	- free: Frees the allocated memory to prevent memory leaks.

	Key Concepts:
	1. Memory is allocated from the heap during runtime.
	2. Dynamically allocated memory must be managed manually (freed using `free`).
	3. Pointers are used to access and manipulate the allocated memory.
	4. Each function demonstrates a specific dynamic memory operation.

	 mallocDemo: Demonstrates memory allocation using `malloc`.
	- Parameters:
	  - **A: A pointer to a pointer of type int (to dynamically allocate memory).
	  - sizeOfArray: A pointer to the size of the array.
	- What it does:
	  - Allocates memory for an array of integers using `malloc`.
	  - Fills the array with values from 1 to `sizeOfArray`.
	  - Prints the elements of the array.
	- Key Note: `malloc` does not initialize the memory; it contains garbage values unless explicitly initialized.

	callocDemo: Demonstrates memory allocation using `calloc`.
	- Parameters:
	  - **B: A pointer to a pointer of type int (to dynamically allocate memory).
	  - sizeOfArray: A pointer to the size of the array.
	- What it does:
	  - Allocates memory for an array of integers using `calloc`.
	  - Fills the array with values from 1 to `sizeOfArray`.
	  - Prints the elements of the array.
	- Key Note: `calloc` initializes all allocated memory to 0.

	reallocDemo: Demonstrates resizing memory using `realloc`.
	- Parameters:
	  - **C: A pointer to a pointer of type int (to dynamically resize memory).
	  - sizeOfArray: A pointer to the current size of the array.
	- What it does:
	  - Resizes the memory allocated for the array to half its current size.
	  - Prints the elements of the resized array.
	- Key Note: `realloc` can increase or decrease the size of allocated memory.
	  If the new size is smaller, excess memory is freed.
	  If the new size is larger, new memory is allocated, and existing values are preserved.

	  comments generated using OpenAI GPT-4o
*/
#include <stdio.h>
#include <stdlib.h>

void mallocDemo(int **A, int *sizeOfArray)
{
	int i;
	*A = (int *)malloc(*sizeOfArray * sizeof(int));

	if (*A == NULL)
	{
		printf("malloc failed.\n");
		return;
	}

	printf("\nmalloc:\n");
	for (i = 0; i < *sizeOfArray; i++)
	{
		(*A)[i] = i + 1;
	}

	for (i = 0; i < *sizeOfArray; i++)
	{
		printf("%d ", (*A)[i]);
	}
	printf("\n");
}

void callocDemo(int **B, int *sizeOfArray)
{
	int i;
	*B = (int *)calloc(*sizeOfArray, sizeof(int));

	if (*B == NULL)
	{
		printf("calloc failed.\n");
		return;
	}

	printf("\ncalloc (initial values):\n");
	for (i = 0; i < *sizeOfArray; i++)
	{
		printf("%d ", (*B)[i]);
	}
	printf("\n");

	printf("\ncalloc:\n");
	for (i = 0; i < *sizeOfArray; i++)
	{
		(*B)[i] = i + 1;
	}

	for (i = 0; i < *sizeOfArray; i++)
	{
		printf("%d ", (*B)[i]);
	}
	printf("\n");
}

void reallocDemo(int **C, int *sizeOfArray)
{
	int newSize = *sizeOfArray / 2;
	if (newSize == 0)
	{
		printf("New size after realloc would be 0. Exiting.\n");
		return;
	}

	int *temp = NULL;
	temp = (int *)realloc(*C, newSize * sizeof(int));

	if (temp == NULL)
	{
		printf("realloc failed.\n");
		return;
	}

	*C = temp;
	*sizeOfArray = newSize;

	printf("\nArray after realloc:\n");
	for (int i = 0; i < *sizeOfArray; i++)
	{
		printf("%d ", (*C)[i]);
	}
	printf("\n");
}

int main()
{
	int sizeOfArray;
	int *A = NULL, *B = NULL, *C = NULL;

	system("cls");

	printf("Enter size of array: ");
	if (scanf("%d", &sizeOfArray) != 1 || sizeOfArray <= 0)
	{
		printf("\nInvalid input or size <= 0. Exiting.\n");
		return 1;
	}

	mallocDemo(&A, &sizeOfArray);
	callocDemo(&B, &sizeOfArray);

	C = (int *)malloc(sizeOfArray * sizeof(int));

	if (C == NULL)
	{
		printf("malloc for C failed.\n");
	}
	else
	{
		for (int i = 0; i < sizeOfArray; i++)
		{
			C[i] = i + 1;
		}

		printf("\nInitial array for realloc:\n");
		for (int i = 0; i < sizeOfArray; i++)
		{
			printf("%d ", C[i]);
		}

		printf("\n");

		reallocDemo(&C, &sizeOfArray);
	}

	free(A);
	free(B);
	free(C);

	return 0;
}