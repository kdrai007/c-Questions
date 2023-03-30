#include <iostream>
#include <vector>
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

vector<int> inOrder(Node *root)
{
    vector<int> ans;
    if (root)
    {
        ans = inOrder(root->left);
        ans.push_back(root->data);
        vector<int> bns = inOrder(root->right);
        ans.insert(ans.end(), bns.begin(), bns.end());
    }
    return ans;
}

int32_t main()
{

    return 0;
}