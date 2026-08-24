#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums) {
  vector<vector<int>> res;
  int target = 0;
  // Before finding the indexes
  //  First sort the nums array, using inbuilt sort function
  sort(nums.begin(), nums.end());

  for (int i = 0; i < nums.size() - 2; i++) {
    if (i > 0 && nums[i] == nums[i - 1]) {
      continue;
    }
    int left = i + 1;
    int right = nums.size() - 1;

    while (left < right) {
      int sum = nums[i] + nums[left] + nums[right];

      if (sum > target) {
        right--;
      } else if (sum < target)
        left++;
      else {
        res.push_back({nums[i], nums[left], nums[right]});

        // increment and dcrement the pointers
        left++;
        right--;

        while (left < right && nums[left] == nums[left - 1]) {
          left++;
        }
        while (left < right && nums[right] == nums[right + 1]) {
          right--;
        }
      }
    }
  }
  return res;
}

int main() {
  cout << "12: Three Sum :-" << endl;
  vector<int> nums = {-1, 0, 1, 2, -1, -4};
  vector<vector<int>> output = threeSum(nums);

  for (vector<int> nums : output) {
    cout << nums[0] << " ";
    cout << nums[1] << " ";
    cout << nums[2] << " ";
    cout << endl;
  }
  return 0;
}
