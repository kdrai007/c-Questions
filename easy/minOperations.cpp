#include <iostream>
using namespace std;

int minOperations(int n) {
  int ans = 0;
  while (n > 0) {
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = n - 1;
    }
    ans++;
  }
  return ans;
}

int main() {
  cout << minOperations(8);
  return 0;
}
