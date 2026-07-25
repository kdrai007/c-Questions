#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs) {
  // init - the data structures
  vector<vector<string>> containsAnagram;
  unordered_map<string, vector<string>> ms;
  // store the key,value pairs in the map.
  for (string word : strs) {
    string key = word;
    // sorting the key
    sort(key.begin(), key.end());
    // pushing the words that matches the sorted str
    ms[key].push_back(word);
  }

  for (auto &[key, value] : ms)
    // now, let's just push the value in the containsAnagram vector.
    containsAnagram.push_back(value);
  return containsAnagram;
}

int main() {
  vector<string> vs = {"cat", "dog", "god", "tac", "a"};
  groupAnagrams(vs);
  return 0;
}
