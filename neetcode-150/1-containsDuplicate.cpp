#include <iostream>
#include <map>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int> nums) {
  map<int, int> nmap;

  for (int i = 0; i < nums.size(); i++) {
    nmap[nums[i]]++;
  }

  for (auto n : nmap) {
    if (n.second > 1)
      return true;
  }
  return false;
}

int main() {
  vector<int> nums = {1, 2, 3, 4};
  cout << containsDuplicate(nums);
  return 0;
}
