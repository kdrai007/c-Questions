#include <iostream>
#include <queue>
using namespace std;

class TreeNode {
public:
  int val;
  TreeNode *left;
  TreeNode *right;

  TreeNode(int val) {
    this->val = val;
    this->left = nullptr;
    this->right = nullptr;
  }
};

void buildTree(TreeNode *root) {
  queue<TreeNode *> q;
  cout << "Enter Root Value: ";
  int data;
  cin >> data;
  q.push(root);
  while (!q.empty()) {
    TreeNode *temp = q.front();
    cout << "Enter value for " << temp->val << ": ";
    cin >> data;
    if (data == -1) {
      q.pop();
    }
    if (!temp->left) {
      temp->val = data;
      q.push(temp->left);
    }
  }
}

int maxDepth(TreeNode *root) {
  if (!root)
    return 0;
  return max(maxDepth(root->left) + 1, maxDepth(root->right) + 1);
}

int main() {
  TreeNode *root = nullptr;

  cout << "hello!";
  return 0;
}
