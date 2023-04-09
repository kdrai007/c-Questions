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
int maxwidth(Node *root)
{
    //
    return 0;
}
int main()
{
    Node *root = new Node(15);
    root->left = new Node(26);
    root->right = new Node(23);
    root->left->left = new Node(25);
    cout << maxwidth(root) << endl;
    return 0;
}