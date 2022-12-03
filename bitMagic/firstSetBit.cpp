#include <bits/stdc++.h>
using namespace std;

unsigned int getFirstSetBit(int n)
{
    for (int i = 1; i < 32; i++)
    {
        // cout << i << endl;
        if ((n & (1 << i)) != 0)
        {
            return i + 1;
        }
    }
}

int32_t main()
{
    cout << getFirstSetBit(-4) << endl;
    return 0;
}