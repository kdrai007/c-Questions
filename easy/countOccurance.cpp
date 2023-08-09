#include <iostream>
#include <unordered_map>
using namespace std;

int countOccurances(int arr[], int n, int k) {
  unordered_map<int, int> mp;
  for (int i = 0; i < n; i++)
    mp[arr[i]]++;
  int cnt = 0;
  for (auto x : mp) {
    if (x.second > n / k)
      cnt++;
  }
  return cnt;
}

int main() {
  int N = 8, arr[] = {3, 1, 2, 2, 1, 2, 3, 3}, k = 4;
cout<<countOccurances(arr,N,k);
  return 0;
}
