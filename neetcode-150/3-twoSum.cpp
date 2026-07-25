#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> nums, int target) {
  unordered_map<int, int> nmap;
  vector<int> sumIdx;
  int n = nums.size();

  for (int i = 0; i < n; i++)
    nmap[nums[i]] = i;

  for (int i = 0; i < n; i++) {
    int remaining = target - nums[i];
    if (nmap.count(remaining) && nmap[remaining] != i) {
      sumIdx = {i, nmap[remaining]};
      return sumIdx;
    }
  }
  return sumIdx;
}

int main() {
  vector<int> nums = {3, 2, 4, 5}, resIdx;
  int target = 6;
  resIdx = twoSum(nums, target);
  cout << resIdx[0] << " ," << resIdx[1];
  return 0;
}
