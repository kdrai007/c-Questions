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
void mirror(Node *root)
{
    if (root == NULL)
        return;
    Node *temp = root->left;
    root->left = root->right;
    root->right = temp;
    mirror(root->left);
    mirror(root->right);
}
int main()
{
    return 0;
}