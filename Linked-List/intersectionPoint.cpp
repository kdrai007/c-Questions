#include <iostream>
#include <unordered_set>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int intersectionPoint(Node *h1, Node *h2)
{
    Node *p1 = h1;
    Node *p2 = h2;
    unordered_set<Node *> mp;
    while (p1)
    {
        mp.insert(p1);
        p1 = p1->next;
    }
    while (p2)
    {
        if (mp.count(p2))
            return p2->data;
    }
    return 0;
}

int32_t main()
{

    return 0;
}