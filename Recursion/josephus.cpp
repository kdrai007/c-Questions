#include <bits/stdc++.h>
using namespace std;

int jos(int n, int k)
{
    if (n == 1)
        return 0;
    return (jos(n - 1, k) + k) % n;
}
int josephus(int n, int k)
{
    return jos(n, k);
}

int32_t main()
{
    cout << josephus(5, 3);
    return 0;
}