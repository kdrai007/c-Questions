#include <iostream>
#include <string>
using namespace std;

int findMatching(string text, string pat)
{
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == pat[0])
        {
            int j = 0;
            for (j; j < pat.length(); j++)
            {
                cout << text[i + j];
                if (text[i + j] != pat[j])
                {
                    break;
                }
            }
            if (j == pat.length())
            {
                return i;
            }
        }
    }
    return -1;
}

int main()
{
    cout << findMatching("gffgfg", "gfg");
    return 0;
}