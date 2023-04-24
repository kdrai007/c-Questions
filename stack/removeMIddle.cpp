#include <iostream>
#include <stack>

using namespace std;
stack<int> reverseStack(stack<int> s)
{
    stack<int> s3;
    while (!s.empty())
    {
        s3.push(s.top());
        s.pop();
    }

    return s3;
}
void deleteMid(stack<int> &s, int sizeOfStack)
{

    if (sizeOfStack % 2 != 0)
        sizeOfStack--;
    int half = sizeOfStack / 2;
    stack<int> s2;
    while (half > 0)
    {
        s2.push(s.top());
        s.pop();
        half--;
    }
    s.pop();
    while (!s.empty())
    {
        s2.push(s.top());
        s.pop();
    }
    s = reverseStack(s2);
}

int32_t main()
{
    stack<int> s;
    for (int i = 1; i <= 4; i++)
    {
        s.push(i);
    }
    deleteMid(s, 4);
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    // deleteMid(s, 6);

    return 0;
}