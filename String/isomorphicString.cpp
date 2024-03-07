#include <iostream>
#include <string>
#include <map>
using namespace std;

void isIsomorphic(string s, string t)
{
    map<char, char> mp;
    if (s.size() != t.size())
        return;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]] = t[i];
    }
    for (auto x : mp)
    {
        cout << x.first << "=" << x.second << endl;
    }
}

int32_t main()
{
    isIsomorphic("bool", "tool");
    return 0;
}


