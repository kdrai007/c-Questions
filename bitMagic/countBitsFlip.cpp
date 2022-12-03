#include <bits/stdc++.h>
using namespace std;

int countBitFit(int a, int b)
{
    return (a | b);
}

int32_t main()
{
    cout << countBitFit(10, 20);
    return 0;
}