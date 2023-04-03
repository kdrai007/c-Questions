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
void printSubtreeNode(Node *root, int k)
{
    if (root == NULL or k < 0)
        return;
    if (k == 0)
        cout << root->data << " ";

    printSubtreeNode(root->left, k - 1);
    printSubtreeNode(root->right, k - 1);
}

int printNodeAtK(Node *node, Node *target, int k)
{
    if (node == NULL)
        return -1;
    if (node == target)
    {
        printSubtreeNode(node, k);
        return 0;
    }
    int dl = printNodeAtK(node->left, target, k);
    if (dl != -1)
    {
        if (dl + 1 == k)
        {
            cout << node->data << " ";
        }
        else
        {
            printSubtreeNode(node->right, k - dl - 2);
        }
    }
    int dr = printNodeAtK(node->right, target, k);
    if (dr != -1)
    {
        if (dr + 1 == k)
        {
            cout << node->data << " ";
        }
        else
        {
            printSubtreeNode(node->left, k - dr - 2);
        }
    }
    return -1;
}

int32_t main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    printNodeAtK(root, root->left, 1);
    return 0;
}