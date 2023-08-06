#include <iostream>
using namespace std;

void countEvenOdd(int arr[], int n) {
  int e = 0, o = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 == 0)
      e++;
    else
      o++;
  }
  cout << e << " " << o;
  cout << endl;
}

int main() {

  int arr[] = {2, 5, 2,  52, 2,  2, 6,  2, 26, 6, 26, 2,
               6, 6, 26, 2,  62, 2, 26, 2, 2,  2, 62, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  countEvenOdd(arr, n);
  return 0;
}
