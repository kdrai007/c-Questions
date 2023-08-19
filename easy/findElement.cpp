#include <climits>
#include <iostream>
using namespace std;

void printElement(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int findElement(int arr[], int n) {
  int minNumber = INT_MAX;
  int maxNumber = INT_MIN;
  int l[n];
  int s[n];
  for (int i = 0; i < n; i++) {
    maxNumber = max(maxNumber, arr[i]);
    l[i] = maxNumber;
  }
  for (int i = n - 1; i >= 0; i--) {
    minNumber = min(minNumber, arr[i]);
    s[i] = minNumber;
  }
  for(int i=1;i<n-1;i++){
      if(arr[i]>=l[i-1] && arr[i]<=s[i+1] ){
          return arr[i];
      }
  }
  return -1;
}
int main() {
  int n = 10, arr[] = {
                  1, 2, 5, 2, 1, 7, 8, 9, 11, 23,
              };
  cout << findElement(arr, n);
  return 0;
}
