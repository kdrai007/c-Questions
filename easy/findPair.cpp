#include <algorithm>
#include <iostream>
using namespace std;

bool findPair(int arr[], int n, int x) {
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) {
      if (i != j) {
        if (abs(arr[i] - arr[j]) == x)
          return true;
      }
    }
  return false;
}

int main() {
  int L = 6, N = 78, arr[] = {5, 20, 3, 2, 5, 80};
  cout<<findPair(arr,N,L);
  return 0;
}
