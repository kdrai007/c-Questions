#include <iostream>
#include <string>
using namespace std;

int findOccurance(string haystack, string needle) {
  int nLen = needle.length();
  for (int i = 0; i < haystack.length(); i++) {
    string str = haystack.substr(i, nLen);
    if (str == needle)
      return i;
  }
  return -1;
}

int main() {
  string haystack = "leetcode", needle = "leet";
  int ind = findOccurance(haystack, needle);
  cout << ind;
}
