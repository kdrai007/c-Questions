#include <iostream>
#include <string>
using namespace std;
string findLargest(int N, int S) {
  string ans;
  if (S == 0 && N > 1) {
    return "-1";
  }
  for (int i = 0; i < N; i++) {
    if (S >= 9) {
      ans.push_back('9');
      S -= 9;
    } else {
      ans = ans + to_string(S);
      S = 0;
    }
  }

  if (S == 0) {
    return ans;
  } else {
    return "-1";
  }
}

int main() {
  int n = 3, k = 20;
  cout << findLargest(n, k);
  return 0;
}
