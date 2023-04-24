#include <iostream>
#include <stack>
#include <string>

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
string removePair(string str)
{
    string ans = "";
    stack<char> st;
    st.push(str[0]);
    for (int i = 1; i < str.length(); i++)
    {
        if (st.empty())
        {
            st.push(str[i]);
        }
        else
        {
            if (st.top() == str[i])
            {
                st.pop();
            }
            else
            {
                st.push(str[i]);
            }
        }
    }
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    ans = reverseString(ans);
    return ans;
}

int32_t main()
{
    cout << removePair("aaabbccd");
    return 0;
}