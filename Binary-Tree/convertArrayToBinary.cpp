#include <functional>
#include <iostream>
#include <vector>
using namespace std;

class TreeNode {
public:
  int val;
  TreeNode *left;
  TreeNode *right;

  TreeNode(int val, TreeNode *left, TreeNode *right) {
    this->val = val;
    this->left = left;
    this->right = right;
  }
  TreeNode(int val) {
    this->val = val;
    this->left = nullptr;
    this->right = nullptr;
  }
};

TreeNode *convertToBST(vector<int> nums) {
  function<TreeNode *(int, int)> toBst = [&](int left,
                                             int right) -> TreeNode * {
    if (left > right) {
      return nullptr;
    }
    int mid = left + (right - left) / 2;
    auto leftIndex = toBst(left, mid - 1);
    auto rightIndex = toBst(mid + 1, right);
    return new TreeNode(nums[mid], leftIndex, rightIndex);
  };
  return toBst(0, nums.size() - 1);
}

int main() {
  TreeNode *root = nullptr;
  vector<int> nums = {-10, -3, 0, 5, 9};
  root = convertToBST(nums);

  return 0;
}
