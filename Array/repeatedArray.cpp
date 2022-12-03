#include <bits/stdc++.h>
using namespace std;
vector<int> twoRepeated(int arr[], int n)
{
    map<int, int> map;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }
    for (auto x : map)
    {
        if (x.second > 1)
            v1.push_back(x.first);
    }
    return v1;
}
int main()
{
    int arr[] = {1, 2, 1, 3, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (auto x : twoRepeated(arr, n))
    {
        cout << x;
    }
    return 0;
}