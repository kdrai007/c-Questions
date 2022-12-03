#include <bits/stdc++.h>
using namespace std;

int missingNumber(int array[], int n)
{
    // return n * (n + 1) * 0.5 - accumulate(array.begin(), array.end(), 0);
    int total = (n * (n + 1)) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += array[i];
    return total - sum;
}

int32_t main()
{
    int arr[7] = {2, 3, 5, 1, 4, 6};
    cout << missingNumber(arr, 7);

    return 0;
}