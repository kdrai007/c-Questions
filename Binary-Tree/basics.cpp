#include <iostream>
#include <queue>
#include <stack>
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

void levelOrderTraversal(Tree *root) {
    cout << endl << "********* Level Order Traversal *********" << endl;
    queue<Tree *> q;
    q.push(root);
    q.push(nullptr);
    while (!q.empty()) {
        Tree *temp = q.front();
        q.pop();
        if (temp == nullptr) {
            cout << endl;
            if (!q.empty()) {
                q.push(nullptr);
            }
        } else {
            cout << temp->val << " ";
            if (temp->left) {
                q.push(temp->left);
            }

            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}


void reverseLevelOrderTraversal(Tree *root) {
  cout << endl << "******** Reverse Level Order Traversal *********" << endl;
  queue<Tree *> q;
  stack<Tree *> s;
  q.push(root);
  while (!q.empty()) {
    Tree *temp = q.front();
    q.pop();
    s.push(temp);
    if (temp->left) {
      q.push(temp->left);
    }
    if (temp->right) {
      q.push(temp->right);
    }
  }
  while (!s.empty()) {
    Tree *temp = s.top();
    cout << temp->val << " ";
    s.pop();
  }
}

void inorderTraversal(Tree *root) {
  if (root == nullptr)
    return;
  inorderTraversal(root->left);
  cout << root->val << " ";
  inorderTraversal(root->right);
}
void preOrderTraversal(Tree *root) {
  if (root == nullptr)
    return;
  cout << root->val << " ";
  preOrderTraversal(root->left);
  preOrderTraversal(root->right);
}

int main() {
  Tree *root = nullptr;
  root = buildTree(root);
  // level order traversal
  levelOrderTraversal(root);
  // reverseLevelOrderTraversal(root);

  cout << endl << "********* Inorder Traversal ************" << endl;
  inorderTraversal(root);

  cout << endl << "********* Pre Order Traversal ************" << endl;
  preOrderTraversal(root);

  return 0;
}
