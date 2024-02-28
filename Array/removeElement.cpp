#include <iostream>
#include <vector>
using namespace std;

int removeElement(int nums[], int n, int val) {
  int newArr[n];
  int j = 0;

  for (int i = 0; i < n; i++) {
    newArr[i] = 0;
  }
  for (int i = 0; i < n; i++) {
    if (nums[i] != val) {
      newArr[j] = nums[i];
      j++;
    }
  }
  for (int i = 0; i < n; i++) {
    nums[i] = newArr[i];
  }
  return j;
}

int main() {
  int nums[] = {0, 1, 2, 2, 3, 0, 4, 2};
  int n = sizeof(nums) / sizeof(nums[0]);
  int val = 2;
  int ans = removeElement(nums, n, val);
  cout << ans;
  return 0;
}
