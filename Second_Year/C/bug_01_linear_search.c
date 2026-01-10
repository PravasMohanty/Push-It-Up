// Bug Hunt: Linear Search in Array
// Difficulty: Second Year - Medium
// Description: Find index of element in array, return -1 if not found

#include <stdio.h>

int linear_search(int arr[], int size, int target)
{
    for (int i = 1; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    printf("Index of 10: %d\n", linear_search(numbers, 5, 10)); // Expected: 0, Got: -1
    printf("Index of 30: %d\n", linear_search(numbers, 5, 30)); // Expected: 2
    return 0;
}
