#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf_1(vector<int> &nums) {
  int n = nums.size();
  vector<int> output(n, 0);

  long long totalProduct = 1;
  int zeroCount = 0;

  for (const int &num : nums) {
    if (num == 0) {
      zeroCount++;
    } else {
      totalProduct *= num;
    }
  }

  for (int i = 0; i < n; i++) {
    if (zeroCount > 1) {
      output[i] = 0;
    } else if (zeroCount == 1) {
      if (nums[i] == 0) {
        output[i] = totalProduct;
      } else {
        nums[i] = 0;
      }
    } else {
      output[i] = totalProduct / nums[i];
    }
  }
  return output;
}

int main() {
  cout << "Product Of Array Except Self: \n";
  vector<int> nums = {-1, 0, 1, 2, 3};
  vector<int> output = productExceptSelf_1(nums);

  cout << "[ ";
  for (int num : output) {
    cout << num << " ";
  }
  cout << " ]";
  return 0;
}
