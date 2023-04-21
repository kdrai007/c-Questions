#include <bits/stdc++.h>
using namespace std;

string FirstNonRepeating(string A)
{
    unordered_map<char, int> cnt;
    queue<int> q;
    string ans = "";
    for (int i = 0; i < A.size(); i++)
    {
        char ch = A[i];

        cnt[ch]++;
        q.push(ch);
        while (!q.empty())
        {
            if (cnt[q.front()] > 1)
            {
                q.pop();
            }
            else
            {
                ans.push_back(q.front());
                break;
            }
        }
        if (q.empty())
        {
            ans += "#";
        }
    }
    return ans;
}

int main()
{
    cout << FirstNonRepeating("aabbccd");
    return 0;
}