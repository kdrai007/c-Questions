#include <iostream>
#include <vector>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    vector<int> v1;
    int i = 0, j = 0, last = 0;
    while (i < n and j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            if (last == arr1[i])
            {
                i++;
            }
            else
            {
                last = arr1[i];
                v1.push_back(arr1[i]);
                i++;
            }
        }
        else if (arr1[i] >= arr2[j])
        {
            if (last == arr2[j])
            {
                j++;
            }
            else
            {
                last = arr2[j];
                v1.push_back(arr2[j]);
                j++;
            }
        }
    }
    while (i < n)
    {
        if (last == arr1[i])
        {
            i++;
        }
        else
        {
            last = arr1[i];
            v1.push_back(arr1[i]);
            i++;
        }
    }
    while (j < m)
    {
        if (last == arr2[j])
        {
            j++;
        }
        else
        {
            last = arr2[j];
            v1.push_back(arr2[j]);
            j++;
        }
    }
    // return v1;
    return v1;
}

int32_t main()
{
    int arr1[] = {1, 1, 1, 1, 1}, arr2[] = {1, 2, 3};
    int n = sizeof(arr1) / sizeof(arr1[0]), m = sizeof(arr2) / sizeof(arr2[0]);
    vector<int> v = findUnion(arr1, arr2, n, m);
    for (auto x : v)
    {
        cout << x << " ";
    }
    return 0;
}