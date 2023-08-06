#include <iostream>
#include <vector>
using namespace std;

void seregateElements(int arr[], int n) {
  vector<int> negativeElement;
  vector<int> postiveElement;
  int neg = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] < 0) {
      neg++;
      negativeElement.push_back(arr[i]);
    } else {
      postiveElement.push_back(arr[i]);
    }
  }
  int i = 0;
  for (; i < (n - neg); i++) {
    arr[i] = postiveElement[i];
  }
  int j = 0;
  while (j < neg) {
    arr[i] = negativeElement[j];
    j++;
    i++;
  }
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}

int main() {
  int arr[] = {
      2, -5, 2, 1, 6, 3, 2, -2, 3, -1,
  };
  int n = sizeof(arr) / sizeof(arr[0]);
  seregateElements(arr, n);
  return 0;
}
