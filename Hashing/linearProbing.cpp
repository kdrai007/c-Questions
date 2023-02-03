#include <bits/stdc++.h>
using namespace std;

vector<int> linearProbing(int hashSize, int arr[], int n)
{
    vector<int> ans(hashSize, -1);
    for (int i = 0; i < n; ++i)
    {
        int index = arr[i] % hashSize;
        if (ans[index] == -1)
            ans[index] = arr[i];
        else
        {
            int count = 0;
            while (ans[index] != -1 && count <= hashSize)
            {
                if (ans[index] == arr[i])
                    break;
                index = (index + 1) % hashSize;
                count++;
            }
            if (ans[index] == -1)
                ans[index] = arr[i];
        }
    }
    return ans;
}

int main()
{
    int hashSize = 10, sizeOfArray = 4, Array[] = {4, 14, 24, 44};
    vector<int> ans;
    ans = linearProbing(hashSize, Array, sizeOfArray);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}