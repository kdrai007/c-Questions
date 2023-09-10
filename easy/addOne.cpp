#include <iostream>
#include <string>
#include <vector>
using namespace std;

string addOne(string num) {
  int ans = stoi(num) + 1;
  return to_string(ans);
}
// This function can throw error in some cases but it's written by me so i'am
// gonna keep it
vector<int> findOne(vector<int> arr, int n) {
  vector<int> ans;
  string num = "";
  for (int i = 0; i < n; i++) {
    num += to_string(arr[i]);
  }
  num = addOne(num);
  for (int i = 0; i < num.size(); i++) {
    int n = num[i] - '0';
    ans.push_back(n);
  }
  return ans;
}

// This is the right solution for this problem
vector<int> find(vector<int> arr, int N) {
  for (int i = N - 1; i >= 0; i--) {
    if (arr[i] == 9) {
      arr[i] = 0;
    } else {
      arr[i]++;
      return arr;
    }
  }
  arr[0] = 1;
  arr.push_back(0);
  return arr;
}

int main() {
  vector<int> arr = {9, 9, 9};
  vector<int> ans = find(arr, arr.size());
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
  return 0;
}
