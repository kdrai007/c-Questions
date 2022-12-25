#include <bits/stdc++.h>
#include <vector>
using namespace std;

void sortABS(int arr[], int n, int k)
{
    map<int, int> diff;

    // iterate through the array and calculate the absolute difference of each element with K
    for (int i = 0; i < n; i++)
        diff[arr[i]] = abs(arr[i] - k);

    // sort the map according to the absolute difference values
    sort(diff.begin(), diff.end(), [](const auto &a, const auto &b)
         { return a.second < b.second; });

    // iterate through the sorted map and add the elements to the result array
    int result[n];
    int j = 0;
    for (auto it : diff)
        result[j++] = it.first;

    // print the result array
    for (int i = 0; i < n; i++)
        cout << result[i] << " ";
}

int32_t main()
{
    int n = 5, k = 7,
        arr[] = {10, 5, 3, 9, 2};
    sortABS(arr, n, k);
    return 0;
}
// 5 4 3 2 1