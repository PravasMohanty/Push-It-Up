// Bug Hunt: Factorial Calculation
// Difficulty: First Year - Easy
// Description: Calculate factorial of a number

#include <stdio.h>

int factorial(int n)
{
    int result = 1;
    int i = 1;
    // Added missing incrementation of i in the while loop with "i++;"
    while (i <= n)
    {
        result *= i;
        i++;
    }
    return result;
}

int main()
{
    printf("Factorial of 5: %d\n", factorial(5)); // Expected: 120
    return 0;
}
