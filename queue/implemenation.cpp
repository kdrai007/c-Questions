#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void enqueue(queue<int> &q, int x)
    {
        q.push(x);
    }

    void dequeue(queue<int> &q)
    {
        q.pop();
    }

    int front(queue<int> &q)
    {
        return q.front();
    }

    string find(queue<int> q, int x)
    {
        if (!q.empty())
        {
            if (q.front() == x)
                return "Yes";
            q.pop();
        }
        return "No";
    }
};

int main()
{
    Solution sol;
    queue<int> q;
    sol.enqueue(q, 5);
    return 0;
}