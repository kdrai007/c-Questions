#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int n, int brr[], int m) {
  int i = n - 1;
  int j = m - 1;
  int k = n + m - 1;
  while (j >= 0) {
    if (i >= 0 && arr[i] >= brr[j]) {
      arr[k] = arr[i];
      i--;
    } else {
      arr[k] = brr[j];
      j--;
    }
    k--;
  }
  for (int i = 0; i < m + n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int a[] = {1, 2, 3, 0, 0, 0, 0};
  int b[] = {1, 2, 3, 4};

  int m = sizeof(b) / sizeof(b[0]);

  merge(a, 3, b, m);
  return 0;
}
