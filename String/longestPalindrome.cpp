#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int longestPalindrome(string s)
{
    unordered_map<char, int> freq;
    for (auto x : s)
    {
        freq[x]++;
    }
    int odd_count = 0;
    int palindromeLength = 0;
    for (auto p : freq)
    {
        if (p.second % 2 != 0)
        {
            odd_count++;
            palindromeLength += p.second - 1;
        }
        else
        {
            palindromeLength += p.second;
        }
    }
    if (odd_count > 0)
    {
        palindromeLength++;
    }
    return palindromeLength;
}

int32_t main()
{
    cout << longestPalindrome("papa");
    return 0;
}