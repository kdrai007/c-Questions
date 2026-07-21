#include <bits/stdc++.h>
using namespace std;

bool anagram(string a, string b)
{
    unordered_map<char, int> ma, mb;
    if (a.length() != b.length())
        return false;
    for (int i = 0; i < a.length(); i++)
    {
        ma[a[i]]++;
        mb[b[i]]++;
    }

    if(ma==mb)return true;
    return false;
}

int32_t main()
{
   cout<< anagram("dd", "gg");
    return 0;
}

// if (a.length() != b.length())
//     return false;
// int freqa[26] = {0}, freqb[26] = {0};
// for (char ch : a)
//     freqa[ch - 'a']++;
// for (char ch : b)
//     freqb[ch - 'a']++;
// for (int i = 0; i < 26; i++)
//     if (freqa[i] != freqb[i])
//         return false;
// return true;
