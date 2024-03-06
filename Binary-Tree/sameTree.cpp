#include <iostream>
using namespace std;

class Tree {
public:
  int val;
  Tree *left;
  Tree *right;

  Tree(int val) {
    this->val = val;
    this->left = nullptr;
    this->right = nullptr;
  }
};

Tree *buildTree(Tree *root) {
  cout << "Enter data:  ";
  int rootVal;
  cin >> rootVal;
  if (rootVal == -1) {
    return root;
  }
  root = new Tree(rootVal);
  cout << "Enter value for left tree of " << rootVal << ": " << endl;
  root->left = buildTree(root->left);

  cout << "Enter value for right tree of " << rootVal << ": " << endl;
  root->right = buildTree(root->right);
  return root;
}

bool isSameTree(Tree *root1, Tree *root2) {
  if (root1 == root2)
    return true;
  if (!root1 || !root2 || root1->val != root2->val)
    return false;
  return isSameTree(root1->left, root2->left) &&
         isSameTree(root1->right, root2->right);
}

bool isSymmatric(Tree *root) { return isSameTree(root->left, root->right); }

int main() {
  Tree *root1 = nullptr;
  Tree *root2 = nullptr;
  cout << "value for root1" << endl;
  root1 = buildTree(root1);
  cout << endl << "value for root2" << endl;
  root2 = buildTree(root2);

  if (isSameTree(root1, root2))
    cout << "it's same";
  else {
    cout << "it's not same";
  }

  return 0;
}
