#include <iostream>
#include <stack>
#include <queue>

using namespace std;

queue<int> modifyQueue(queue<int> q, int k)

{
    // add code here.
    stack<int> s;
    queue<int> q1;
    int i = k;
    while (i > 0)
    {
        s.push(q.front());
        q.pop();
        i--;
    }

    while (!s.empty())
    {
        q1.push(s.top());
        s.pop();
    }
    while (!q.empty())
    {
        q1.push(q.front());
        q.pop();
    }
    return q1;
}