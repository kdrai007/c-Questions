#include <iostream>
#include <stack>
using namespace std;

class MyStack
{
private:
    int arr[10];
    int top;

public:
    MyStack() { top = -1; }
    int pop();
    void push(int);
    void print()
    {
        for (int i = 0; i < top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

void MyStack ::push(int x)
{
    arr[++top] = x;
}

// Function to remove an item from top of the stack.
int MyStack ::pop()
{
    return arr[top--];
}

int32_t main()
{
    MyStack m;
    m.push(15);
    m.push(16);
    m.push(17);
    m.pop();
    m.print();
    return 0;
}