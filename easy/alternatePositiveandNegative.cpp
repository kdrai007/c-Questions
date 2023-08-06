#include <iostream>
#include <vector>
using namespace std;

void rearrange(int arr[], int n) {
  int postiveNum = 0, negativeNum = 0;
  vector<int> pos;
  vector<int> neg;
  for (int i = 0; i < n; i++) {
    if (arr[i] < 0) {
      negativeNum++;
      neg.push_back(arr[i]);
    } else {
      postiveNum++;
      pos.push_back(arr[i]);
    }
  }
  int i = 0, j = 0, c = 0;
  while (i < postiveNum && j < negativeNum) {
    arr[c] = pos[i];
    i++;
    c++;

    arr[c] = neg[j];
    j++;
    c++;
  }

  while (i < postiveNum) {
    arr[c] = pos[i];
    i++;
    c++;
  }
  while (j < negativeNum) {
    arr[c] = neg[j];
    j++;
    c++;
  }

  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}

int main() {
  int Arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2, 3, 5, 2, 2, 5, 2, 1, 6, 2, 6};
  int N = sizeof(Arr) / sizeof(Arr[0]);
  rearrange(Arr, N);
  return 0;
}
