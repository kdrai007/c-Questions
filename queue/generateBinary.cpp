#include <bits/stdc++.h>

using namespace std;

vector<string> generate(int n)
{
    vector<string> ans;
    queue<string> q;
    q.push("1");
    for (int i = 1; i <= n; i++)
    {
        ans.push_back(q.front());
        q.push(q.front() + "0");
        q.push(q.front() + "1");
        q.pop();
    }
    return ans;
}

int main()
{

    vector<string> s;
    s = generate(5);
    for (auto x : s)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}