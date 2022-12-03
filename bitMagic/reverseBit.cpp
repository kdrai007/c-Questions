#include <bits/stdc++.h>
using namespace std;

bool kthbitset(int k, unsigned int n)
{
    return ((n & (1 << k - 1)) != 0);
}

int reverseBit(int n)
{

    unsigned int ans = 0;
    {
        for (int i = 1; i <= 32; i++)
            if (kthbitset(i, n))
            {
                ans = (1 << (32 - i)) | ans;
            }
    }
    return ans;
}

int main()
{
    int num = 10;
    cout << reverseBit(num);
    return 0;
}