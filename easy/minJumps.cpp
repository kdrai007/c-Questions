#include <iostream>
using namespace std;

int minJumps(int arr[], int n) {
  int jumps = 0, currentjump = 0, farthest = 0;
  for (int i = 0; i < n - 1; i++) {
    farthest = max(farthest, i + arr[i]);
    if (i == farthest)
      return -1;
    if (i == currentjump) {
      jumps++;
      currentjump = farthest;
    }
  }
  return jumps;
}

int main() {
  int N = 11, arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
  cout << minJumps(arr, N);
  return 0;
}
