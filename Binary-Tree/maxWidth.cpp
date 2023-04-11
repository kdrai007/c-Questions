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
    if (root == NULL)
        return 0;
    int res = 0;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        int count = q.size();
        res = max(count, res);
        for (int i = 0; i < count; i++)
        {
            Node *curr = q.front();
            q.pop();

            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }
    }
    return res;
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