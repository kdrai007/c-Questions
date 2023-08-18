#include <iostream>
using namespace std;

int minNumber(int arr[], int low, int high) {
  int mid;
  while (low <= high) {
    mid = low + (high - low) / 2;

    if (arr[mid] > arr[high]) {
      low = mid + 1;
    } else if (arr[mid] < arr[low]) {
      high = mid;
    } else
      return arr[low];
  }
  return arr[low];
}

int main() {
  int arr[] = {2, 3, 4, 5, 6, 7, 1};
  int n = 7;
  cout << minNumber(arr, 0, n - 1);
  return 0;
}
