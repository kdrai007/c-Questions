#include <bits/stdc++.h>
using namespace std;

string reverseString(string str)
{
    string newStr = "";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        newStr += str[i];
    }
    return newStr;
}

string removeConsecutiveDuplicates(string s)
{
    stack<char> st;
    string ans = "";
    st.push(s[0]);
    for (int i = 1; i < s.length(); i++)
    {
        if (st.top() != s[i])
        {
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    ans = reverseString(ans);
    return ans;
    // return reverse();
}
int main()
{
    cout << removeConsecutiveDuplicates("aaaabbbbccccddddaaa");
    return 0;
}