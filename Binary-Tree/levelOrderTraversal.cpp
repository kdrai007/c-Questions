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
vector<int> levelOrder(Node *root)
{
    vector<int> ans;
    queue<Node *> q;
    if (root == NULL)
        return ans;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        if (curr != NULL)
        {
            ans.push_back(curr->data);
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
        else if (curr == NULL)
        {
            if (!q.empty())
                q.push(NULL);
        }
    }
    return ans;
}
int main()
{
    return 0;
}