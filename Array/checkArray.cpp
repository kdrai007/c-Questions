#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool check(vector<int> A, vector<int> B, int N)
{
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int i = 0;
    for (i; i < N; i++)
    {
        if (A[i] != B[i])
            break;
    }
    if (i == N)
        return true;
    return false;
}
int32_t main()
{
    vector<int> v1, v2;
    v1 = {1, 2, 3, 4, 5};
    v2 = {5, 4, 3, 2, 1};
    cout << check(v1, v2, v1.size());
    return 0;
}