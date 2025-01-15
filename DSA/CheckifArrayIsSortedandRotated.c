/*
    Check if Array Is Sorted and Rotated
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool check(int *nums, int numsSize)
{
    int countBreaks = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] > nums[(i + 1) % numsSize])
        {
            countBreaks++;
        }
        if (countBreaks > 1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int nums1[] = {3, 4, 5, 1, 2};
    int nums2[] = {2, 1, 3, 4};
    int nums3[] = {1, 2, 3, 4, 5};

    system("cls");

    printf("Result 1: %s\n", check(nums1, 5) ? "true" : "false"); // true
    printf("Result 2: %s\n", check(nums2, 4) ? "true" : "false"); // false
    printf("Result 3: %s\n", check(nums3, 5) ? "true" : "false"); // true
    return 0;
}