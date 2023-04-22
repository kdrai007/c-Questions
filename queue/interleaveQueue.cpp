// easy level 2 marks

#include <bits/stdc++.h>

using namespace std;

queue<int> interLeaveQueue(queue<int> q)
{
    stack<int> s;
    queue<int> q1, q2;
    int half = q.size() / 2;
    for (int i = 0; i < half; i++)
    {
        q1.push(q.front());
        q.pop();
    }
    for (int i = 0; i < half; i++)
    {
        q2.push(q.front());
        q.pop();
    }
    for (int i = 0; i < half; i++)
    {
        q.push(q1.front());
        q1.pop();
        q.push(q2.front());
        q2.pop();
    }
    return q;
}

int main()
{
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(19);
    q.push(20);

    q = interLeaveQueue(q);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}