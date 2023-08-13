#include <climits>
#include <iostream>
#include <math.h>
using namespace std;

int findSum(int arr[], int n) {
  int mn = INT_MAX;
  int mx = INT_MIN;
  for (int i = 0; i < n; i++) {
    mn = min(arr[i], mn);
    mx = max(arr[i], mx);
  }
  return mx + mn;
}

int main() {
  int N = 5, A[] = {-2, 1, -4, 5, 3};
  cout << findSum(A, N);
  return 0;
}

