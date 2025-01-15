/*
    Remove Duplicates from Sorted Array
*/

#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int *nums, int numsSize)
{
    int i = 0;
    for (int j = 1; j < numsSize; j++)
    {
        if (nums[i] != nums[j])
        {
            nums[i + 1] = nums[j];
            i++;
        }
    }
    return i + 1;
}

int main()
{
    // Test Case 1
    int nums1[] = {1, 1, 2};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int newSize1 = removeDuplicates(nums1, size1);

    system("cls");

    printf("Test Case 1:\n");
    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize1; i++)
    {
        printf("%d ", nums1[i]);
    }
    printf("\nNew size: %d\n\n", newSize1);

    // Test Case 2
    int nums2[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    int newSize2 = removeDuplicates(nums2, size2);

    printf("Test Case 2:\n");
    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize2; i++)
    {
        printf("%d ", nums2[i]);
    }
    printf("\nNew size: %d\n", newSize2);
    return 0;
}