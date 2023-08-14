#include <iostream>
using namespace std;

void swapElement(int arr[], int n)
{
    for (int i = 0; i < n - 2; i++)
    {
        swap(arr[i], arr[i + 2]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    swapElement(arr, n);
    return 0;
}