#include <iostream>
#include <string>
using namespace std;

bool isRotated(string str1, string str2)
{
    int s1 = str1.size();
    int s2 = str2.size();
    if (s1 != s2)
        return false;
    int i = 0;
    for (; i < s1; i++)
    {
        int j = (i + 2) % s1;
        if (str1[j] != str2[i])
        {
            break;
        }
    }
    if (i == s1)
        return true;
    int k = 0;
    for (; k < s1; k++)
    {
        int d = (k + 2) % s1;
        if (str1[k] != str2[d])
            break;
    }
    if (k == s1)
        return true;
    return false;
}

int32_t main()
{
    string a = "kdrai",
           b = "raikd";
    cout << isRotated(a, b);
    return 0;
}