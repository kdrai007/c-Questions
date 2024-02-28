#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int n, int brr[], int m) {
  vector<int> v;
  int i = 0, j = 0;
  while (j < m || i < n) {
    if (arr[i] <= brr[j]) {
      arr[i] = arr[i];
      i++;
    } else {
        arr[i]=
      j++;
    }
  }
  for (int idx = 0; idx < n; idx++) {
    cout << arr[idx] << " ";
  }
}

int main() {
  int a[] = {1, 2, 3, 0, 0, 0};
  int b[] = {1, 2, 3};

  int n = sizeof(a) / sizeof(a[0]);
  int m = sizeof(b) / sizeof(b[0]);

  merge(a, n, b, m);
  return 0;
}
