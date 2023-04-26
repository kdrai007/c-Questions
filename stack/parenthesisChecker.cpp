#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool parenthesisChecker(string str)
{
    stack<char> s;
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        if (s.empty())
        {
            s.push(str[i]);
        }
        else if ((s.top() == '(' && str[i] == ')') || (s.top() == '[' && str[i] == ']') || (s.top() == '{' && str[i] == '}'))
        {
            s.pop();
        }
        else
        {
            s.push(str[i]);
        }
    }
    if (s.empty())
        return true;
    return false;
}

int32_t main()
{
    cout << parenthesisChecker("[({)]}");
    return 0;
}