#include <iostream>
#include <string>
#include <vector>
using namespace std;

void check(string s, int idx, vector<string> &ans)
{
    if (idx >= s.size())
    {
        // cout << s << endl;
        ans.push_back(s);
        return;
    }
    for (int i = idx; i < s.size(); i++)
    {
        swap(s[idx], s[i]);
        check(s, idx + 1, ans);
        swap(s[idx], s[i]);
    }
}

vector<string> permutations(string str)
{
    vector<string> ans;
    int idx = 0;
    check(str, idx, ans);
    return ans;
}

int32_t main()
{
    vector<string> ans;
    ans = permutations("abc");
    for (string x : ans)
    {
        cout << x << " ";
    }
    return 0;
}