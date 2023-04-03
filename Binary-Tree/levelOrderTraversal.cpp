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
// Level order traversal line by line
vector<vector<int>> levelOrderLineByLine(Node *node)
{
    if (node == NULL)
        return {};
    vector<vector<int>> ans;
    queue<Node *> q;
    q.push(node);
    while (!q.empty())
    {
        int size = q.size();
        vector<int> curr;
        for (int i = 0; i < size; i++)
        {
            Node *temp = q.front();
            curr.push_back(temp->data);
            q.pop();

            if (temp->right)
                q.push(temp->right);
            if (temp->left)
                q.push(temp->left);
        }
        ans.push_back(curr);
    }
    return ans;
}
int main()
{
    Node *root = new Node(25);
    vector<int> ans1;
    vector<vector<int>> ans2;
    ans1 = levelOrder(root);
    ans2 = levelOrderLineByLine(root);
    for (auto x : ans1)
    {
        cout << x;
    }
    return 0;
}