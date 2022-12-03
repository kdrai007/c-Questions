#include <bits/stdc++.h>
using namespace std;
void jugglerSequence(int N)
{
    if (N == 1)
        return;
    cout << N << endl;
    if (N % 2 == 0)
    {
        N = pow(N, 0.5);
        jugglerSequence(N);
    }
    else
    {
        N = pow(N, 1.5);
        jugglerSequence(N);
    }
}

int32_t main()
{
    jugglerSequence(9);
    return 0;
}