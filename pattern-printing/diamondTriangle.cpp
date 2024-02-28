#include <iostream>
using namespace std;

int main() {
  int n = 5;
  for (int i = 0; i < n; i++) {
    int j = 0;
    while (j < n - i) {
      cout << " ";
      j++;
    }
    j = 0;
    while (j < i) {
      cout << ". ";
      j++;
    }
    cout<<endl;
  }

  for (int i = n; i>0; i--) {
    int j = 0;
    while (j < n - i) {
      cout << " ";
      j++;
    }
    j = 0;
    while (j > i) {
      cout << ". ";
      j++;
    }
    cout<<endl;
  }

  return 0;
}
