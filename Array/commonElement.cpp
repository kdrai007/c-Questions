#include <bits/stdc++.h>
using namespace std;
vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    unordered_set<int> store;
    vector<int> ans;
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n1 && j < n2 && k < n3)
    {
        if (A[i] == B[j] && B[j] == C[k])
        {
            store.insert(A[i]);
            i++;
            j++;
            k++;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else if (B[j] < C[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    for (auto it : store)
    {
        ans.push_back(it);
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    return 0;
}