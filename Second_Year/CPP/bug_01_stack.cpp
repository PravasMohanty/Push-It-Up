// Bug Hunt: Stack Implementation (Push/Pop)
// Difficulty: Second Year - Medium
// Description: Simple stack using array

#include <iostream>
using namespace std;

class Stack
{
private:
    int arr[100];
    int top = -1;

public:
    void push(int val)
    {
        arr[++top] = val;
    }

    int pop()
    {
        if (top == -1)
            return -1;
        return arr[top--];
    }

    void display()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Popped: " << s.pop() << endl; // Expected: 30
    s.display();                           // Expected: 10 20
    return 0;
}
