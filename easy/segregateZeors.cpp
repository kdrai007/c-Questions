#include <iostream>
using namespace std;

void segregate0and1(int arr[], int n) {
  int zeros = 0, ones = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == 0) {
      zeros++;
    } else {
      ones++;
    }
  }
  int i = 0;
  for (; i < zeros; i++) {
    arr[i] = 0;
  }
  while (i < n) {
    arr[i] = 1;
    i++;
  }
}

int main() {
  int N = 5, arr[] = {0, 0, 1, 1, 0};
  segregate0and1(arr,N);
  return 0;
}
