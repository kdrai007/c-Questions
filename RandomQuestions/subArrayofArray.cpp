// calculate subarray of array
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> subArray(vector<int> arr)
{
    vector<vector<int>> subarrays;
    for (int i = 0; i < arr.size(); i++)
    {
        vector<int> subarr;
        for (int j = i; j < arr.size(); j++)
        {
            subarr.push_back(j);
            subarrays.push_back(subarr);
        }
    }
    return subarrays;
}

int32_t main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<vector<int>> subarr = subArray(arr);
    for (auto x : subarr)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}