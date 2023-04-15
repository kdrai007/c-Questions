#include <iostream>
#include <queue>
#include <unordered_map>

using namespace std;

struct Node
{
    int val;
    Node *left;
    Node *right;
};

int verticalWidth(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    // Create a map to store the minimum and maximum horizontal distances for each level.
    unordered_map<int, pair<int, int>> levels;

    // Perform level-order traversal and update the minimum and maximum distances for each level.
    queue<pair<Node *, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        Node *node = q.front().first;
        int hd = q.front().second;
        q.pop();

        if (levels.find(hd) == levels.end())
        {
            levels[hd] = {hd, hd};
        }
        else
        {
            levels[hd].first = min(levels[hd].first, hd);
            levels[hd].second = max(levels[hd].second, hd);
        }

        if (node->left)
        {
            q.push({node->left, hd - 1});
        }

        if (node->right)
        {
            q.push({node->right, hd + 1});
        }
    }

    // Compute the vertical width as the maximum difference between the minimum and maximum distances for each level.
    int width = 0;
    for (auto &[_, range] : levels)
    {
        width = max(width, range.second - range.first + 1);
    }

    return width;
}

int main()
{
    Node *root = new Node{1};
    root->left = new Node{2};
    root->right = new Node{3};
    root->left->left = new Node{4};
    root->left->right = new Node{5};
    root->right->left = new Node{6};
    root->right->right = new Node{7};

    cout << "Vertical width: " << verticalWidth(root) << endl;

    return 0;
}
