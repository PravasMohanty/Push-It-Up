// Bug Hunt: Swap Two Numbers
// Difficulty: First Year - Easy
// Description: Swap two numbers without using third variable

#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10;

    a = a + b;
    b = a - b;

    cout << "a = " << a << ", b = " << b << endl; // Expected: a = 10, b = 5

    return 0;
}
