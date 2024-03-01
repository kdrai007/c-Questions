#include <iostream>
using namespace std;

int sqrtOfX(int x) {
  unsigned int left = 0, right = x;
  while (left < right) {
    long long mid = left + ((right - left + 1) >> 1);
    if (mid <= x / mid) {
      left = mid;
    } else {
      right = mid - 1;
    }
  }
  return static_cast<int>(left);
}

int main() {
  int x;
  cout << "Enter No to find sqrt: ";
  cin >> x;
  int res = sqrtOfX(x);
  cout << endl;
  cout << res;
  return 0;
}
