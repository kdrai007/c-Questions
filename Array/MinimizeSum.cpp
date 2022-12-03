#include <bits/stdc++.h>
using namespace std;

int minValue(int a[], int b[], int n)
{
    if (n < 0)
        return 0;
    long long min = 0;
	sort(a,a+n);
	sort(b,b+n);
    for (int i = n; i > 0; i--)
    {
        min += a[i - 1] * b[n - i];
    }
    return min;
}

int main()
{
    int a[] = {3, 1, 1};
    int b[] = {6, 5, 4};
    cout << minValue(a, b, 3);
    return 0;
}
