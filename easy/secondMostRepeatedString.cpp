#include <iostream>
#include<string>
#include <unordered_map>
using namespace std;

string secFrequent(string str[], int n) {
  unordered_map<string, int> mp;
  for (int i = 0; i < n; i++) {
    mp[str[i]]++;
  }
  int maxOcc = 0;
  for (auto s : mp) {
    maxOcc = max(maxOcc, s.second);
  }
  string ans = "";
  int secondOcc = 0;
  for (auto s : mp) {
    if (s.second < maxOcc && s.second > secondOcc) {
      secondOcc = s.second;
      ans = s.first;
    }
  }
  return ans;
}

int main() {
  int N = 6;
  string str[] = {"geek", "for", "geek", "for", "geek", "aaa"};
  cout<<secFrequent(str , N);

  return 0;
}
