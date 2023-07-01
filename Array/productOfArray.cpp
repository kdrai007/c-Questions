#include <iostream>
#include <vector>
using namespace std;

void productExceptSelf(vector<long long int> &nums, int n)
{
    vector<long long int> v;
    long long int sum = 1;
    for (int i = 0; i < n; i++)
    {
        sum *= nums[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << sum / nums[i] << endl;
    }
}
int32_t main()
{
    vector<long long int> v = {10, 3, 5, 6, 2};
    productExceptSelf(v, 5);
    return 0;
}