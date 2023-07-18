#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void powerSet(string s, string output, int idx, vector<string> &ans)
{
    if (output.size() >= s.size())
    {
        ans.push_back(output);
        return;
    }
    powerSet(s, output + s[idx], idx + 1, ans);
    powerSet(s.substr(1), output, idx, ans);
}

int32_t main()
{
    vector<string> ans;
    powerSet("abc", "", 0, ans);
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}