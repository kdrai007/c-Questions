#include <iostream>
#include <string>
using namespace std;

bool patternSearch(string str, string pat)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == pat[0])
        {
            int j;
            for (j = 0; j < pat.length(); j++)
            {
                if (str[i + j] != pat[j])
                {
                    break;
                }
            }
            if (j == pat.length())
                return true;
        }
    }
    return false;
}

int32_t main()
{
    if (patternSearch("abcd", "Dc"))
        cout << "Yes Present";
    else
        cout << "not present";
    return 0;
}