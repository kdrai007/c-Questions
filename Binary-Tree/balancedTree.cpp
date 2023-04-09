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
bool isBalanced(Node *root)
{
    if (root == NULL)
        return true;
    bool left = isBalanced(root->left);
    bool right = isBalanced(root->right);
    bool diff = abs(heightTree(root->left) - heightTree(root->right)) <= 1;
    if (left && right && diff)
    {
        return true;
    }
    return false;
}
int32_t main()
{

    return 0;
}