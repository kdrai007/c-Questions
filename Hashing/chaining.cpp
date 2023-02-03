#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> separateChaining(int hashSize, int arr[], int n)
{
    vector<vector<int>> ans(hashSize);
    for (int i = 0; i < n; i++)
    {
        ans[arr[i] % hashSize].push_back(arr[i]);
    }
    return ans;
}

int main()
{
    int hashSize = 10, sizeOfArray = 6, arr[] = {92, 4, 14, 24, 44, 91};
    vector<vector<int>> hashTable;
    hashTable = separateChaining(hashSize, arr, sizeOfArray);
    for (int i = 0; i < hashTable.size(); i++)
    {
        if (hashTable[i].size() > 0)
        {
            cout << i << "->";
            for (int j = 0; j < hashTable[i].size() - 1; j++)
            {
                cout << hashTable[i][j] << "->";
            }
            cout << hashTable[i][hashTable[i].size() - 1];
            cout << endl;
        }
    }
    return 0;
}