#include <bits/stdc++.h>
using namespace std;
bool rotatedString(string str1, string str2)
{
    string temp1, temp2;
    int len1 = str1.length(), len2 = str2.length();
    if (str2.length() < str2.length())
        return false;
    if (str1.length() == 2)
    {
        return str1 == str2;
    }
    temp1.append(str1.substr(2, len1 - 2));
    temp1.append(str1.substr(0, 2));

    temp2.append(str1.substr(len1 - 1, 2));
    temp2.append(str1.substr(0, len1 - 2));

    if (temp1 == str2)
        return true;
    if (temp2 == str2)
        return true;
    return false;
}

int32_t main()
{
    if (rotatedString("amazon", "azonam"))
        cout << "Roated by 2 place";
    else
        cout << "not roated";
    return 0;
}