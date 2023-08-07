#include <iostream>
using namespace std;

int findExtra(int a[], int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int N = 6 A[] = {3, 5, 7, 9, 11, 13} B[] = {3, 5, 7, 11, 13};
    findExtra(A, B, N);
    return 0;
}