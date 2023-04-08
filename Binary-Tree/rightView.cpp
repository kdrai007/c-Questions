/*Given a Binary Tree, return Left view of it. Left view of a Binary Tree is set of nodes visible when tree is visited from Left side. The task is to complete the function rightView(), which accepts root of the tree as argument.

Left view of following tree is 1 3 7 5
          1
       /     \
     2        3
   /     \    /    \
  4     5   6    7
   \
     8   */

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
vector<int> leftView(Node *root)
{
    vector<int> ans;
    queue<Node *> q;
    if (root == NULL)
        return ans;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 1; i <= n; i++)
        {
            Node *temp = q.front();
            q.pop();
            if (i == n)
                ans.push_back(temp->data);
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
    return ans;
}

int32_t main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> result = leftView(root);
    for (auto x : result)
    {
        cout << x << " ";
    }
    return 0;
}