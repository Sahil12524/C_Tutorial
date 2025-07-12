/*
    pointers and 2D arrays

    Difficulty: RIP 😭

    Very Important:
    Please note that when using pointers use appropriate brackets
    here we can write:
    a[3] = 7 as *(a + 3) = 7
    but see:
    *a + 3 = 7 ❌ is an invalid line where as
    *(a + 3) = 7 ✅ is an valid line
    here we are now dealing with 2D arrays so things are tricky now:
    here b[2][3] is an array of:
    2 1D arrays with 3 elements in each 1D array
    see how?: {{2, 3, 6}, {4, 5, 8}}
                0           1
    so here we made a pointer for 2D array like this:
    int (*pB)[3] = b;
    let's break down this confusing shit.
    Now pB is an pointer to 1D array of 3 int
    so here we took 3 because we have 3 elements in each 1D array.

    PLEASE REMEMBER!!!!!
    EACH 1D ARRAY IN 2D ARRAY HAS THEIR OWN ADDRESSES TOO.
    EXAMPLE:
    {2, 3, 6} HAS ADDRESS OF 400 SO,
    {4, 5, 8} WILL HAVE 412
    FROM THIS WHAT I MEAN IS 1st ELEMENT OF 1st 1D ARRAY IS HAVING ADDRESS 400 SO THE ADDRESS OF 1st 1D ARRAY WILL BE 400 AS WELL
    LIKE THIS FOR 2nd 1D ARRAY WILL BE 412 BECAUSE IT'S AS FOLLOW: 400 404 408 412
    SO THIS MEANS THAT EVERY 1D ARRAY WILL HOLD THE ADDRESS OF ITS STARTING ELEMENT :p

    Let's continue a bit more further:
    let's stick to array b.
    it's 2D array with 3 elements in each 1D array
    let's assume printf is now print in short to save time for effective learning.

    here are some basic operations on 2D b array.
    print(b) will print the address of 1st element of 1st 1D array.             400
    print(*b) will print the 1st element of the 1st 1D array.                   2
    print(b + 1) will print the address of 2nd 1D array.                        412
    print(*(*(b + 1) + 1)) will print the 2nd element of 2nd 1D array.          5

    (*pB)[1] is equivalent to pB[0][1] see because (*pB) is already pointing to 1st 1D array.

    here is an easy breakdown of *(*(pB + 1) + 1):
    pB is already pointing to a 3 elements of 1st 1D array.
    so pB + 1 will move the pointer to 2nd 1D array.
    we will derefer the pB + 1 like this: *(pB + 1) this is equivalent to &pB[1][0]
    now we will move the pointer to 2nd element by adding 1 like this: *(pB + 1) + 1 this is equivalent to &pB[1][1]
    we will now derefer the entire thing to get the value like this: *(*(pB + 1) + 1)
    *(*(pB + 1) + 1) is equivalent to pB[1][1] or b[1][1] or *(*(b + 1) + 1)

    *pB is equivalent to pB[0] or &pB[0][0]

    if something missing, please tell me!
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5] = {2, 4, 6, 8, 10};
    int *pA = NULL;
    pA = a;
    int b[2][3] = {{2, 3, 6}, {4, 5, 8}};
    int(*pB)[3] = NULL;
    pB = b;

    system("cls");

    printf("address of a[0]: %p\n", &a[0]);
    printf("address of pA: %p\n", pA);
    printf("address of a: %p\n", &a);

    printf("\nvalue at a[0]: %d\n", a[0]);
    printf("value at *pA: %d\n", *pA);
    printf("value at *a: %d\n", *a);

    printf("\naddress of a[1]: %p\n", &a[1]);
    printf("address at pA + 1: %p\n", (pA + 1));
    printf("address of a + 1: %p\n", a + 1);

    printf("\naddress at pB: %p\n", pB);
    printf("address of b[0][0]: %p\n", &b[0][0]);
    printf("address of b: %p\n", &b);
    printf("address of b[0]: %p\n", &b[0]);

    printf("\nvalue at pB[0][2]: %d\n", pB[0][2]);
    printf("value at (*pB)[2]: %d\n", (*pB)[2]);
    printf("value at b[0][2]: %d\n", b[0][2]);
    printf("value at *(*b + 2): %d\n", *(*b + 2));

    printf("\nvalue at *(*(pB + 1) + 1): %d\n", *(*(pB + 1) + 1));
    printf("value at *(*(b + 1) + 1): %d\n", *(*(b + 1) + 1));
    printf("value at b[1][1]: %d\n", b[1][1]);
    printf("value at pB[1][1]: %d\n", pB[1][1]);

    printf("\nvalue at *(*(pB + 1) + 2): %d\n", *(*(pB + 1) + 2));
    printf("value at *(*(b + 1) + 2): %d\n", *(*(b + 1) + 2));
    printf("value at b[1][2]: %d\n", b[1][2]);
    printf("value at pB[1][2]: %d\n", pB[1][2]);

    printf("\nvalue at (*pB)[1]: %d\n", (*pB)[1]);
    printf("value at (*b)[1]: %d\n", (*b)[1]);
    printf("value at b[0][1]: %d\n", b[0][1]);
    printf("value at pB[0][1]: %d\n", pB[0][1]);

    printf("\naddress of *(pB + 1): %p\n", *(pB + 1));
    printf("address of *(*(pB + 1)): %d\n", *(*(pB + 1)));
    printf("address of &pB[1][0]: %p\n", &pB[1][0]);
    printf("address of *(pB + 1): %p\n", *(pB + 1) + 1);
    printf("address of *(*(pB + 1) + 1): %d\n", *(*(pB + 1) + 1));

    return 0;
}
