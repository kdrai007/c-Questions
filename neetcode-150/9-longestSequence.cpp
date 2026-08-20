#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int longestSequence(vector<int> &nums) {
  unordered_set<int> numSet(nums.begin(), nums.end());
  int maxLength = 0;
  unordered_map<int, int> numLengths;

  for (int num : nums) {
    int nextNum = num;
    while (numSet.count(nextNum)) {
      numSet.erase(nextNum);
      nextNum++;
    }

    int currentSequenceLength = (nextNum - num);
    if (numLengths.count(nextNum)) {
      currentSequenceLength += numLengths[nextNum];
    }

    numLengths[num] = currentSequenceLength;
    maxLength = max(maxLength, numLengths[num]);
  }

  return maxLength;
}

int main() {
  cout << "9: Longest Squence in an Array:- " << endl;
  vector<int> nums = {2, 20, 4, 10, 3, 4, 5};

  int output = longestSequence(nums);
  cout << output;
  return 0;
}
