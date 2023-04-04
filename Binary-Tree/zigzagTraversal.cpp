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
        this->left = this->right = NULL;
    }
};
vector<int> zigzag(Node *root)
{
    vector<int> ans;
    queue<Node *> q;
    if (root == NULL)
        return ans;
    q.push(root);
    bool left_to_right = true;
    while (!q.empty())
    {
        int size = q.size();
        vector<int> level(size);
        for (int i = 0; i < size; i++)
        {
            Node *curr = q.front();
            q.pop();
            int index = left_to_right ? i : size - i - 1;
            level[index] = curr->data;
            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }
        for (int i = 0; i < size; i++)
        {
            ans.push_back(level[i]);
        }
        left_to_right = !left_to_right;
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

    vector<int> result = zigzag(root);

    cout << "Zigzag traversal: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}