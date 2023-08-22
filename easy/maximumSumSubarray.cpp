#include <iostream>
#include <climits>
#include <pthread.h>
using namespace std;

// Not so efficient approch
long maxSumSubarray(int arr[], int n, int k) {
  long long sum = 0;
  for (int i = 0; i < k; i++) {
    sum += arr[i];
  }
  if (n == k)
    return sum;
  for (int i = 1; (i + k - 1) < n; i++) {
    long long isum = 0;
    for (int j = i; j < i + k; j++) {
      isum += arr[j];
    }
    cout << sum << endl;
    sum = max(isum, sum);
  }

  return sum;
}

// Efficient approch

long maxSubarray(int arr[], int k, int n) {
  long sum = 0, mSum = INT_MIN;
  int i = 0, j = 0;
  while (j < n) {
    if (j - i + 1 > k) {
      sum -= arr[i++];
    }
    sum += arr[j++];
    mSum = max(sum, mSum);
  }
  return mSum;
}

int main() {
  int N = 4, K = 3, Arr[] = {100, 200, 300, 400};
  // cout << maxSumSubarray(Arr, N, K);
  cout << maxSubarray(Arr, K,N);
  return 0;
}
