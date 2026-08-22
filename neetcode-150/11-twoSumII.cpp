#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
  int left = 0;
  int right = static_cast<int>(nums.size() - 1);
  int current_sum;

  while (left < right) {
    current_sum = nums[left] + nums[right];
    if (current_sum == target) {
      return {left + 1, right + 1};
    } else if (current_sum > target)
      right--;
    else
      left++;
  }

  return {};
}

int main() {
  cout << "11: Two Integer Sum II :- " << endl;
  // function inputs
  vector<int> nums = {1, 2, 3, 4, 5};
  int target = 9;

  // result
  vector<int> output = twoSum(nums, target);
  for (int i = 0; i < output.size(); i++) {
    cout << output[i] << " ";
  }

  return 0;
}
