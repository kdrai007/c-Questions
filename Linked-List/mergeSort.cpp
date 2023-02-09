#include <iostream>
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
void push_at_head(Node *&head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    temp->next = head;
    head = temp;
}

void displayNode(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int32_t main()
{
    Node *head = NULL;
    int Nth = 1;
    while (Nth <= 10)
    {
        push_at_head(head, Nth);
        Nth++;
    }
    displayNode(head);
    return 0;
}