#include <iostream>
#include <unordered_map>
using namespace std;

int firstNonRepeating(int arr[], int n) {
  unordered_map<int, int> mp;
  for (int i = 0; i < n; i++) {
    mp[arr[i]]++;
  }
  for (int i = 0; i < n; i++) {
    auto v = mp.find(arr[i]);
    if (v->second == 1) {
      return v->first;
    }
  }
  return 0;
}

int main() {
    
int arr[] = {-1, 2, -1, 3, 2};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<firstNonRepeating(arr,n);
    return 0; }
