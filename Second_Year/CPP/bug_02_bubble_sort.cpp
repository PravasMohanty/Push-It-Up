// Bug Hunt: Bubble Sort Algorithm
// Difficulty: Second Year - Medium
// Description: Sort array using bubble sort

#include <iostream>
using namespace std;

void bubble_sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j + 1];
                arr[j + 1] = arr[j];
            }
        }
    }
}

int main()
{
    int arr[] = {5, 2, 8, 1, 9};
    int size = 5;

    bubble_sort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl; // Expected: 1 2 5 8 9

    return 0;
}
