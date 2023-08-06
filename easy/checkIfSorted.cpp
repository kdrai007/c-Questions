#include <iostream>
using namespace std;
bool arraySortedOrNot(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    if (arr[i] > arr[i + 1])
      return false;
  }
  return true;
}

int main() {
  int N = 6;
  int arr[] = {90, 80, 100, 70, 40, 30};
  cout << arraySortedOrNot(arr, N);
  return 0;
}
