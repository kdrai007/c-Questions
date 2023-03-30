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
void traverse(Node *root, vector<int> &ans)
{
    if (root == NULL)
        return;
    traverse(root->left, ans);
    traverse(root->right, ans);
    ans.push_back(root->data);
}

vector<int> postOrder(Node *root)
{
    vector<int> ans;
    traverse(root, ans);
    return ans;
}
int32_t main()
{
    vector<int> ans;
    Node *root = new Node(15);
    ans = postOrder(root);
    for (auto x : ans)
        cout << x;
    return 0;
}