#include <iostream>
#include <string>

using namespace std;

string firstRepeatedChar(string s) {
  int mask[26] = {0};
  string ans = "";
  for (int i = 0; i < s.size(); i++) {
    mask[s[i] - 'a']++;
    if (mask[s[i] - 'a'] > 1) {
      ans += s[i];
      return ans;
    }
  }
  return "-1";
}

int main() {
  cout << firstRepeatedChar("geeksforgeeks");
  return 0;
}
