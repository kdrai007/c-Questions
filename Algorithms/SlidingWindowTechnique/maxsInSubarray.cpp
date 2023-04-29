#include <iostream>
#include <vector>

using namespace std;

// vector<int>

void max_of_subarrays(int *arr, int n, int k)
{
    int maX = INT_MIN;

    for (int i = 0; i < k; i++)
    {
        maX = max(maX, arr[i]);
    }
    cout << maX << " ";
    for (int i = 1; i < n; i++)
    {
        if (i + k > n)
            break;
        for (int j = i; j < i + k; j++)
        {
            maX = max(maX, arr[j]);
        }
        cout << maX << " ";
    }
}

int32_t main()
{
    int arr[] = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13};
    int N = 10, K = 4;
    max_of_subarrays(arr, N, K);
    return 0;
}