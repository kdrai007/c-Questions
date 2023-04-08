#include <bits/stdc++.h>
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
int isSumProperty(Node *root)
{
    if (!root)
        return 1;
    if (!root->left and !root->right)
        return 1;
    if (isSumProperty(root->left) and isSumProperty(root->right))
    {
        int l = 0, r = 0;
        if (root->left)
            l = root->left->data;
        if (root->right)
            r = root->right->data;
        if (root->data == (l + r))
            return 1;
    }
    return 0;
}
int main()
{
    return 0;
}