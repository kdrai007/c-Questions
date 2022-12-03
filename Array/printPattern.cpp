#include <iostream>
#include <vector>
using namespace std;

void pattern(int n)
{
    cout << n << " ";
    int i = n - 5;
    cout << i << " ";
    bool flag = false;
    while (i != n)
    {
        if (i <= 0)
            flag = true;
        if (i > 0 && !flag)
        {
            i = i - 5;
            cout << i << " ";
        }
        else if (flag)
        {
            i = i + 5;
            cout << i << " ";
        }
    }
}

int32_t main()
{
    pattern(10);
    return 0;
}