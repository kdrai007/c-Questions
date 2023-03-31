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
    int leftHeight = heightTree(root->left);
    int rightHeight = heightTree(root->right);
    return max(leftHeight, rightHeight);
}

int32_t main()
{

    return 0;
}