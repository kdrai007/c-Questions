#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(int arr[], int n, int x)
{
    unordered_map<int, int> m;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (m.find(x - arr[i]) != m.end())
        {
            v.push_back(m[x - arr[i]]);
            v.push_back(i);
            return v;
        }
        m[arr[i]] = i;
    }
    return v;
}

int main()
{
    int n = 4, K = 2, arr[] = {1, 2, 1, 5};
    vector<int> v1 = twoSum(arr, n, K);
    for (auto x : v1)
    {
        cout << x << ",";
    }
    return 0;
}