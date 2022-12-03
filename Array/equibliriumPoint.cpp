#include <iostream>
using namespace std;

int equlibriumPoint(int a[], int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return -1;
    long long sum[n];
    sum[0] = a[0];
    int rS = 0, lS = 0;
    for (int i = 1; i < n; i++)
    {
        sum[i] = a[i] + sum[i - 1];
    }

    for (int i = 1; i < n - 1; i++)
    {
        lS = sum[i] - a[i];
        rS = sum[n - 1] - sum[i];

        if (rS == lS)
        {
            return i;
        }
    }
    return -1;
}

int32_t main()
{
    int a[] = {1, 2, 6, 4, 0, -1};
    int n = sizeof(a) / sizeof(a[0]);
    cout << equlibriumPoint(a, n);
    return 0;
}

//[1,2,3,4,5]
//[1,3,6,10,15]