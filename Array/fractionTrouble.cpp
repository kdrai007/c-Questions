#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

vector<int> largestFraction(int n, int d)
{
    int num = 0, den = 1;
    vector<int> ans;
    for (int q = 10000; q >= 2; q--)
    {
        int p = (n * q - 1) / d;
        if (p * den >= q * num)
        {
            num = p;
            den = q;
        }
    }
    int g = gcd(num, den);
    ans.push_back(num / g);
    ans.push_back(den / g);
    return ans;
}

int32_t main()
{
    vector<int> v1;
    v1 = largestFraction(2, 53);
    cout << v1[0] << " " << v1[1];
    return 0;
}