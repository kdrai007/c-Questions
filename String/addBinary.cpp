#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

string AddBinary(string a, string b) {
  string res = "";
  int i = a.length() - 1, j = b.length() - 1;
  int carry = 0;
  while (i >= 0 || j >= 0 || carry) {
    if (i >= 0) {
      carry += a[i--] - '0';
    }
    if (j >= 0) {
      carry += b[j--] - '0';
    }
    res += carry % 2 + '0';
    carry /= 2;
  }
  reverse(res.begin(), res.end());
  return res;
}

int main() {
  string a = "1010", b = "1011";
  AddBinary(a, b);
  return 0;
}
