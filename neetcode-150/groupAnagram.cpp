#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs) {
  vector<vector<string>> containsAnagram;
  unordered_map<string, vector<string>> ms;
  for (int i = 0; i < strs.size(); i++) {
    string word = strs[i];
    string key = word;
    sort(key.begin(), key.end());
    ms[key].push_back(word);
  }

  for (auto x : ms) {
    containsAnagram.push_back(x.second);
    for (int i = 0; i < x.second.size(); i++) {
      cout << x.second[i];
      cout << " , ";
    }
    cout << endl;
  }
  return containsAnagram;
}

int main() {
  vector<string> vs = {"cat", "dog", "god", "tac", "a"};
  groupAnagrams(vs);
  return 0;
}
