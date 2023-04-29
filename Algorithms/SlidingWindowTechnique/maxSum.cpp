#include <iostream>
using namespace std;

int maxSum(int arr[], int n, int k)
{
    int sum = 0, maxSum = INT_MIN;

    for (int i = 0; i < n - k + 1; i++)
    {
        sum = 0;
        for (int j = 0; j < k; j++)
        {
            sum += arr[j + i];
        }
        cout << "sum =" << sum << endl;
        maxSum = maxSum < sum ? sum : maxSum;
    }
    return maxSum;
}

int32_t main()
{
    int arr[] = {100, 200, 300, 400, 500, 600, 700, 800};
    cout << maxSum(arr, 8, 4);
    return 0;
}