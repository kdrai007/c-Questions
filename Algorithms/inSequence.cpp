#include <iostream>
using namespace std;
int inSequence(int A, int B, int C)
{
    if (C == 0)
        return A == B;
    return (B - A) % C == 0 && (B - A) / C >= 0;
}

int32_t main()
{
    int A = 1, B = 3, C = 2;
    cout << inSequence(A, B, C);
    return 0;
}