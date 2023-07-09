#include <iostream>
#include <string>
using namespace std;

//
void substringOfArray(string a, string sbstr, string out, int &str)
{
    if (a.empty())
    {
        if (out == sbstr)
        {
            str = 1;
        }
        return;
    }
    substringOfArray(a.substr(1), sbstr, out + a[0], str);
    substringOfArray(a.substr(1), sbstr, out, str);
}
bool isSubSequence(string A, string B)
{
    int str = 0;
    substringOfArray(B, A, "", str);
    return str;
}

// optmise solution

bool checkSubsequence2(string a, string b)
{
    int sizeA = a.size(), sizeB = b.size(), j = 0;
    for (int i = 0; i < sizeB; i++)
    {
        if (a[j] == b[i])
            j++;
    }
    if (j == sizeA)
        return true;
    return false;
}

int32_t
main()
{
    string str1 = "hel";
    string str2 = "el";
    cout << checkSubsequence2("elsg", str1);
    return 0;
}