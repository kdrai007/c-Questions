#include <iostream>
using namespace std;
int findRotation(int arr[], int n) {
  int left = 0, right = n - 1;
  while (left < right) {
    int mid = left + (right - left) / 2;
    if (arr[mid] >= arr[0]) {
      left = mid + 1;
    } else if (arr[mid] < arr[0]) {
      right = mid;
    }
  }

  if (arr[left] < arr[0])
    return left;

  return 0;
}

int main() {
  int N = 5, Arr[] = {5, 1, 2, 3, 4};
  cout << findRotation(Arr, N);
  return 0;
}
