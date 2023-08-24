#include <iostream>
using namespace std;

int countBuildings(int h[], int n) {
  int count = 1;
  int currentTallestBuilding = h[0];
  for (int i = 1; i < n; i++) {
    if (h[i] > currentTallestBuilding) {
      count++;
      currentTallestBuilding = h[i];
    }
  }
  return count;
}

int main() {
  int N = 5, H[] = {7, 4, 8, 2, 9};
  cout << countBuildings(H, N);
  return 0;
}
