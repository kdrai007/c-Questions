#include <iostream>
using namespace std;
int secondLargest(int arr[], int n)
{
    int first = arr[0];
    int second = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        if (arr[i] < first && arr[i] > second)
        {
            second = arr[i];
        }
    }
    return second;
}

int32_t main()
{
    int arr[5] = {22, 5, 12, 5, 25};
    cout << secondLargest(arr, 5);
    return 0;
}