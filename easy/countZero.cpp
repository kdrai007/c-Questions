#include <iostream>
using namespace std;

int countZero(int arr[], int n) {
  int s = 0, e = n - 1, mid;
  while (s <= e) {
    int mid = s + (e - s) / 2;
    if (arr[mid] == 0 && arr[mid - 1] == 1) {
      return n - mid;
    } else if (arr[mid] == 1) {
      s = mid + 1;
    } else if(arr[mid]==0){
      e = mid - 1;
    }
  }
  return n - mid;
}

int main() {
  int N = 12, Arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0};
  cout << countZero(Arr, N);
  return 0;
}
