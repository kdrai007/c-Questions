#include <iostream>
#include <map>
#include <string>
using namespace std;

char nonrepeatingCharacter(string S)
{
    char ch = '$';
    map<char, int> charCount;
    for (int i = 0; i < S.size(); i++)
    {
        charCount[S[i]]++;
    }

    for (int i = 0; i < S.size(); i++)
    {
        char val = S[i];
        if (charCount[val] == 1)
        {
            return val;
        }
    }
    return ch;
}

int32_t main()
{
    cout << nonrepeatingCharacter("sgsggewwgvsxxx");
    return 0;
}