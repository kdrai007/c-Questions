#include <climits>
#include <math.h>
#include<algorithm>
#include <iostream>
using namespace std;

int findMaximum(int arr[], int n) {
  int mn = INT_MAX;
  int mx = INT_MIN;
  for (int i = 0; i < n; i++) {
    mn = min(arr[i], mn);
    mx = max(arr[i], mx);
  }
  return mx+mn;
}

int main() {
  int N = 5, A[] = {-2, 1, -4, 5, 3};
  cout << findMaximum(A, N);
  return 0;
}
