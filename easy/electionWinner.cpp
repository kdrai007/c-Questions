#include <iostream>
#include <string>
using namespace std;

vector<string> winner(string arr[], int n) {
  unordered_map<string, int> mp;
  int mx = INT_MIN;
  string ans;
  for (int i = 0; i < n; ++i)
    mp[arr[i]]++;
  for (auto it : mp) {
    if (it.second > mx) {
      ans = it.first;
      mx = it.second;
    }
    if (it.second == mx) {
      if (ans > it.first)
        ans = it.first;
    }
  }
  return {ans, to_string(mx)};
}
