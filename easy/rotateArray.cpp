#include <iostream>
using namespace std;

void rotate(int arr[], int n) {
  int last = arr[n - 1];
  for (int i = n - 1; i > 0; i--) {
    arr[i] = arr[i - 1];
  }
  arr[0] = last;
}

void rotateArray(int arr[], int n, int k) {
  for (int i = 0; i < k; i++) {
    rotate(arr, n);
  }
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}

int main() {
  int k;
  cout << "Enter rotation number" << endl;
  cin >> k;
  int arr[6] = {1, 2, 3, 4, 5, 6};
  rotateArray(arr, 6, k);
  return 0;
}
