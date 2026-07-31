#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums) {
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

vector<int> productExceptSelf_1(vector<int> &nums) {
  int n = nums.size();
  vector<int> res(n);
  vector<int> pref(n);
  vector<int> suff(n);

  pref[0] = 1;
  suff[n - 1] = 1;
  for (int i = 1; i < n; i++) {
    pref[i] = nums[i - 1] * pref[i - 1];
  }
  for (int i = n - 2; i >= 0; i--) {
    suff[i] = nums[i + 1] * suff[i + 1];
  }
  for (int i = 0; i < n; i++) {
    res[i] = pref[i] * suff[i];
  }
  return res;
}

int main() {
  cout << "Product Of Array Except Self: \n";
  vector<int> nums = {1, 2, 3, 4};
  vector<int> output = productExceptSelf_1(nums);

  cout << "[ ";
  for (int num : output) {
    cout << num << " ";
  }
  cout << " ]";
  return 0;
}
