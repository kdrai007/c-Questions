#include <iostream>
#include <string>

using namespace std;

string encode(string str) {
  string ans = "";
  int count = 1;
  char ch = str[0];
  for (int i = 1; i < str.size(); i++) {
    if (str[i] == ch) {
      count++;
    } else {
      ans += ch + to_string(count);
      ch = str[i];
      count = 1;
    }
  }
  ans += ch + to_string(count);
  return ans;
}

int main() {
  string str = "abbbcdddd";
  cout << encode(str);
  return 0;
}
