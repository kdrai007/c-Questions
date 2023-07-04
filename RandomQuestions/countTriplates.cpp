#include <iostream>
using namespace std;

int countTriplates(int arr[], int n)
{
    int f = 0, l = 0, count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        l = i - 1;
        f = 0;
        while (f < l)
        {
            if (arr[f] + arr[l] == arr[i])
            {
                count++;
                f++;
                l--;
            }
            else if (arr[f] + arr[l] < arr[i])
            {
                f++;
            }
            else
                l--;
        }
    }
    return count;
}

int32_t main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << countTriplates(arr, n);
    return 0;
}