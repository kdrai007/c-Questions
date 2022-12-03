// Given a number n the task is to find the minimum number which is divisible by all numbers from 1 to n. //Print the answer modulo (109+7)

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int numberGame(int n)
{
    if (n == 0)
        return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
    {
        int hcf = gcd(i, res);
        res = (res * i / hcf) % 1000000007;
    }
    return res;
}

int32_t main()
{
    cout << numberGame(3);
    return 0;
}