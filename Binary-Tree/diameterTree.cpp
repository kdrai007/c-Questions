#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int x)
    {
        this->data = x;
        this->left = NULL;
        this->right = NULL;
    }
};

int heightTree(Node *root)
{
    if (root == NULL)
        return 0;
    else
    {
        int leftHeight = heightTree(root->left);
        int rightHeight = heightTree(root->right);
        return max(leftHeight, rightHeight) + 1;
    }
}
int diameter(Node *root)
{
    if (root == NULL)
        return 0;
    int op1 = diameter(root->left);
    int op2 = diameter(root->right);
    int op3 = heightTree(root->left) + 1 + heightTree(root->right);
    return max(op1, max(op2, op3));
}

int32_t main()
{
    cout << diameter(NULL);
    return 0;
}