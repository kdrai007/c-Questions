#include <iostream>
#include <string>

using namespace std;

int longestDinstinct(string s) {
  int dCount = 0;
  int maxCount = 0;
  for (int i = 0; i < s.size() - 1; i++) {
    if (s[i] != s[i + 1])
      dCount++;
    else if (s[i] == s[i + 1])
      dCount = 0;
    cout << dCount << " ";
    maxCount = max(dCount, maxCount);
  }
  cout << endl;
  if(maxCount==0)return 1;
  return maxCount;
}

int main() {
  string str;
  cin >> str;
  cout << longestDinstinct(str);
  return 0;
}
