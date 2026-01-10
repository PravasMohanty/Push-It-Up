// Bug Hunt: Array Sum
// Difficulty: First Year - Easy
// Description: Calculate sum of array elements

#include <stdio.h>

int sum_array(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i <= size; i++)  
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    int result = sum_array(numbers, 5);
    printf("Sum: %d\n", result); // Expected: 15
    return 0;
}
