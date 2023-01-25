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

Node *insertAtEnd(struct Node *head, int x)
{
    struct Node *temp = new Node(x);
    if (head == NULL)
    {
        return temp;
    }
    struct Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}
void displayNode(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int32_t main()
{
    struct Node *head = NULL;
    head = insertAtEnd(head, 15);
    head = insertAtEnd(head, 16);
    head = insertAtEnd(head, 17);
    head = insertAtEnd(head, 17);
    displayNode(head);

    return 0;
}