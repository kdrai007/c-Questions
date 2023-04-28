#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int distributeChoclate(int p[], int n, int m)
{
    sort(p, p + n);
    int minNo = INT_MAX;
    int maxNo = INT_MIN;
    for (int i = 0; i < m; i++)
    {
        minNo = min(p[i], minNo);
        maxNo = max(p[i], maxNo);
    }
    int diff = maxNo - minNo;
    int minSum = diff;
    for (int i = m; i < n; i++)
    {
        // cout << diff << " ";
        cout << p[i - (m - 1)] << " " << p[i] << endl;
        diff = p[i] - p[i - (m - 1)];
        minSum = min(minSum, diff);
    }
    // cout << endl;
    return minSum;
}

int32_t main()
{
    //{1,3,4,7,9,9,12,56};
    int p[] = {7, 3, 2, 4, 9, 12, 56};
    int n = sizeof(p) / sizeof(p[0]);
    // cout << n << endl;
    cout << distributeChoclate(p, n, 3);
    return 0;
}
