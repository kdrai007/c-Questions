#include <bits/stdc++.h>
using namespace std;

string reverseWords(string S)
{
    // add a word in string till next .
    // add the string in array;
    // on every . increase the counter.

    vector<string> arr;

    string s = "";
    for (int len = 0; len <= S.size(); len++)
    {
        s = s + S[len];
        if (S[len] == '.' || S[len] == ' ')
        {
            arr.push_back(s);

            // cout << str[count] << endl;
            s = "";
        }
    }
    int size = arr.size() - 1;
    for (int i = 0; i < size; i++)
    {
        s = s + arr[size - i];
    }
    s = s + arr[0];

    return s;
}

int32_t main()
{
    cout << reverseWords("yo.man.how.are.you.");
    return 0;
}