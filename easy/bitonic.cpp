#include <iostream>
using namespace std;

int findMaximum(int arr[], int n) {
  int start = 0, end = n;
  while (start < end) {
    int mid = start + (end - start) / 2;
    if (arr[mid] < arr[mid + 1])
      start = mid + 1;
    else
      end = mid;
  }
  return arr[start];
}

int main() {
  int n = 9, arr[] = {1, 15, 25, 45, 42, 21, 17, 12, 11};
  cout << findMaximum(arr, n);
  return 0;
}
