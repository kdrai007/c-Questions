#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node *next;
    Node(int x)
    {
        val = x;
        next = NULL;
    }
};
void insertAtHead(Node *&head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        head = temp;
    }
    temp->next = head;
    head = temp;
}
int32_t main()
{
    Node *head = NULL;

    return 0;
}