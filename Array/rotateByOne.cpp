#include <bits/stdc++.h>
using namespace std;

void rotateByOne(int arr[], int n)
{
    int temp = arr[n - 1];

    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    for (int x = 0; x < n; x++)
    {
        cout << arr[x];
    }
}

int32_t main()
{
    int arr[] = {1, 2, 3, 4, 5};
    rotateByOne(arr, 5);

    return 0;
}