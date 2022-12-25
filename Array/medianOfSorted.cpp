#include <bits/stdc++.h>

using namespace std;

int median(int arr[], int n, int brr[], int m)
{
    vector<int> v1;
    for (int i = 0; i < n; i++)
        v1[i] = arr[i];
    for (int i = 0; i < m; i++)
        v1[i] = arr[i];
    sort(v1.begin(), v1.end());
    int low = 0;
    int high = v1.size() - 1;
    int mid = (low + high) / 2;
    if (v1.size() % 2 != 0)
    {
        return mid;
    }
    else
    {
        return (v1[mid] + v1[mid + 1]) / 2;
    }
}

int main()
{

    return 0;
}