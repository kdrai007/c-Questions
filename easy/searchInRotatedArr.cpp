#include <iostream>
using namespace std;

int search(int A[], int l, int h, int key) {
    while (l <= h) {
    int mid = (l + h) / 2;
    if (A[mid] == key)
      return mid;
    if (A[l] <= A[mid]) {
      if (A[l] <= key && key < A[mid])
        h = mid - 1;
      else
        l = mid + 1;
    } else {
      if (key <= A[h] && key > A[mid])
        l = mid + 1;
      else
          h = mid - 1;
    }
  }
  return -1;
}

int main() {
  int N = 9;
  int A[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
  int key = 10;
  int l = 0, h = 8;
  cout << search(A, l, h, key) << endl;
  return 0;
}
