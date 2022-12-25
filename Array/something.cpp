#include <bits/stdc++.h>
using namespace std;

int something(int arr[], int n, int x)
{
    int i = 0;
    while (i < n)
    {
        if (arr[i] > x)
            break;
        i++;
    }
    return i - 1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << arr[something(arr, n, 6)];

    return 0;
}