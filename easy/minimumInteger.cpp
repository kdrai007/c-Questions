#include <climits>
#include <iostream>
using namespace std;

int minInteger(int arr[], int n) {
  int sum = 0;
  int minInteger = INT_MAX;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  for (int i = 0; i < n; i++) {
    if (sum <= n * arr[i]) {
      minInteger = min(arr[i], minInteger);
    }
  }
  return minInteger;
}

int main() {
  int N = 3, A[] = {1, 3, 2};
  cout << minInteger(A, N);
  return 0;
}
