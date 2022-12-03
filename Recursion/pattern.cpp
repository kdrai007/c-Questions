#include <bits/stdc++.h>
using namespace std;
int i = 0;
bool flag = true;
void vectoR(int N)
{
    // take a array where a[0]=N;
    // while a[i]> 0 =a[i+1]=arr[i]-5;
    // when a[i]<= =a[i+1]=arr[i]+5;
    // then print the array;
    // Learn vector
    int arr[i];
    if (arr[i] == N)
    {
        return;
    }
    arr[0] = N;

    if (arr[i] <= 0)
    {
        flag = false;
    }
    if (arr[i] > 0 && flag)
    {
        i++;
        arr[i + 1] = arr[i] - 5;
        vectoR(N);
    }
    if (flag == false)
    {
        i++;
        arr[i + 1] = arr[i] + 5;
        vectoR(N);
    }
}

int32_t main()
{
    vectoR(10);
    return 0;
}