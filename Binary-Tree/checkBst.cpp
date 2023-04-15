#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};
bool helper(Node *root, int minLimit, int maxLimit)
{
    if (!root)
        return true;
    return root->data > minLimit and root->data < maxLimit and helper(root->left, minLimit, root->data) and
           helper(root->right, root->data, maxLimit);
}
bool isBST(Node *root)
{
    if (!root)
        return true;
    return helper(root, INT_MIN, INT_MAX);
}
int main()
{
    return 0;
}