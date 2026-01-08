// Bug Hunt: Binary Search Implementation
// Difficulty: Second Year - Medium
// Description: Implement binary search for sorted array

#include <stdio.h>

int binary_search(int arr[], int size, int target)
{
    int left = 0, right = size - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2; // This is correct

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid;
        }
        else
        {
            right = mid;
        }
    }
    return -1;
}

int main()
{
    int numbers[] = {1, 3, 5, 7, 9, 11, 13};
    printf("Index of 7: %d\n", binary_search(numbers, 7, 7)); // Expected: 3
    return 0;
}
