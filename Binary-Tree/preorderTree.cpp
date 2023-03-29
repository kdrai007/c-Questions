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

void trav(vector<int> &b, Node *root)
{
    if (!root)
        return;
    b.push_back(root->data);
    trav(b, root->left);
    trav(b, root->right);
}

// Function to return a list containing the preorder traversal of the tree.
vector<int> preorder(Node *root)
{
    // Your code here
    vector<int> b;
    trav(b, root);
    return b;
}

int main()
{
    return 0;
}