#include <iostream>
using namespace std;

int main() {
  int n = 6;
  for (int i = 0; i < n; i++) {
    int j = 0;
    while (j < i) {
      cout << "* ";
      j++;
    }
    if (i != 0)
      cout << endl;
  }
  return 0;
}
